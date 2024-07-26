#include "DatabaseFunctions.h"

OdbcConnection^ ConnectToDatabase()
{
	String^ connectionString = "Driver={PostgreSQL ODBC Driver(UNICODE)};Server=192.168.56.1;Port=5432;Database=practik;Uid=postgres;Pwd=0000;";
	OdbcConnection^ connection = gcnew OdbcConnection(connectionString);
	connection->Open();
	return connection;
}

String^ GetWindowsVersion() {
	String^ windowsVersion = "�� ������� �������� ���������� � ������ Windows.";
	try {
		Process^ process = gcnew Process();
		process->StartInfo->FileName = "cmd.exe";
		process->StartInfo->Arguments = "/c ver";
		process->StartInfo->RedirectStandardOutput = true;
		process->StartInfo->UseShellExecute = false;
		process->StartInfo->CreateNoWindow = true;
		process->Start();
		windowsVersion = process->StandardOutput->ReadToEnd();
		process->WaitForExit();
	}
	catch (Exception^ ex) {
		windowsVersion = "������: " + ex->Message;
	}
	return windowsVersion;
}

void WriteToDatabase(array<String^>^ subkeyNames, RegistryKey^ key, OdbcConnection^ conn, static int id_pc)
{
	// ������� ���� ����������� �������
	for (int i = 0; i < subkeyNames->Length; i++)
	{
		RegistryKey^ subkey = key->OpenSubKey(subkeyNames[i]);
		String^ displayName = dynamic_cast<String^>(subkey->GetValue("DisplayName"));
		String^ displayVersion = dynamic_cast<String^>(subkey->GetValue("DisplayVersion"));

		// ���� ������ ���, ���������� ������ ������
		if (String::IsNullOrEmpty(displayVersion))
		{
			displayVersion = "";
		}

		// �������� ������� ����� ���������
		if (!String::IsNullOrEmpty(displayName))
		{
			// ���������� SQL-������� ��� �������� ������������ �����, ������ ��������� � id_pc
			String^ sqlCheck = "SELECT COUNT(*) FROM public.user_prog WHERE name_prog = ? AND version_prog = ? AND id_pc = ?";
			OdbcCommand^ cmdCheck = gcnew OdbcCommand(sqlCheck, conn);
			cmdCheck->Parameters->AddWithValue("?", displayName);
			cmdCheck->Parameters->AddWithValue("?", displayVersion);
			cmdCheck->Parameters->AddWithValue("?", id_pc);

			// ���������� ������� � ��������� ����������
			int count = Convert::ToInt32(cmdCheck->ExecuteScalar());
			if (count == 0) // ���� ������ ��������� ��� ������� id_pc
			{
				// ���������� SQL-������� ��� ������� ������
				String^ sqlInsert = "INSERT INTO public.user_prog (id_pc, name_prog, version_prog) VALUES (?, ?, ?)";
				OdbcCommand^ cmdInsert = gcnew OdbcCommand(sqlInsert, conn);

				// ���������� ���������� � �������
				cmdInsert->Parameters->AddWithValue("?", id_pc);
				cmdInsert->Parameters->AddWithValue("?", displayName);
				cmdInsert->Parameters->AddWithValue("?", displayVersion);

				// ���������� �������
				cmdInsert->ExecuteNonQuery();
			}
		}
	}
}

