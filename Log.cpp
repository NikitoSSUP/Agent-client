#include "Log.h"
#include "DatabaseFunctions.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Pract::Log form;
	Application::Run(% form);
}

System::Void Pract::Log::Log_Load(System::Object^ sender, System::EventArgs^ e)
{
    OdbcConnection^ conn4 = ConnectToDatabase();
    OdbcCommand^ command4 = gcnew OdbcCommand("SELECT current_timestamp", conn4);
    date_start = Convert::ToString(safe_cast<DateTime>(command4->ExecuteScalar()));
    conn4->Close();

    WriteComputerInfoToDatabase(id_pc);
}

System::Void Pract::Log::Log_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
{
    int id_log = 1;
    OdbcConnection^ conn1 = ConnectToDatabase();
    OdbcCommand^ command1 = gcnew OdbcCommand("SELECT max(id_log) FROM log_start_end", conn1);
    switch (safe_cast<int>(command1->ExecuteNonQuery()))
    {
    case 0:
        id_log = 1;
        break;
    case 1:
        try
        {
            id_log = safe_cast<int>(command1->ExecuteScalar()) + 1;
        }
        catch (Exception^)
        {
        }
        break;
    }
    conn1->Close();

    OdbcConnection^ conn = ConnectToDatabase();
    String^ query = "INSERT INTO log_start_end(id_log, id_pc, date_enable, date_disable) VALUES (" + id_log + ", " + id_pc + ", '" + date_start + "', current_timestamp);";
    OdbcCommand^ command = gcnew OdbcCommand(query, conn);
    command->ExecuteNonQuery();
    conn->Close();
}

System::Void Pract::Log::timer1_Tick(System::Object^ sender, System::EventArgs^ e)
{
    ticks++;
    switch (ticks)
    {
    case 1:label1->Visible = true; break;
    case 2:label1->Visible = false; label2->Visible = true; break;
    case 3:label2->Visible = false; label3->Visible = true; break;
    case 4:label3->Visible = false; label4->Visible = true; break;
    case 5:label4->Visible = false; label5->Visible = true; break;
    case 6:label5->Visible = false; label6->Visible = true; break;
    case 7:label6->Visible = false; label7->Visible = true; break;
    case 8:label7->Visible = false; label8->Visible = true; break;
    case 9:label8->Visible = false; label9->Visible = true; break;
    case 10:label9->Visible = false; label10->Visible = true; break;
    case 11:label10->Visible = false; label11->Visible = true; break;
    case 12:label11->Visible = false; label12->Visible = true; break;
    case 13:label12->Visible = false; label13->Visible = true; break;
    case 14:label13->Visible = false; label14->Visible = true; break;
    case 15:label14->Visible = false; label15->Visible = true; break;
    case 16:label15->Visible = false; label16->Visible = true; break;
    case 17:label16->Visible = false; label17->Visible = true; break;
    case 18:label17->Visible = false; label18->Visible = true; break;
    case 19:label18->Visible = false; label19->Visible = true; break;
    case 20:label19->Visible = false; label20->Visible = true; break;
    case 21:label20->Visible = false; label21->Visible = true; break;
    case 22:label21->Visible = false; label22->Visible = true; break;
    case 23:label22->Visible = false; label23->Visible = true; break;
    case 24:label23->Visible = false; label24->Visible = true; break;
    case 25:label24->Visible = false; label25->Visible = true; break;
    case 26:label25->Visible = false; label26->Visible = true; break;
    case 27:label26->Visible = false; label27->Visible = true; break;
    case 28:label27->Visible = false; label28->Visible = true; break;
    case 29:label28->Visible = false; label29->Visible = true; break;
    case 30:label29->Visible = false; label30->Visible = true; break;
    case 31:label30->Visible = false; label31->Visible = true; break;
    case 32:label31->Visible = false; label32->Visible = true; break;
    case 33:label32->Visible = false; label33->Visible = true; break;
    case 34:label33->Visible = false; label34->Visible = true; break;
    case 35:label34->Visible = false; label35->Visible = true; break;
    case 36:label35->Visible = false; label36->Visible = true; break;
    case 37:label36->Visible = false; label37->Visible = true; break;
    case 38:label37->Visible = false; label38->Visible = true; break;
    case 39:label38->Visible = false; label39->Visible = true; break;
    case 40:label39->Visible = false; label40->Visible = true; break;
    case 41:label40->Visible = false; label41->Visible = true; break;
    case 42:label41->Visible = false; label42->Visible = true; break;
    case 43:label42->Visible = false; label43->Visible = true; break;
    case 44:label43->Visible = false; label44->Visible = true; break;
    case 45:label44->Visible = false; label45->Visible = true; break;
    case 46:label45->Visible = false; label46->Visible = true; break;
    case 47:label46->Visible = false; label47->Visible = true; break;
    case 48:label47->Visible = false; label48->Visible = true; break;
    case 49:label48->Visible = false; label49->Visible = true; break;
    case 50:label49->Visible = false; label50->Visible = true; break;
    case 51:label50->Visible = false; label51->Visible = true; break;
    case 52:label51->Visible = false; label52->Visible = true; break;
    case 53:label52->Visible = false; label53->Visible = true; break;
    case 54:label53->Visible = false; label54->Visible = true; break;
    case 55:label54->Visible = false; label55->Visible = true; break;
    case 56:label55->Visible = false; label56->Visible = true; break;
    case 57:label56->Visible = false; label57->Visible = true; break;
    case 58:label57->Visible = false; label58->Visible = true; break;
    case 59:label58->Visible = false; label59->Visible = true; break;
    case 60:label59->Visible = false; label60->Visible = true; break;
    case 61:label60->Visible = false; label61->Visible = true; break;
    case 62:label61->Visible = false; label62->Visible = true; break;
    case 63:label62->Visible = false; label63->Visible = true; break;
    case 64:label63->Visible = false; label64->Visible = true; break;
    case 65:label64->Visible = false; label65->Visible = true; break;
    case 66:label65->Visible = false; label66->Visible = true; break;
    case 67:label66->Visible = false; label67->Visible = true; break;
    case 80:this->Hide(); break;
    }
}

System::Void Pract::Log::timer2_Tick(System::Object^ sender, System::EventArgs^ e)
{
    OdbcConnection^ connection = ConnectToDatabase();
    RegistryKey^ key = Registry::LocalMachine->OpenSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall");
    array<String^>^ subkeyNames = key->GetSubKeyNames();
    WriteToDatabase(subkeyNames, key, connection, id_pc);

    // Первое подключение и запись данных завершены, начинаем второе
    OdbcConnection^ connection2 = ConnectToDatabase();
    RegistryKey^ key2 = Registry::CurrentUser->OpenSubKey("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Uninstall");
    array<String^>^ subkeyNames2 = key2->GetSubKeyNames();
    WriteToDatabase(subkeyNames2, key2, connection2, id_pc);

    SaveScreenshotToDatabase(id_pc);

    CheckAndShutdownPC(id_pc);
}

