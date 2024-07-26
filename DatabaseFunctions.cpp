#include "DatabaseFunctions.h"

OdbcConnection^ ConnectToDatabase()
{
	String^ connectionString = "Driver={PostgreSQL ODBC Driver(UNICODE)};Server=192.168.56.1;Port=5432;Database=practik;Uid=postgres;Pwd=0000;";
	OdbcConnection^ connection = gcnew OdbcConnection(connectionString);
	connection->Open();
	return connection;
}

String^ GetWindowsVersion() {
	String^ windowsVersion = "Не удалось получить информацию о версии Windows.";
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
		windowsVersion = "Ошибка: " + ex->Message;
	}
	return windowsVersion;
}

void WriteToDatabase(array<String^>^ subkeyNames, RegistryKey^ key, OdbcConnection^ conn, static int id_pc)
{
	// Перебор всех подразделов реестра
	for (int i = 0; i < subkeyNames->Length; i++)
	{
		RegistryKey^ subkey = key->OpenSubKey(subkeyNames[i]);
		String^ displayName = dynamic_cast<String^>(subkey->GetValue("DisplayName"));
		String^ displayVersion = dynamic_cast<String^>(subkey->GetValue("DisplayVersion"));

		// Если версии нет, используем пустую строку
		if (String::IsNullOrEmpty(displayVersion))
		{
			displayVersion = "";
		}

		// Проверка наличия имени программы
		if (!String::IsNullOrEmpty(displayName))
		{
			// Подготовка SQL-запроса для проверки уникальности имени, версии программы и id_pc
			String^ sqlCheck = "SELECT COUNT(*) FROM public.user_prog WHERE name_prog = ? AND version_prog = ? AND id_pc = ?";
			OdbcCommand^ cmdCheck = gcnew OdbcCommand(sqlCheck, conn);
			cmdCheck->Parameters->AddWithValue("?", displayName);
			cmdCheck->Parameters->AddWithValue("?", displayVersion);
			cmdCheck->Parameters->AddWithValue("?", id_pc);

			// Выполнение запроса и получение результата
			int count = Convert::ToInt32(cmdCheck->ExecuteScalar());
			if (count == 0) // Если запись уникальна для данного id_pc
			{
				// Подготовка SQL-запроса для вставки данных
				String^ sqlInsert = "INSERT INTO public.user_prog (id_pc, name_prog, version_prog) VALUES (?, ?, ?)";
				OdbcCommand^ cmdInsert = gcnew OdbcCommand(sqlInsert, conn);

				// Добавление параметров в команду
				cmdInsert->Parameters->AddWithValue("?", id_pc);
				cmdInsert->Parameters->AddWithValue("?", displayName);
				cmdInsert->Parameters->AddWithValue("?", displayVersion);

				// Выполнение команды
				cmdInsert->ExecuteNonQuery();
			}
		}
	}
}

