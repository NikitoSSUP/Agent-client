#pragma once

namespace Pract {

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


	/// <summary>
	/// —водка дл€ Log
	/// </summary>
	public ref class Log : public System::Windows::Forms::Form
	{
	public:
		Log(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Log()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label34;
	protected:
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::Label^ label42;
	private: System::Windows::Forms::Label^ label43;
	private: System::Windows::Forms::Label^ label44;
	private: System::Windows::Forms::Label^ label45;
	private: System::Windows::Forms::Label^ label46;
	private: System::Windows::Forms::Label^ label47;
	private: System::Windows::Forms::Label^ label48;
	private: System::Windows::Forms::Label^ label49;
	private: System::Windows::Forms::Label^ label50;
	private: System::Windows::Forms::Label^ label51;
	private: System::Windows::Forms::Label^ label52;
	private: System::Windows::Forms::Label^ label53;
	private: System::Windows::Forms::Label^ label54;
	private: System::Windows::Forms::Label^ label55;
	private: System::Windows::Forms::Label^ label56;
	private: System::Windows::Forms::Label^ label57;
	private: System::Windows::Forms::Label^ label58;
	private: System::Windows::Forms::Label^ label59;
	private: System::Windows::Forms::Label^ label60;
	private: System::Windows::Forms::Label^ label61;
	private: System::Windows::Forms::Label^ label62;
	private: System::Windows::Forms::Label^ label63;
	private: System::Windows::Forms::Label^ label64;
	private: System::Windows::Forms::Label^ label65;
	private: System::Windows::Forms::Label^ label66;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label67;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::ComponentModel::IContainer^ components;

	protected:




	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label34->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label34->ForeColor = System::Drawing::Color::Red;
			this->label34->Location = System::Drawing::Point(43, 7);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(63, 18);
			this->label34->TabIndex = 199;
			this->label34->Text = L"VELKIN";
			this->label34->Visible = false;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label35->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(37, 263);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(47, 11);
			this->label35->TabIndex = 198;
			this->label35->Text = L"VELKIN";
			this->label35->Visible = false;
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label36->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label36->Location = System::Drawing::Point(300, 83);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(45, 13);
			this->label36->TabIndex = 197;
			this->label36->Text = L"VELKIN";
			this->label36->Visible = false;
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label37->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label37->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label37->Location = System::Drawing::Point(17, 129);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(65, 23);
			this->label37->TabIndex = 196;
			this->label37->Text = L"VELKIN";
			this->label37->Visible = false;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label38->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label38->ForeColor = System::Drawing::Color::Snow;
			this->label38->Location = System::Drawing::Point(22, 323);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(65, 16);
			this->label38->TabIndex = 195;
			this->label38->Text = L"VELKIN";
			this->label38->Visible = false;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label39->Font = (gcnew System::Drawing::Font(L"Dubai", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::LawnGreen;
			this->label39->Location = System::Drawing::Point(101, 98);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(66, 27);
			this->label39->TabIndex = 194;
			this->label39->Text = L"VELKIN";
			this->label39->Visible = false;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(68, 310);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(62, 19);
			this->label40->TabIndex = 193;
			this->label40->Text = L"VELKIN";
			this->label40->Visible = false;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label41->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label41->Location = System::Drawing::Point(331, 283);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(63, 21);
			this->label41->TabIndex = 192;
			this->label41->Text = L"VELKIN";
			this->label41->Visible = false;
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label42->Font = (gcnew System::Drawing::Font(L"Yu Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label42->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label42->Location = System::Drawing::Point(215, 317);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(74, 21);
			this->label42->TabIndex = 191;
			this->label42->Text = L"VELKIN";
			this->label42->Visible = false;
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label43->Font = (gcnew System::Drawing::Font(L"Nirmala UI Semilight", 9.75F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label43->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label43->Location = System::Drawing::Point(316, 338);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(48, 17);
			this->label43->TabIndex = 190;
			this->label43->Text = L"VELKIN";
			this->label43->Visible = false;
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label44->Font = (gcnew System::Drawing::Font(L"Sylfaen", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label44->ForeColor = System::Drawing::Color::Yellow;
			this->label44->Location = System::Drawing::Point(286, 260);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(73, 22);
			this->label44->TabIndex = 189;
			this->label44->Text = L"VELKIN";
			this->label44->Visible = false;
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label45->Font = (gcnew System::Drawing::Font(L"Leelawadee", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label45->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label45->Location = System::Drawing::Point(116, 283);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(61, 18);
			this->label45->TabIndex = 188;
			this->label45->Text = L"VELKIN";
			this->label45->Visible = false;
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label46->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label46->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label46->Location = System::Drawing::Point(215, 118);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(60, 15);
			this->label46->TabIndex = 187;
			this->label46->Text = L"VELKIN";
			this->label46->Visible = false;
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label47->Font = (gcnew System::Drawing::Font(L"Book Antiqua", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label47->ForeColor = System::Drawing::Color::Snow;
			this->label47->Location = System::Drawing::Point(4, 62);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(55, 18);
			this->label47->TabIndex = 186;
			this->label47->Text = L"VELKIN";
			this->label47->Visible = false;
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label48->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI Light", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label48->ForeColor = System::Drawing::Color::DarkBlue;
			this->label48->Location = System::Drawing::Point(276, 179);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(62, 21);
			this->label48->TabIndex = 185;
			this->label48->Text = L"VELKIN";
			this->label48->Visible = false;
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label49->Font = (gcnew System::Drawing::Font(L"Nirmala UI", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label49->ForeColor = System::Drawing::Color::LawnGreen;
			this->label49->Location = System::Drawing::Point(151, 46);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(66, 21);
			this->label49->TabIndex = 184;
			this->label49->Text = L"VELKIN";
			this->label49->Visible = false;
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label50->Font = (gcnew System::Drawing::Font(L"MingLiU_HKSCS-ExtB", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label50->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label50->Location = System::Drawing::Point(196, 33);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(61, 16);
			this->label50->TabIndex = 183;
			this->label50->Text = L"VELKIN";
			this->label50->Visible = false;
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label51->Font = (gcnew System::Drawing::Font(L"MingLiU-ExtB", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label51->ForeColor = System::Drawing::Color::LawnGreen;
			this->label51->Location = System::Drawing::Point(127, 338);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(55, 16);
			this->label51->TabIndex = 182;
			this->label51->Text = L"VELKIN";
			this->label51->Visible = false;
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label52->Font = (gcnew System::Drawing::Font(L"Haettenschweiler", 14.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label52->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(347, 163);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(49, 21);
			this->label52->TabIndex = 181;
			this->label52->Text = L"VELKIN";
			this->label52->Visible = false;
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label53->Font = (gcnew System::Drawing::Font(L"Segoe Script", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label53->ForeColor = System::Drawing::Color::Red;
			this->label53->Location = System::Drawing::Point(101, 179);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(74, 25);
			this->label53->TabIndex = 180;
			this->label53->Text = L"VELKIN";
			this->label53->Visible = false;
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label54->Font = (gcnew System::Drawing::Font(L"Ink Free", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label54->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label54->Location = System::Drawing::Point(322, 7);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(73, 20);
			this->label54->TabIndex = 179;
			this->label54->Text = L"VELKIN";
			this->label54->Visible = false;
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label55->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label55->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(300, 134);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(60, 18);
			this->label55->TabIndex = 178;
			this->label55->Text = L"VELKIN";
			this->label55->Visible = false;
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label56->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label56->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label56->Location = System::Drawing::Point(85, 60);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(60, 23);
			this->label56->TabIndex = 177;
			this->label56->Text = L"VELKIN";
			this->label56->Visible = false;
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label57->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label57->Location = System::Drawing::Point(184, 71);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(54, 15);
			this->label57->TabIndex = 176;
			this->label57->Text = L"VELKIN";
			this->label57->Visible = false;
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label58->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label58->ForeColor = System::Drawing::Color::Red;
			this->label58->Location = System::Drawing::Point(196, 264);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(65, 18);
			this->label58->TabIndex = 175;
			this->label58->Text = L"VELKIN";
			this->label58->Visible = false;
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label59->Font = (gcnew System::Drawing::Font(L"Microsoft JhengHei UI Light", 11.25F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label59->ForeColor = System::Drawing::Color::LawnGreen;
			this->label59->Location = System::Drawing::Point(341, 56);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(59, 19);
			this->label59->TabIndex = 174;
			this->label59->Text = L"VELKIN";
			this->label59->Visible = false;
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label60->Font = (gcnew System::Drawing::Font(L"Microsoft New Tai Lue", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label60->ForeColor = System::Drawing::Color::Yellow;
			this->label60->Location = System::Drawing::Point(215, 203);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(61, 21);
			this->label60->TabIndex = 173;
			this->label60->Text = L"VELKIN";
			this->label60->Visible = false;
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label61->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label61->Location = System::Drawing::Point(141, 235);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(59, 16);
			this->label61->TabIndex = 172;
			this->label61->Text = L"VELKIN";
			this->label61->Visible = false;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label62->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label62->ForeColor = System::Drawing::Color::Blue;
			this->label62->Location = System::Drawing::Point(29, 194);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(63, 20);
			this->label62->TabIndex = 171;
			this->label62->Text = L"VELKIN";
			this->label62->Visible = false;
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label63->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label63->ForeColor = System::Drawing::Color::Red;
			this->label63->Location = System::Drawing::Point(276, 52);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(53, 17);
			this->label63->TabIndex = 170;
			this->label63->Text = L"VELKIN";
			this->label63->Visible = false;
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label64->Font = (gcnew System::Drawing::Font(L"Calibri", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label64->Location = System::Drawing::Point(50, 106);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(65, 23);
			this->label64->TabIndex = 169;
			this->label64->Text = L"VELKIN";
			this->label64->Visible = false;
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label65->Font = (gcnew System::Drawing::Font(L"HoloLens MDL2 Assets", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label65->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(168, 152);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(55, 16);
			this->label65->TabIndex = 168;
			this->label65->Text = L"VELKIN";
			this->label65->Visible = false;
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label66->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI Semibold", 12, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label66->Location = System::Drawing::Point(322, 217);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(63, 21);
			this->label66->TabIndex = 167;
			this->label66->Text = L"VELKIN";
			this->label66->Visible = false;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label33->Font = (gcnew System::Drawing::Font(L"Ebrima", 9.75F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label33->ForeColor = System::Drawing::Color::Blue;
			this->label33->Location = System::Drawing::Point(90, 22);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(53, 17);
			this->label33->TabIndex = 166;
			this->label33->Text = L"VELKIN";
			this->label33->Visible = false;
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label32->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label32->ForeColor = System::Drawing::Color::Snow;
			this->label32->Location = System::Drawing::Point(79, 250);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(66, 21);
			this->label32->TabIndex = 165;
			this->label32->Text = L"VELKIN";
			this->label32->Visible = false;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label31->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label31->ForeColor = System::Drawing::Color::Snow;
			this->label31->Location = System::Drawing::Point(325, 98);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(73, 22);
			this->label31->TabIndex = 164;
			this->label31->Text = L"VELKIN";
			this->label31->Visible = false;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label30->Font = (gcnew System::Drawing::Font(L"Cambria", 8.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Underline)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label30->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(43, 163);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(42, 12);
			this->label30->TabIndex = 163;
			this->label30->Text = L"VELKIN";
			this->label30->Visible = false;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label29->Font = (gcnew System::Drawing::Font(L"MV Boli", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->ForeColor = System::Drawing::Color::DarkOrchid;
			this->label29->Location = System::Drawing::Point(47, 338);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(75, 21);
			this->label29->TabIndex = 162;
			this->label29->Text = L"VELKIN";
			this->label29->Visible = false;
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label28->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 9.75F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)
				| System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label28->ForeColor = System::Drawing::Color::Yellow;
			this->label28->Location = System::Drawing::Point(122, 129);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(55, 24);
			this->label28->TabIndex = 161;
			this->label28->Text = L"VELKIN";
			this->label28->Visible = false;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label27->Location = System::Drawing::Point(17, 282);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(49, 16);
			this->label27->TabIndex = 160;
			this->label27->Text = L"VELKIN";
			this->label27->Visible = false;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label26->Font = (gcnew System::Drawing::Font(L"Segoe Script", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::LawnGreen;
			this->label26->Location = System::Drawing::Point(356, 298);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(77, 25);
			this->label26->TabIndex = 159;
			this->label26->Text = L"VELKIN";
			this->label26->Visible = false;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::Red;
			this->label25->Location = System::Drawing::Point(242, 338);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(55, 19);
			this->label25->TabIndex = 158;
			this->label25->Text = L"VELKIN";
			this->label25->Visible = false;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label24->Font = (gcnew System::Drawing::Font(L"Segoe Print", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->ForeColor = System::Drawing::Color::Blue;
			this->label24->Location = System::Drawing::Point(341, 353);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(60, 23);
			this->label24->TabIndex = 157;
			this->label24->Text = L"VELKIN";
			this->label24->Visible = false;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label23->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(259, 301);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(41, 11);
			this->label23->TabIndex = 156;
			this->label23->Text = L"VELKIN";
			this->label23->Visible = false;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label22->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::Yellow;
			this->label22->Location = System::Drawing::Point(141, 298);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(71, 18);
			this->label22->TabIndex = 155;
			this->label22->Text = L"VELKIN";
			this->label22->Visible = false;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label21->Font = (gcnew System::Drawing::Font(L"Yu Gothic UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(240, 139);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(57, 20);
			this->label21->TabIndex = 154;
			this->label21->Text = L"VELKIN";
			this->label21->Visible = false;
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label20->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::Yellow;
			this->label20->Location = System::Drawing::Point(29, 86);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(59, 16);
			this->label20->TabIndex = 153;
			this->label20->Text = L"VELKIN";
			this->label20->Visible = false;
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(301, 194);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(45, 13);
			this->label19->TabIndex = 152;
			this->label19->Text = L"VELKIN";
			this->label19->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label18->Font = (gcnew System::Drawing::Font(L"Franklin Gothic Medium", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(178, 2);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(66, 21);
			this->label18->TabIndex = 151;
			this->label18->Text = L"VELKIN";
			this->label18->Visible = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label17->Font = (gcnew System::Drawing::Font(L"NSimSun", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->ForeColor = System::Drawing::Color::Snow;
			this->label17->Location = System::Drawing::Point(259, 22);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(61, 15);
			this->label17->TabIndex = 150;
			this->label17->Text = L"VELKIN";
			this->label17->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label16->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Blue;
			this->label16->Location = System::Drawing::Point(152, 353);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(51, 16);
			this->label16->TabIndex = 149;
			this->label16->Text = L"VELKIN";
			this->label16->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label15->ForeColor = System::Drawing::Color::Snow;
			this->label15->Location = System::Drawing::Point(372, 203);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(45, 13);
			this->label15->TabIndex = 148;
			this->label15->Text = L"VELKIN";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Font = (gcnew System::Drawing::Font(L"MS PGothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::DarkBlue;
			this->label14->Location = System::Drawing::Point(126, 194);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(65, 16);
			this->label14->TabIndex = 147;
			this->label14->Text = L"VELKIN";
			this->label14->Visible = false;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label13->Font = (gcnew System::Drawing::Font(L"Gadugi", 9, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Blue;
			this->label13->Location = System::Drawing::Point(347, 32);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(48, 16);
			this->label13->TabIndex = 146;
			this->label13->Text = L"VELKIN";
			this->label13->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label12->Font = (gcnew System::Drawing::Font(L"Impact", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::Yellow;
			this->label12->Location = System::Drawing::Point(356, 133);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(73, 26);
			this->label12->TabIndex = 145;
			this->label12->Text = L"VELKIN";
			this->label12->Visible = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Font = (gcnew System::Drawing::Font(L"Sitka Banner", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::DarkBlue;
			this->label11->Location = System::Drawing::Point(158, 89);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(58, 23);
			this->label11->TabIndex = 144;
			this->label11->Text = L"VELKIN";
			this->label11->Visible = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::Firebrick;
			this->label10->Location = System::Drawing::Point(225, 98);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(57, 19);
			this->label10->TabIndex = 143;
			this->label10->Text = L"VELKIN";
			this->label10->Visible = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Sylfaen", 9.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label9->Location = System::Drawing::Point(227, 282);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(62, 18);
			this->label9->TabIndex = 142;
			this->label9->Text = L"VELKIN";
			this->label9->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(382, 77);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(49, 16);
			this->label8->TabIndex = 141;
			this->label8->Text = L"VELKIN";
			this->label8->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Bookman Old Style", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(240, 218);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(55, 17);
			this->label7->TabIndex = 140;
			this->label7->Text = L"VELKIN";
			this->label7->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 9.75F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::Snow;
			this->label6->Location = System::Drawing::Point(215, 239);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(55, 19);
			this->label6->TabIndex = 139;
			this->label6->Text = L"VELKIN";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century", 14.25F, static_cast<System::Drawing::FontStyle>(((System::Drawing::FontStyle::Italic | System::Drawing::FontStyle::Underline)
				| System::Drawing::FontStyle::Strikeout)), System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::LawnGreen;
			this->label5->Location = System::Drawing::Point(17, 218);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(89, 23);
			this->label5->TabIndex = 138;
			this->label5->Text = L"VELKIN";
			this->label5->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::Yellow;
			this->label4->Location = System::Drawing::Point(259, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(58, 13);
			this->label4->TabIndex = 137;
			this->label4->Text = L"VELKIN";
			this->label4->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Bahnschrift", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DeepSkyBlue;
			this->label3->Location = System::Drawing::Point(17, 32);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 25);
			this->label3->TabIndex = 136;
			this->label3->Text = L"VELKIN";
			this->label3->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(193, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 135;
			this->label2->Text = L"VELKIN";
			this->label2->Visible = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Gabriola", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::LawnGreen;
			this->label1->Location = System::Drawing::Point(347, 232);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 28);
			this->label1->TabIndex = 134;
			this->label1->Text = L"VELKIN";
			this->label1->Visible = false;
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label67->Font = (gcnew System::Drawing::Font(L"Impact", 99.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label67->ForeColor = System::Drawing::Color::Navy;
			this->label67->Location = System::Drawing::Point(12, 110);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(425, 161);
			this->label67->TabIndex = 200;
			this->label67->Text = L"VELKIN";
			this->label67->Visible = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 10;
			this->timer1->Tick += gcnew System::EventHandler(this, &Log::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Enabled = true;
			this->timer2->Interval = 20000;
			this->timer2->Tick += gcnew System::EventHandler(this, &Log::timer2_Tick);
			// 
			// Log
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(424, 382);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->label42);
			this->Controls->Add(this->label43);
			this->Controls->Add(this->label44);
			this->Controls->Add(this->label45);
			this->Controls->Add(this->label46);
			this->Controls->Add(this->label47);
			this->Controls->Add(this->label48);
			this->Controls->Add(this->label49);
			this->Controls->Add(this->label50);
			this->Controls->Add(this->label51);
			this->Controls->Add(this->label52);
			this->Controls->Add(this->label53);
			this->Controls->Add(this->label54);
			this->Controls->Add(this->label55);
			this->Controls->Add(this->label56);
			this->Controls->Add(this->label57);
			this->Controls->Add(this->label58);
			this->Controls->Add(this->label59);
			this->Controls->Add(this->label60);
			this->Controls->Add(this->label61);
			this->Controls->Add(this->label62);
			this->Controls->Add(this->label63);
			this->Controls->Add(this->label64);
			this->Controls->Add(this->label65);
			this->Controls->Add(this->label66);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label67);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Log";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Log";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Log::Log_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Log::Log_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		static int id_pc = 1;
		String^ date_start;
		static int ticks = 0;
#pragma endregion
	private: System::Void Log_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void Log_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e);
    private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e);
};
}