void WriteComputerInfoToDatabase(static int% id_pc)
{
	String^ computerName = Dns::GetHostName();

	// ��������� IP-�������
	IPAddress^ ipV4Address = Dns::GetHostEntry(computerName)->AddressList[2];
	IPAddress^ ipV6Address = Dns::GetHostEntry(computerName)->AddressList[0];

	// ��������� MAC-������
	String^ macAddress = "";
	NetworkInterface^ networkInterface = NetworkInterface::GetAllNetworkInterfaces()[0];
	array<Byte>^ macBytes = networkInterface->GetPhysicalAddress()->GetAddressBytes();
	for (int i = 0; i < macBytes->Length; i++)
	{
		macAddress += macBytes[i].ToString("X2");
		if (i != macBytes->Length - 1)
			macAddress += "-";
	}

	// ��������� ������ Windows � �������������� ������ Environment
	String^ windowsVersion = GetWindowsVersion();

	// ����������� � ���� ������
	OdbcConnection^ conn = ConnectToDatabase();

	// �������� ������������� ������
	OdbcCommand^ commandCheck = gcnew OdbcCommand("SELECT id_pc FROM users WHERE ipv4_pc=? AND ipv6_pc=? AND mac_pc=? AND name_pc=?", conn);
	commandCheck->Parameters->AddWithValue("?", ipV4Address->ToString());
	commandCheck->Parameters->AddWithValue("?", ipV6Address->ToString());
	commandCheck->Parameters->AddWithValue("?", macAddress);
	commandCheck->Parameters->AddWithValue("?", computerName);

	OdbcDataReader^ reader = commandCheck->ExecuteReader();
	if (reader->Read()) // ���� ������ �������
	{
		// ������ ��� ����������
		id_pc = reader->GetInt32(0);
		reader->Close();

		// ���������� ������ Windows � ������������ ������
		String^ queryUpdate = "UPDATE users SET os_version = ? WHERE id_pc = ?";
		OdbcCommand^ commandUpdate = gcnew OdbcCommand(queryUpdate, conn);
		commandUpdate->Parameters->AddWithValue("?", windowsVersion);
		commandUpdate->Parameters->AddWithValue("?", id_pc);

		commandUpdate->ExecuteNonQuery();
	}
	else
	{
		reader->Close();

		// ������� ������ � �� � �������
		String^ queryInsert = "INSERT INTO users (ipv4_pc, ipv6_pc, mac_pc, name_pc, os_version) VALUES (?, ?, ?, ?, ?)";
		OdbcCommand^ commandInsert = gcnew OdbcCommand(queryInsert, conn);
		commandInsert->Parameters->AddWithValue("?", ipV4Address->ToString());
		commandInsert->Parameters->AddWithValue("?", ipV6Address->ToString());
		commandInsert->Parameters->AddWithValue("?", macAddress);
		commandInsert->Parameters->AddWithValue("?", computerName);
		commandInsert->Parameters->AddWithValue("?", windowsVersion);

		commandInsert->ExecuteNonQuery();

		// ��������� id_pc ��� ����� ������
		OdbcCommand^ commandNewId = gcnew OdbcCommand("SELECT id_pc FROM users WHERE ipv4_pc=? AND ipv6_pc=? AND mac_pc=? AND name_pc=?", conn);
		commandNewId->Parameters->AddWithValue("?", ipV4Address->ToString());
		commandNewId->Parameters->AddWithValue("?", ipV6Address->ToString());
		commandNewId->Parameters->AddWithValue("?", macAddress);
		commandNewId->Parameters->AddWithValue("?", computerName);

		id_pc = safe_cast<int>(commandNewId->ExecuteScalar());
	}

	conn->Close();
}

void SaveScreenshotToDatabase(int id_pc)
{
	// ����������� � ���� ������
	OdbcConnection^ connection = ConnectToDatabase();

	// �������� ������� ������ � ������� tracking
	String^ sqlCheck = "SELECT COUNT(*) FROM public.tracking WHERE id_pc = ?";
	OdbcCommand^ cmdCheck = gcnew OdbcCommand(sqlCheck, connection);
	cmdCheck->Parameters->AddWithValue("?", id_pc);
	int count = Convert::ToInt32(cmdCheck->ExecuteScalar());

	if (count > 0) // ���� ������ ����������
	{
		// �������� ��������� ����� ������
		Rectangle bounds = Screen::PrimaryScreen->Bounds;
		Bitmap^ screenshot = gcnew Bitmap(bounds.Width, bounds.Height);

		// �������� ������� Graphics �� Bitmap
		Graphics^ g = Graphics::FromImage(screenshot);

		// ����������� ������� ������ � Bitmap
		g->CopyFromScreen(Point(0, 0), Point(0, 0), bounds.Size);

		// �������� MemoryStream ��� ���������� ��������� � ���� ������� ������
		MemoryStream^ ms = gcnew MemoryStream();
		screenshot->Save(ms, System::Drawing::Imaging::ImageFormat::Png);
		array<Byte>^ imageBytes = ms->ToArray();

		// ���������� SQL-������� ��� ������� ���������
		String^ sql = "INSERT INTO images_table (id_pc, image_data) VALUES (?, ?)";
		OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

		// ���������� ���������� � �������
		cmd->Parameters->AddWithValue("?", id_pc); // ���������� ������������� ����������
		cmd->Parameters->AddWithValue("?", imageBytes); // ������ ������ �����������

		// ���������� �������
		cmd->ExecuteNonQuery();

		// ������������ �������� Graphics � MemoryStream
		delete g;
		delete ms;
		delete screenshot;
	}

	// �������� ����������� � ���� ������
	connection->Close();
}

bool CheckAndShutdownPC(int id_pc)
{
	OdbcConnection^ connection = ConnectToDatabase();
	OdbcCommand^ command = gcnew OdbcCommand("SELECT COUNT(*) FROM ban_pc WHERE id_pc = ?", connection);
	command->Parameters->AddWithValue("id", id_pc);
	bool recordExists = false;

	try
	{
		if (connection->State == ConnectionState::Open)
		{
			connection->Close();
		}
		connection->Open();
		int count = Convert::ToInt32(command->ExecuteScalar());
		if (count > 0)
		{
			recordExists = true;
			// ���������� ������� ����������
			System::Diagnostics::Process::Start("shutdown", "/s /f /t 0");
		}
	}
	catch (Exception^ e)
	{
		// ��������� ����������
		MessageBox::Show("������: " + e->Message);
	}
	finally
	{
		if (connection->State == ConnectionState::Open)
		{
			connection->Close();
		}
	}

	return recordExists;
}