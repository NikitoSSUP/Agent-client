using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Net;
using namespace System::Net::NetworkInformation;
using namespace System::Data::Odbc;
using namespace Microsoft::Win32;
using namespace System::Text;
using namespace System::Diagnostics;
using namespace System::IO;
using namespace System::Runtime::InteropServices;

#pragma once

OdbcConnection^ ConnectToDatabase();


void WriteToDatabase(array<String^>^ subkeyNames, RegistryKey^ key, OdbcConnection^ conn, static int id_pc);

void WriteComputerInfoToDatabase(static int% id_pc);

void SaveScreenshotToDatabase(int id_pc);

bool CheckAndShutdownPC(int id_pc);