void WriteComputerInfoToDatabase(static int% id_pc)
{
	String^ computerName = Dns::GetHostName();

	// Получение IP-адресов
	IPAddress^ ipV4Address = Dns::GetHostEntry(computerName)->AddressList[2];
	IPAddress^ ipV6Address = Dns::GetHostEntry(computerName)->AddressList[0];

	// Получение MAC-адреса
	String^ macAddress = "";
	NetworkInterface^ networkInterface = NetworkInterface::GetAllNetworkInterfaces()[0];
	array<Byte>^ macBytes = networkInterface->GetPhysicalAddress()->GetAddressBytes();
	for (int i = 0; i < macBytes->Length; i++)
	{
		macAddress += macBytes[i].ToString("X2");
		if (i != macBytes->Length - 1)
			macAddress += "-";
	}

	// Получение версии Windows с использованием класса Environment
	String^ windowsVersion = GetWindowsVersion();

	// Подключение к базе данных
	OdbcConnection^ conn = ConnectToDatabase();

	// Проверка существования записи
	OdbcCommand^ commandCheck = gcnew OdbcCommand("SELECT id_pc FROM users WHERE ipv4_pc=? AND ipv6_pc=? AND mac_pc=? AND name_pc=?", conn);
	commandCheck->Parameters->AddWithValue("?", ipV4Address->ToString());
	commandCheck->Parameters->AddWithValue("?", ipV6Address->ToString());
	commandCheck->Parameters->AddWithValue("?", macAddress);
	commandCheck->Parameters->AddWithValue("?", computerName);

	OdbcDataReader^ reader = commandCheck->ExecuteReader();
	if (reader->Read()) // Если запись найдена
	{
		// Запись уже существует
		id_pc = reader->GetInt32(0);
		reader->Close();

		// Обновление версии Windows в существующей записи
		String^ queryUpdate = "UPDATE users SET os_version = ? WHERE id_pc = ?";
		OdbcCommand^ commandUpdate = gcnew OdbcCommand(queryUpdate, conn);
		commandUpdate->Parameters->AddWithValue("?", windowsVersion);
		commandUpdate->Parameters->AddWithValue("?", id_pc);

		commandUpdate->ExecuteNonQuery();
	}
	else
	{
		reader->Close();

		// Вставка данных о ПК в таблицу
		String^ queryInsert = "INSERT INTO users (ipv4_pc, ipv6_pc, mac_pc, name_pc, os_version) VALUES (?, ?, ?, ?, ?)";
		OdbcCommand^ commandInsert = gcnew OdbcCommand(queryInsert, conn);
		commandInsert->Parameters->AddWithValue("?", ipV4Address->ToString());
		commandInsert->Parameters->AddWithValue("?", ipV6Address->ToString());
		commandInsert->Parameters->AddWithValue("?", macAddress);
		commandInsert->Parameters->AddWithValue("?", computerName);
		commandInsert->Parameters->AddWithValue("?", windowsVersion);

		commandInsert->ExecuteNonQuery();

		// Получение id_pc для новой записи
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
	// Подключение к базе данных
	OdbcConnection^ connection = ConnectToDatabase();

	// Проверка наличия записи в таблице tracking
	String^ sqlCheck = "SELECT COUNT(*) FROM public.tracking WHERE id_pc = ?";
	OdbcCommand^ cmdCheck = gcnew OdbcCommand(sqlCheck, connection);
	cmdCheck->Parameters->AddWithValue("?", id_pc);
	int count = Convert::ToInt32(cmdCheck->ExecuteScalar());

	if (count > 0) // Если запись существует
	{
		// Создание скриншота всего экрана
		Rectangle bounds = Screen::PrimaryScreen->Bounds;
		Bitmap^ screenshot = gcnew Bitmap(bounds.Width, bounds.Height);

		// Создание объекта Graphics из Bitmap
		Graphics^ g = Graphics::FromImage(screenshot);

		// Копирование области экрана в Bitmap
		g->CopyFromScreen(Point(0, 0), Point(0, 0), bounds.Size);

		// Создание MemoryStream для сохранения скриншота в виде массива байтов
		MemoryStream^ ms = gcnew MemoryStream();
		screenshot->Save(ms, System::Drawing::Imaging::ImageFormat::Png);
		array<Byte>^ imageBytes = ms->ToArray();

		// Подготовка SQL-запроса для вставки скриншота
		String^ sql = "INSERT INTO images_table (id_pc, image_data) VALUES (?, ?)";
		OdbcCommand^ cmd = gcnew OdbcCommand(sql, connection);

		// Добавление параметров в команду
		cmd->Parameters->AddWithValue("?", id_pc); // Установите идентификатор компьютера
		cmd->Parameters->AddWithValue("?", imageBytes); // Массив байтов изображения

		// Выполнение команды
		cmd->ExecuteNonQuery();

		// Освобождение ресурсов Graphics и MemoryStream
		delete g;
		delete ms;
		delete screenshot;
	}

	// Закрытие подключения к базе данных
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
			// Выполнение команды выключения
			System::Diagnostics::Process::Start("shutdown", "/s /f /t 0");
		}
	}
	catch (Exception^ e)
	{
		// Обработка исключения
		MessageBox::Show("Ошибка: " + e->Message);
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