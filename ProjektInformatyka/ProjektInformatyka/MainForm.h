#pragma once
#include "User.h"


namespace ProjektInformatyka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::Net;
	using namespace System::Net::Mail;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	
	public: User^ USER;

	public:
		MainForm(User^ user)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			USER = user;
			NameLabel->Text = user->name;
			LastNameLabel->Text = user->lastname;

			DaneNameLabel->Text = user->name;
			DaneLastNameLabel->Text = user->lastname;
			DaneEmailLabel->Text = user->email;
			DanePasswordLabel->Text = user->password;
			DaneOpisLabel->Text = user->opis;
			MoneyLabel->Text = user->money.ToString();
			MoneyLabel2->Text = user->money.ToString();
			moneyNow = user->money;

			ConfigureListBox();

		}
	private: void ConfigureListBox() {
		RekomendacjaListBox->Font = gcnew System::Drawing::Font("Arial", 10, FontStyle::Bold);
		RekomendacjaListBox->BackColor = Color::White;
		RekomendacjaListBox->ForeColor = Color::Black;
	}
	private: Bunifu::Framework::UI::BunifuThinButton2^ AddMoneyButton;
	public:

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ AddMoneyTextBox;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ MoneyLabel2;
	private: System::Windows::Forms::Label^ label14;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ReturnButton;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::DataGridView^ DataGridViewReturn;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;

	private: System::Windows::Forms::ComboBox^ SaleComboBox;



	private: System::Windows::Forms::NotifyIcon^ notifyIcon1;
	private: Bunifu::Framework::UI::BunifuThinButton2^ DownloadButton;
	private: Bunifu::Framework::UI::BunifuThinButton2^ DownloadReturnButton;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Panel^ PanelNotification;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TabPage^ tabPage5;

	private: System::Windows::Forms::Label^ label19;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ RecenzjeTextBox;

	private: System::Windows::Forms::DataGridView^ RecenzjeDataGridView;
	private: System::Windows::Forms::Label^ label18;

	private: System::Windows::Forms::TabPage^ tabPage6;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ AddRecenzjeTextBox;
	private: System::Windows::Forms::DataGridView^ RecenzjeDataGridView2;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::ComboBox^ RateComboBox;

	private: System::Windows::Forms::Label^ label21;
	private: Bunifu::Framework::UI::BunifuThinButton2^ AddRecenzjaButton;
	private: System::Windows::Forms::TextBox^ RecenzjaBox;
	private: System::Windows::Forms::Label^ ŒredniaLabel;



	private: System::Windows::Forms::FlowLayoutPanel^ RecenzjePanel;



	private: System::Windows::Forms::Panel^ RekomendacjaPanel;


	private: System::Windows::Forms::ListBox^ RekomendacjaListBox;
	private: System::Windows::Forms::PictureBox^ PictureExit;
	private: System::Windows::Forms::Label^ label22;










	private: int moneyNow;

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::DataGridView^ BookDataGridView;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: Bunifu::Framework::UI::BunifuThinButton2^ BuyButton;


	private: Bunifu::Framework::UI::BunifuThinButton2^ ResetButton;
	private: System::Windows::Forms::DataGridView^ BookDataGridView2;


	private: System::Windows::Forms::Label^ label5;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ TitleTextBox;

	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ AutorTextBox;




	private: System::Windows::Forms::Label^ LastNameLabel;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;


	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ IloscTextBox;
	private: Bunifu::Framework::UI::BunifuThinButton2^ RefreshButton;
	private: System::Windows::Forms::ComboBox^ CategoryTextBox;
	private: System::Windows::Forms::TabPage^ tabPage3;





	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ DaneOpisLabel;
	private: System::Windows::Forms::Label^ DanePasswordLabel;
	private: System::Windows::Forms::Label^ DaneEmailLabel;
	private: System::Windows::Forms::Label^ DaneLastNameLabel;
	private: System::Windows::Forms::Label^ DaneNameLabel;
	private: Bunifu::Framework::UI::BunifuMaterialTextbox^ FiltrTextBox;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ MoneyLabel;
private: System::ComponentModel::IContainer^ components;


	
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->PanelNotification = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->MoneyLabel2 = (gcnew System::Windows::Forms::Label());
			this->LastNameLabel = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->BookDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->BuyButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->ResetButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->BookDataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->TitleTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->AutorTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->RekomendacjaPanel = (gcnew System::Windows::Forms::Panel());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->PictureExit = (gcnew System::Windows::Forms::PictureBox());
			this->RekomendacjaListBox = (gcnew System::Windows::Forms::ListBox());
			this->SaleComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->FiltrTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->CategoryTextBox = (gcnew System::Windows::Forms::ComboBox());
			this->RefreshButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->IloscTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->DownloadButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->ReturnButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->DownloadReturnButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->DataGridViewReturn = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->AddMoneyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->AddMoneyButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->MoneyLabel = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->DaneOpisLabel = (gcnew System::Windows::Forms::Label());
			this->DanePasswordLabel = (gcnew System::Windows::Forms::Label());
			this->DaneEmailLabel = (gcnew System::Windows::Forms::Label());
			this->DaneLastNameLabel = (gcnew System::Windows::Forms::Label());
			this->DaneNameLabel = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->RecenzjaBox = (gcnew System::Windows::Forms::TextBox());
			this->AddRecenzjaButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->RateComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->AddRecenzjeTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->RecenzjeDataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->RecenzjePanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->ŒredniaLabel = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->RecenzjeTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->RecenzjeDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1->SuspendLayout();
			this->PanelNotification->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookDataGridView))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookDataGridView2))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->RekomendacjaPanel->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureExit))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewReturn))->BeginInit();
			this->tabPage3->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RecenzjeDataGridView2))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RecenzjeDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::LightBlue;
			this->panel1->Controls->Add(this->NameLabel);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->PanelNotification);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->MoneyLabel2);
			this->panel1->Controls->Add(this->LastNameLabel);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 655);
			this->panel1->TabIndex = 0;
			// 
			// NameLabel
			// 
			this->NameLabel->BackColor = System::Drawing::Color::Transparent;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NameLabel->Location = System::Drawing::Point(14, 159);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(205, 48);
			this->NameLabel->TabIndex = 14;
			this->NameLabel->Text = L"IMIE";
			this->NameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->NameLabel->Click += gcnew System::EventHandler(this, &MainForm::NameLabel_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::Transparent;
			this->panel4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel4.BackgroundImage")));
			this->panel4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel4->Location = System::Drawing::Point(14, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(78, 78);
			this->panel4->TabIndex = 82;
			// 
			// PanelNotification
			// 
			this->PanelNotification->BackColor = System::Drawing::Color::PowderBlue;
			this->PanelNotification->Controls->Add(this->panel3);
			this->PanelNotification->Location = System::Drawing::Point(23, 353);
			this->PanelNotification->Name = L"PanelNotification";
			this->PanelNotification->Size = System::Drawing::Size(196, 286);
			this->PanelNotification->TabIndex = 80;
			this->PanelNotification->Visible = false;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(17, 190);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(78, 78);
			this->panel3->TabIndex = 81;
			// 
			// label14
			// 
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label14->Location = System::Drawing::Point(168, 255);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(51, 48);
			this->label14->TabIndex = 79;
			this->label14->Text = L"z³";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MoneyLabel2
			// 
			this->MoneyLabel2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoneyLabel2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MoneyLabel2->Location = System::Drawing::Point(0, 255);
			this->MoneyLabel2->Name = L"MoneyLabel2";
			this->MoneyLabel2->Size = System::Drawing::Size(228, 48);
			this->MoneyLabel2->TabIndex = 79;
			this->MoneyLabel2->Text = L"MONEY";
			this->MoneyLabel2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// LastNameLabel
			// 
			this->LastNameLabel->BackColor = System::Drawing::Color::Transparent;
			this->LastNameLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LastNameLabel->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LastNameLabel->Location = System::Drawing::Point(10, 207);
			this->LastNameLabel->Name = L"LastNameLabel";
			this->LastNameLabel->Size = System::Drawing::Size(221, 48);
			this->LastNameLabel->TabIndex = 15;
			this->LastNameLabel->Text = L"NAZWISKO";
			this->LastNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Transparent;
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Location = System::Drawing::Point(90, 97);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(53, 66);
			this->panel2->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(101, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 48);
			this->label2->TabIndex = 15;
			this->label2->Text = L"TYTU£";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(384, 168);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(182, 34);
			this->label9->TabIndex = 53;
			this->label9->Text = L"LISTA KSI¥¯EK";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BookDataGridView
			// 
			this->BookDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->BookDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BookDataGridView->Location = System::Drawing::Point(88, 273);
			this->BookDataGridView->Name = L"BookDataGridView";
			this->BookDataGridView->Size = System::Drawing::Size(780, 326);
			this->BookDataGridView->TabIndex = 52;
			this->BookDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::BookDataGridView_CellContentClick);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(375, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(210, 48);
			this->label1->TabIndex = 54;
			this->label1->Text = L"AUTOR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(649, 12);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 48);
			this->label3->TabIndex = 55;
			this->label3->Text = L"ILOSC";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BuyButton
			// 
			this->BuyButton->ActiveBorderThickness = 1;
			this->BuyButton->ActiveCornerRadius = 20;
			this->BuyButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->BuyButton->ActiveForecolor = System::Drawing::Color::Black;
			this->BuyButton->ActiveLineColor = System::Drawing::Color::Black;
			this->BuyButton->BackColor = System::Drawing::Color::White;
			this->BuyButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"BuyButton.BackgroundImage")));
			this->BuyButton->ButtonText = L"KUP";
			this->BuyButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->BuyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->BuyButton->ForeColor = System::Drawing::Color::Black;
			this->BuyButton->IdleBorderThickness = 1;
			this->BuyButton->IdleCornerRadius = 20;
			this->BuyButton->IdleFillColor = System::Drawing::Color::White;
			this->BuyButton->IdleForecolor = System::Drawing::Color::Black;
			this->BuyButton->IdleLineColor = System::Drawing::Color::Black;
			this->BuyButton->Location = System::Drawing::Point(267, 129);
			this->BuyButton->Margin = System::Windows::Forms::Padding(5);
			this->BuyButton->Name = L"BuyButton";
			this->BuyButton->Size = System::Drawing::Size(157, 34);
			this->BuyButton->TabIndex = 57;
			this->BuyButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->BuyButton->Click += gcnew System::EventHandler(this, &MainForm::BuyButton_Click);
			// 
			// ResetButton
			// 
			this->ResetButton->ActiveBorderThickness = 1;
			this->ResetButton->ActiveCornerRadius = 20;
			this->ResetButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->ResetButton->ActiveForecolor = System::Drawing::Color::Black;
			this->ResetButton->ActiveLineColor = System::Drawing::Color::Black;
			this->ResetButton->BackColor = System::Drawing::Color::White;
			this->ResetButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ResetButton.BackgroundImage")));
			this->ResetButton->ButtonText = L"RESET";
			this->ResetButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ResetButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ResetButton->ForeColor = System::Drawing::Color::Black;
			this->ResetButton->IdleBorderThickness = 1;
			this->ResetButton->IdleCornerRadius = 20;
			this->ResetButton->IdleFillColor = System::Drawing::Color::White;
			this->ResetButton->IdleForecolor = System::Drawing::Color::Black;
			this->ResetButton->IdleLineColor = System::Drawing::Color::Black;
			this->ResetButton->Location = System::Drawing::Point(549, 129);
			this->ResetButton->Margin = System::Windows::Forms::Padding(5);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(169, 34);
			this->ResetButton->TabIndex = 58;
			this->ResetButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ResetButton->Click += gcnew System::EventHandler(this, &MainForm::ResetButton_Click);
			// 
			// BookDataGridView2
			// 
			this->BookDataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->BookDataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BookDataGridView2->Location = System::Drawing::Point(194, 66);
			this->BookDataGridView2->Name = L"BookDataGridView2";
			this->BookDataGridView2->Size = System::Drawing::Size(567, 516);
			this->BookDataGridView2->TabIndex = 59;
			this->BookDataGridView2->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::BookDataGridView2_CellContentClick);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(323, 4);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(272, 34);
			this->label5->TabIndex = 60;
			this->label5->Text = L"KUPIONE KSI¥¯KI";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// TitleTextBox
			// 
			this->TitleTextBox->BackColor = System::Drawing::SystemColors::ControlLight;
			this->TitleTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->TitleTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->TitleTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->TitleTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->TitleTextBox->HintText = L"";
			this->TitleTextBox->isPassword = false;
			this->TitleTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->TitleTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->TitleTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->TitleTextBox->LineThickness = 3;
			this->TitleTextBox->Location = System::Drawing::Point(105, 55);
			this->TitleTextBox->Margin = System::Windows::Forms::Padding(4);
			this->TitleTextBox->Name = L"TitleTextBox";
			this->TitleTextBox->Size = System::Drawing::Size(206, 44);
			this->TitleTextBox->TabIndex = 61;
			this->TitleTextBox->Text = L"Tytu³";
			this->TitleTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// AutorTextBox
			// 
			this->AutorTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->AutorTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->AutorTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->AutorTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->AutorTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->AutorTextBox->HintText = L"";
			this->AutorTextBox->isPassword = false;
			this->AutorTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->AutorTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->AutorTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->AutorTextBox->LineThickness = 3;
			this->AutorTextBox->Location = System::Drawing::Point(379, 55);
			this->AutorTextBox->Margin = System::Windows::Forms::Padding(4);
			this->AutorTextBox->Name = L"AutorTextBox";
			this->AutorTextBox->Size = System::Drawing::Size(206, 44);
			this->AutorTextBox->TabIndex = 63;
			this->AutorTextBox->Text = L"Autor";
			this->AutorTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Location = System::Drawing::Point(267, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(985, 657);
			this->tabControl1->TabIndex = 65;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->RekomendacjaPanel);
			this->tabPage1->Controls->Add(this->SaleComboBox);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->FiltrTextBox);
			this->tabPage1->Controls->Add(this->CategoryTextBox);
			this->tabPage1->Controls->Add(this->RefreshButton);
			this->tabPage1->Controls->Add(this->IloscTextBox);
			this->tabPage1->Controls->Add(this->TitleTextBox);
			this->tabPage1->Controls->Add(this->AutorTextBox);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->BookDataGridView);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->ResetButton);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->BuyButton);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(977, 631);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ksi¹zki";
			// 
			// RekomendacjaPanel
			// 
			this->RekomendacjaPanel->Controls->Add(this->label22);
			this->RekomendacjaPanel->Controls->Add(this->PictureExit);
			this->RekomendacjaPanel->Controls->Add(this->RekomendacjaListBox);
			this->RekomendacjaPanel->Location = System::Drawing::Point(48, 12);
			this->RekomendacjaPanel->Name = L"RekomendacjaPanel";
			this->RekomendacjaPanel->Size = System::Drawing::Size(827, 587);
			this->RekomendacjaPanel->TabIndex = 81;
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(239, 11);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(358, 34);
			this->label22->TabIndex = 85;
			this->label22->Text = L"POLECAMY ";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PictureExit
			// 
			this->PictureExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PictureExit.BackgroundImage")));
			this->PictureExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PictureExit->Location = System::Drawing::Point(739, 13);
			this->PictureExit->Name = L"PictureExit";
			this->PictureExit->Size = System::Drawing::Size(81, 77);
			this->PictureExit->TabIndex = 84;
			this->PictureExit->TabStop = false;
			this->PictureExit->Click += gcnew System::EventHandler(this, &MainForm::PictureExit_Click);
			// 
			// RekomendacjaListBox
			// 
			this->RekomendacjaListBox->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->RekomendacjaListBox->FormattingEnabled = true;
			this->RekomendacjaListBox->ItemHeight = 22;
			this->RekomendacjaListBox->Location = System::Drawing::Point(243, 123);
			this->RekomendacjaListBox->Name = L"RekomendacjaListBox";
			this->RekomendacjaListBox->Size = System::Drawing::Size(354, 444);
			this->RekomendacjaListBox->TabIndex = 83;
			// 
			// SaleComboBox
			// 
			this->SaleComboBox->FormattingEnabled = true;
			this->SaleComboBox->Location = System::Drawing::Point(48, 202);
			this->SaleComboBox->Name = L"SaleComboBox";
			this->SaleComboBox->Size = System::Drawing::Size(156, 21);
			this->SaleComboBox->TabIndex = 80;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(23, 157);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(210, 34);
			this->label17->TabIndex = 71;
			this->label17->Text = L"ZNI¯KA";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FiltrTextBox
			// 
			this->FiltrTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->FiltrTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->FiltrTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->FiltrTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->FiltrTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->FiltrTextBox->HintText = L"";
			this->FiltrTextBox->isPassword = false;
			this->FiltrTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->FiltrTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->FiltrTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->FiltrTextBox->LineThickness = 3;
			this->FiltrTextBox->Location = System::Drawing::Point(277, 210);
			this->FiltrTextBox->Margin = System::Windows::Forms::Padding(4);
			this->FiltrTextBox->Name = L"FiltrTextBox";
			this->FiltrTextBox->Size = System::Drawing::Size(206, 44);
			this->FiltrTextBox->TabIndex = 69;
			this->FiltrTextBox->Text = L"Autor";
			this->FiltrTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->FiltrTextBox->OnValueChanged += gcnew System::EventHandler(this, &MainForm::FiltrTextBox_OnValueChanged);
			// 
			// CategoryTextBox
			// 
			this->CategoryTextBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) {
				L"matematyka", L"fizyka",
					L"chemia", L"biologia", L"informatyka"
			});
			this->CategoryTextBox->FormattingEnabled = true;
			this->CategoryTextBox->Location = System::Drawing::Point(506, 233);
			this->CategoryTextBox->Name = L"CategoryTextBox";
			this->CategoryTextBox->Size = System::Drawing::Size(168, 21);
			this->CategoryTextBox->TabIndex = 68;
			this->CategoryTextBox->Text = L"Filtr";
			this->CategoryTextBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::CategoryTextBox_SelectedIndexChanged_1);
			// 
			// RefreshButton
			// 
			this->RefreshButton->ActiveBorderThickness = 1;
			this->RefreshButton->ActiveCornerRadius = 20;
			this->RefreshButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->RefreshButton->ActiveForecolor = System::Drawing::Color::Black;
			this->RefreshButton->ActiveLineColor = System::Drawing::Color::Black;
			this->RefreshButton->BackColor = System::Drawing::Color::White;
			this->RefreshButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RefreshButton.BackgroundImage")));
			this->RefreshButton->ButtonText = L"ODŒWIE¯";
			this->RefreshButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RefreshButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefreshButton->ForeColor = System::Drawing::Color::Black;
			this->RefreshButton->IdleBorderThickness = 1;
			this->RefreshButton->IdleCornerRadius = 20;
			this->RefreshButton->IdleFillColor = System::Drawing::Color::White;
			this->RefreshButton->IdleForecolor = System::Drawing::Color::Black;
			this->RefreshButton->IdleLineColor = System::Drawing::Color::Black;
			this->RefreshButton->Location = System::Drawing::Point(682, 221);
			this->RefreshButton->Margin = System::Windows::Forms::Padding(5);
			this->RefreshButton->Name = L"RefreshButton";
			this->RefreshButton->Size = System::Drawing::Size(129, 33);
			this->RefreshButton->TabIndex = 67;
			this->RefreshButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RefreshButton->Click += gcnew System::EventHandler(this, &MainForm::RefreshButton_Click_1);
			// 
			// IloscTextBox
			// 
			this->IloscTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->IloscTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->IloscTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->IloscTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->IloscTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->IloscTextBox->HintText = L"";
			this->IloscTextBox->isPassword = false;
			this->IloscTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->IloscTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->IloscTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->IloscTextBox->LineThickness = 3;
			this->IloscTextBox->Location = System::Drawing::Point(653, 55);
			this->IloscTextBox->Margin = System::Windows::Forms::Padding(4);
			this->IloscTextBox->Name = L"IloscTextBox";
			this->IloscTextBox->Size = System::Drawing::Size(206, 44);
			this->IloscTextBox->TabIndex = 66;
			this->IloscTextBox->Text = L"0";
			this->IloscTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->DownloadButton);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->ReturnButton);
			this->tabPage2->Controls->Add(this->BookDataGridView2);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(977, 631);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zakupione";
			// 
			// DownloadButton
			// 
			this->DownloadButton->ActiveBorderThickness = 1;
			this->DownloadButton->ActiveCornerRadius = 20;
			this->DownloadButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->DownloadButton->ActiveForecolor = System::Drawing::Color::Black;
			this->DownloadButton->ActiveLineColor = System::Drawing::Color::Black;
			this->DownloadButton->BackColor = System::Drawing::Color::White;
			this->DownloadButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DownloadButton.BackgroundImage")));
			this->DownloadButton->ButtonText = L"POBIERZ";
			this->DownloadButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DownloadButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DownloadButton->ForeColor = System::Drawing::Color::Black;
			this->DownloadButton->IdleBorderThickness = 1;
			this->DownloadButton->IdleCornerRadius = 20;
			this->DownloadButton->IdleFillColor = System::Drawing::Color::White;
			this->DownloadButton->IdleForecolor = System::Drawing::Color::Black;
			this->DownloadButton->IdleLineColor = System::Drawing::Color::Black;
			this->DownloadButton->Location = System::Drawing::Point(18, 166);
			this->DownloadButton->Margin = System::Windows::Forms::Padding(5);
			this->DownloadButton->Name = L"DownloadButton";
			this->DownloadButton->Size = System::Drawing::Size(157, 34);
			this->DownloadButton->TabIndex = 63;
			this->DownloadButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->DownloadButton->Click += gcnew System::EventHandler(this, &MainForm::DownloadButton_Click);
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(6, 585);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(965, 34);
			this->label16->TabIndex = 62;
			this->label16->Text = L"MO¯LIWOŒÆ ZWROTU JEDYNIE DO DWÓCH DNI OD JEJ KUPNA";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ReturnButton
			// 
			this->ReturnButton->ActiveBorderThickness = 1;
			this->ReturnButton->ActiveCornerRadius = 20;
			this->ReturnButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->ReturnButton->ActiveForecolor = System::Drawing::Color::Black;
			this->ReturnButton->ActiveLineColor = System::Drawing::Color::Black;
			this->ReturnButton->BackColor = System::Drawing::Color::White;
			this->ReturnButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ReturnButton.BackgroundImage")));
			this->ReturnButton->ButtonText = L"ZWRÓÆ";
			this->ReturnButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ReturnButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ReturnButton->ForeColor = System::Drawing::Color::Black;
			this->ReturnButton->IdleBorderThickness = 1;
			this->ReturnButton->IdleCornerRadius = 20;
			this->ReturnButton->IdleFillColor = System::Drawing::Color::White;
			this->ReturnButton->IdleForecolor = System::Drawing::Color::Black;
			this->ReturnButton->IdleLineColor = System::Drawing::Color::Black;
			this->ReturnButton->Location = System::Drawing::Point(18, 109);
			this->ReturnButton->Margin = System::Windows::Forms::Padding(5);
			this->ReturnButton->Name = L"ReturnButton";
			this->ReturnButton->Size = System::Drawing::Size(157, 34);
			this->ReturnButton->TabIndex = 61;
			this->ReturnButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ReturnButton->Click += gcnew System::EventHandler(this, &MainForm::ReturnButton_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->DownloadReturnButton);
			this->tabPage4->Controls->Add(this->label15);
			this->tabPage4->Controls->Add(this->DataGridViewReturn);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(977, 631);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Zwroty";
			this->tabPage4->UseVisualStyleBackColor = true;
			// 
			// DownloadReturnButton
			// 
			this->DownloadReturnButton->ActiveBorderThickness = 1;
			this->DownloadReturnButton->ActiveCornerRadius = 20;
			this->DownloadReturnButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->DownloadReturnButton->ActiveForecolor = System::Drawing::Color::Black;
			this->DownloadReturnButton->ActiveLineColor = System::Drawing::Color::Black;
			this->DownloadReturnButton->BackColor = System::Drawing::Color::Transparent;
			this->DownloadReturnButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DownloadReturnButton.BackgroundImage")));
			this->DownloadReturnButton->ButtonText = L"POBIERZ";
			this->DownloadReturnButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DownloadReturnButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->DownloadReturnButton->ForeColor = System::Drawing::Color::Black;
			this->DownloadReturnButton->IdleBorderThickness = 1;
			this->DownloadReturnButton->IdleCornerRadius = 20;
			this->DownloadReturnButton->IdleFillColor = System::Drawing::Color::White;
			this->DownloadReturnButton->IdleForecolor = System::Drawing::Color::Black;
			this->DownloadReturnButton->IdleLineColor = System::Drawing::Color::Black;
			this->DownloadReturnButton->Location = System::Drawing::Point(14, 157);
			this->DownloadReturnButton->Margin = System::Windows::Forms::Padding(5);
			this->DownloadReturnButton->Name = L"DownloadReturnButton";
			this->DownloadReturnButton->Size = System::Drawing::Size(157, 34);
			this->DownloadReturnButton->TabIndex = 64;
			this->DownloadReturnButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->DownloadReturnButton->Click += gcnew System::EventHandler(this, &MainForm::DownloadReturnButton_Click);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(198, 19);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(567, 34);
			this->label15->TabIndex = 61;
			this->label15->Text = L"ZWRÓCONE KSI¥¯KI";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DataGridViewReturn
			// 
			this->DataGridViewReturn->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridViewReturn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridViewReturn->Location = System::Drawing::Point(198, 95);
			this->DataGridViewReturn->Name = L"DataGridViewReturn";
			this->DataGridViewReturn->Size = System::Drawing::Size(567, 516);
			this->DataGridViewReturn->TabIndex = 60;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::White;
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->AddMoneyTextBox);
			this->tabPage3->Controls->Add(this->AddMoneyButton);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->MoneyLabel);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->DaneOpisLabel);
			this->tabPage3->Controls->Add(this->DanePasswordLabel);
			this->tabPage3->Controls->Add(this->DaneEmailLabel);
			this->tabPage3->Controls->Add(this->DaneLastNameLabel);
			this->tabPage3->Controls->Add(this->DaneNameLabel);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->label8);
			this->tabPage3->Controls->Add(this->label7);
			this->tabPage3->Controls->Add(this->label6);
			this->tabPage3->Controls->Add(this->label4);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Size = System::Drawing::Size(977, 631);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Dane";
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(387, 354);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(51, 48);
			this->label13->TabIndex = 78;
			this->label13->Text = L"zl";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddMoneyTextBox
			// 
			this->AddMoneyTextBox->Location = System::Drawing::Point(250, 452);
			this->AddMoneyTextBox->Name = L"AddMoneyTextBox";
			this->AddMoneyTextBox->Size = System::Drawing::Size(156, 20);
			this->AddMoneyTextBox->TabIndex = 77;
			// 
			// AddMoneyButton
			// 
			this->AddMoneyButton->ActiveBorderThickness = 1;
			this->AddMoneyButton->ActiveCornerRadius = 20;
			this->AddMoneyButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->AddMoneyButton->ActiveForecolor = System::Drawing::Color::Black;
			this->AddMoneyButton->ActiveLineColor = System::Drawing::Color::Black;
			this->AddMoneyButton->BackColor = System::Drawing::Color::White;
			this->AddMoneyButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddMoneyButton.BackgroundImage")));
			this->AddMoneyButton->ButtonText = L"Do³aduj";
			this->AddMoneyButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddMoneyButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddMoneyButton->ForeColor = System::Drawing::Color::Black;
			this->AddMoneyButton->IdleBorderThickness = 1;
			this->AddMoneyButton->IdleCornerRadius = 20;
			this->AddMoneyButton->IdleFillColor = System::Drawing::Color::White;
			this->AddMoneyButton->IdleForecolor = System::Drawing::Color::Black;
			this->AddMoneyButton->IdleLineColor = System::Drawing::Color::Black;
			this->AddMoneyButton->Location = System::Drawing::Point(476, 449);
			this->AddMoneyButton->Margin = System::Windows::Forms::Padding(5);
			this->AddMoneyButton->Name = L"AddMoneyButton";
			this->AddMoneyButton->Size = System::Drawing::Size(157, 34);
			this->AddMoneyButton->TabIndex = 76;
			this->AddMoneyButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddMoneyButton->Click += gcnew System::EventHandler(this, &MainForm::AddMoneyButton_Click);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(3, 435);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(210, 48);
			this->label12->TabIndex = 74;
			this->label12->Text = L"Do³aduj stan konta:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// MoneyLabel
			// 
			this->MoneyLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MoneyLabel->Location = System::Drawing::Point(228, 354);
			this->MoneyLabel->Name = L"MoneyLabel";
			this->MoneyLabel->Size = System::Drawing::Size(210, 48);
			this->MoneyLabel->TabIndex = 73;
			this->MoneyLabel->Text = L"DANE";
			this->MoneyLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(3, 354);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(210, 48);
			this->label11->TabIndex = 72;
			this->label11->Text = L"Stan konta";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DaneOpisLabel
			// 
			this->DaneOpisLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DaneOpisLabel->Location = System::Drawing::Point(228, 289);
			this->DaneOpisLabel->Name = L"DaneOpisLabel";
			this->DaneOpisLabel->Size = System::Drawing::Size(210, 48);
			this->DaneOpisLabel->TabIndex = 71;
			this->DaneOpisLabel->Text = L"DANE";
			this->DaneOpisLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DanePasswordLabel
			// 
			this->DanePasswordLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DanePasswordLabel->Location = System::Drawing::Point(228, 233);
			this->DanePasswordLabel->Name = L"DanePasswordLabel";
			this->DanePasswordLabel->Size = System::Drawing::Size(210, 48);
			this->DanePasswordLabel->TabIndex = 70;
			this->DanePasswordLabel->Text = L"DANE";
			this->DanePasswordLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DaneEmailLabel
			// 
			this->DaneEmailLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DaneEmailLabel->Location = System::Drawing::Point(228, 169);
			this->DaneEmailLabel->Name = L"DaneEmailLabel";
			this->DaneEmailLabel->Size = System::Drawing::Size(210, 48);
			this->DaneEmailLabel->TabIndex = 69;
			this->DaneEmailLabel->Text = L"DANE";
			this->DaneEmailLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DaneLastNameLabel
			// 
			this->DaneLastNameLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DaneLastNameLabel->Location = System::Drawing::Point(228, 107);
			this->DaneLastNameLabel->Name = L"DaneLastNameLabel";
			this->DaneLastNameLabel->Size = System::Drawing::Size(210, 48);
			this->DaneLastNameLabel->TabIndex = 68;
			this->DaneLastNameLabel->Text = L"DANE";
			this->DaneLastNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DaneNameLabel
			// 
			this->DaneNameLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DaneNameLabel->Location = System::Drawing::Point(228, 51);
			this->DaneNameLabel->Name = L"DaneNameLabel";
			this->DaneNameLabel->Size = System::Drawing::Size(210, 48);
			this->DaneNameLabel->TabIndex = 67;
			this->DaneNameLabel->Text = L"DANE";
			this->DaneNameLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(3, 289);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(210, 48);
			this->label10->TabIndex = 59;
			this->label10->Text = L"OPIS";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(3, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(210, 48);
			this->label8->TabIndex = 58;
			this->label8->Text = L"HAS£O";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(3, 169);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(210, 48);
			this->label7->TabIndex = 57;
			this->label7->Text = L"E-MAIL";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(3, 103);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(210, 48);
			this->label6->TabIndex = 56;
			this->label6->Text = L"NAZWISKO";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(3, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 48);
			this->label4->TabIndex = 55;
			this->label4->Text = L"IMIÊ";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::White;
			this->tabPage6->Controls->Add(this->RecenzjaBox);
			this->tabPage6->Controls->Add(this->AddRecenzjaButton);
			this->tabPage6->Controls->Add(this->RateComboBox);
			this->tabPage6->Controls->Add(this->label21);
			this->tabPage6->Controls->Add(this->AddRecenzjeTextBox);
			this->tabPage6->Controls->Add(this->RecenzjeDataGridView2);
			this->tabPage6->Controls->Add(this->label20);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(977, 631);
			this->tabPage6->TabIndex = 5;
			this->tabPage6->Text = L"Dodaj Recenzje";
			// 
			// RecenzjaBox
			// 
			this->RecenzjaBox->Location = System::Drawing::Point(24, 298);
			this->RecenzjaBox->Multiline = true;
			this->RecenzjaBox->Name = L"RecenzjaBox";
			this->RecenzjaBox->Size = System::Drawing::Size(456, 270);
			this->RecenzjaBox->TabIndex = 86;
			// 
			// AddRecenzjaButton
			// 
			this->AddRecenzjaButton->ActiveBorderThickness = 1;
			this->AddRecenzjaButton->ActiveCornerRadius = 20;
			this->AddRecenzjaButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->AddRecenzjaButton->ActiveForecolor = System::Drawing::Color::Black;
			this->AddRecenzjaButton->ActiveLineColor = System::Drawing::Color::Black;
			this->AddRecenzjaButton->BackColor = System::Drawing::Color::White;
			this->AddRecenzjaButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddRecenzjaButton.BackgroundImage")));
			this->AddRecenzjaButton->ButtonText = L"DODAJ";
			this->AddRecenzjaButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddRecenzjaButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddRecenzjaButton->ForeColor = System::Drawing::Color::Black;
			this->AddRecenzjaButton->IdleBorderThickness = 1;
			this->AddRecenzjaButton->IdleCornerRadius = 20;
			this->AddRecenzjaButton->IdleFillColor = System::Drawing::Color::White;
			this->AddRecenzjaButton->IdleForecolor = System::Drawing::Color::Black;
			this->AddRecenzjaButton->IdleLineColor = System::Drawing::Color::Black;
			this->AddRecenzjaButton->Location = System::Drawing::Point(24, 576);
			this->AddRecenzjaButton->Margin = System::Windows::Forms::Padding(5);
			this->AddRecenzjaButton->Name = L"AddRecenzjaButton";
			this->AddRecenzjaButton->Size = System::Drawing::Size(157, 34);
			this->AddRecenzjaButton->TabIndex = 84;
			this->AddRecenzjaButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddRecenzjaButton->Click += gcnew System::EventHandler(this, &MainForm::AddRecenzjaButton_Click);
			// 
			// RateComboBox
			// 
			this->RateComboBox->FormattingEnabled = true;
			this->RateComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(51) {
				L"0", L"0,1", L"0,2", L"0,3", L"0,4", L"0,5",
					L"0,6", L"0,7", L"0,8", L"0,9", L"1", L"1,1", L"1,2", L"1,3", L"1,4", L"1,5", L"1,6", L"1,7", L"1,8", L"1,9", L"2", L"2,1", L"2,2",
					L"2,3", L"2,4", L"2,5", L"2,6", L"2,7", L"2,8", L"2,9", L"3", L"3,1", L"3,2", L"3,3", L"3,4", L"3,5", L"3,6", L"3,7", L"3,8",
					L"3,9", L"4", L"4,1", L"4,2", L"4,3", L"4,4", L"4,5", L"4,6", L"4,7", L"4,8", L"4,9", L"5"
			});
			this->RateComboBox->Location = System::Drawing::Point(324, 271);
			this->RateComboBox->Name = L"RateComboBox";
			this->RateComboBox->Size = System::Drawing::Size(156, 21);
			this->RateComboBox->TabIndex = 81;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(20, 261);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(298, 34);
			this->label21->TabIndex = 75;
			this->label21->Text = L"OCENA ";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddRecenzjeTextBox
			// 
			this->AddRecenzjeTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->AddRecenzjeTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->AddRecenzjeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->AddRecenzjeTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->AddRecenzjeTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->AddRecenzjeTextBox->HintText = L"";
			this->AddRecenzjeTextBox->isPassword = false;
			this->AddRecenzjeTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->AddRecenzjeTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->AddRecenzjeTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->AddRecenzjeTextBox->LineThickness = 3;
			this->AddRecenzjeTextBox->Location = System::Drawing::Point(363, 53);
			this->AddRecenzjeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->AddRecenzjeTextBox->Name = L"AddRecenzjeTextBox";
			this->AddRecenzjeTextBox->Size = System::Drawing::Size(206, 44);
			this->AddRecenzjeTextBox->TabIndex = 73;
			this->AddRecenzjeTextBox->Text = L"Autor";
			this->AddRecenzjeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->AddRecenzjeTextBox->OnValueChanged += gcnew System::EventHandler(this, &MainForm::AddRecenzjeTextBox_OnValueChanged);
			// 
			// RecenzjeDataGridView2
			// 
			this->RecenzjeDataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->RecenzjeDataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RecenzjeDataGridView2->Location = System::Drawing::Point(24, 104);
			this->RecenzjeDataGridView2->Name = L"RecenzjeDataGridView2";
			this->RecenzjeDataGridView2->Size = System::Drawing::Size(923, 140);
			this->RecenzjeDataGridView2->TabIndex = 72;
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(283, 15);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(381, 34);
			this->label20->TabIndex = 71;
			this->label20->Text = L"LISTA KSI¥¯EK";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::White;
			this->tabPage5->Controls->Add(this->RecenzjePanel);
			this->tabPage5->Controls->Add(this->ŒredniaLabel);
			this->tabPage5->Controls->Add(this->label19);
			this->tabPage5->Controls->Add(this->RecenzjeTextBox);
			this->tabPage5->Controls->Add(this->RecenzjeDataGridView);
			this->tabPage5->Controls->Add(this->label18);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(977, 631);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Recenzje Ksi¹¿ek";
			// 
			// RecenzjePanel
			// 
			this->RecenzjePanel->AutoScroll = true;
			this->RecenzjePanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->RecenzjePanel->Location = System::Drawing::Point(41, 284);
			this->RecenzjePanel->Name = L"RecenzjePanel";
			this->RecenzjePanel->Size = System::Drawing::Size(912, 333);
			this->RecenzjePanel->TabIndex = 81;
			this->RecenzjePanel->WrapContents = false;
			this->RecenzjePanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::RecenzjePanel_Paint_1);
			// 
			// ŒredniaLabel
			// 
			this->ŒredniaLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ŒredniaLabel->Location = System::Drawing::Point(331, 247);
			this->ŒredniaLabel->Name = L"ŒredniaLabel";
			this->ŒredniaLabel->Size = System::Drawing::Size(357, 34);
			this->ŒredniaLabel->TabIndex = 80;
			this->ŒredniaLabel->Text = L"Œrednia ocen: ";
			this->ŒredniaLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(37, 247);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(377, 34);
			this->label19->TabIndex = 78;
			this->label19->Text = L"Recenzje ksi¹¿ki ";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// RecenzjeTextBox
			// 
			this->RecenzjeTextBox->BackColor = System::Drawing::SystemColors::Control;
			this->RecenzjeTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->RecenzjeTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->RecenzjeTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->RecenzjeTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->RecenzjeTextBox->HintText = L"";
			this->RecenzjeTextBox->isPassword = false;
			this->RecenzjeTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->RecenzjeTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->RecenzjeTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->RecenzjeTextBox->LineThickness = 3;
			this->RecenzjeTextBox->Location = System::Drawing::Point(369, 54);
			this->RecenzjeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->RecenzjeTextBox->Name = L"RecenzjeTextBox";
			this->RecenzjeTextBox->Size = System::Drawing::Size(206, 44);
			this->RecenzjeTextBox->TabIndex = 70;
			this->RecenzjeTextBox->Text = L"Autor";
			this->RecenzjeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->RecenzjeTextBox->OnValueChanged += gcnew System::EventHandler(this, &MainForm::RecenzjeTextBox_OnValueChanged);
			// 
			// RecenzjeDataGridView
			// 
			this->RecenzjeDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->RecenzjeDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RecenzjeDataGridView->Location = System::Drawing::Point(30, 105);
			this->RecenzjeDataGridView->Name = L"RecenzjeDataGridView";
			this->RecenzjeDataGridView->Size = System::Drawing::Size(923, 139);
			this->RecenzjeDataGridView->TabIndex = 61;
			this->RecenzjeDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::RecenzjeDataGridView_CellContentClick);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(289, 16);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(381, 34);
			this->label18->TabIndex = 54;
			this->label18->Text = L"LISTA KSI¥¯EK";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"notifyIcon1";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::notifyIcon1_MouseDoubleClick);
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel1);
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::FormForm_Exit);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->panel1->ResumeLayout(false);
			this->PanelNotification->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookDataGridView))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookDataGridView2))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->RekomendacjaPanel->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->PictureExit))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewReturn))->EndInit();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->tabPage6->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RecenzjeDataGridView2))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RecenzjeDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: void ShowRecommendations(String^ purchasedBookCategory)			// Funkcja od pokazywania rekomendowanych ksi¹¿ek po kupnie ksi¹¿ki
		{
			String^ message = "SprawdŸ tak¿e inne ksi¹¿ki z \nkategorii " + purchasedBookCategory + ":\n";
			try {
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				
				String^ sqlQuery = "SELECT TOP 3 Tytu³, Autor FROM Book WHERE Kategoria = @purchasedBookCategory ORDER BY NEWID();"; // newid daje losowe ksi¹¿ki
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@purchasedBookCategory", purchasedBookCategory);

				SqlDataReader^ reader = command.ExecuteReader();
				while (reader->Read()) {
					message += "- " + reader["Tytu³"]->ToString() + " by " + reader["Autor"]->ToString() + "\n";
				}

				sqlConn.Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("B³¹d podczas pobierania rekomendacji: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

			// Poka¿ powiadomienie balonowe
			notifyIcon1->BalloonTipTitle = "Rekomendacje";
			notifyIcon1->BalloonTipText = message;
			notifyIcon1->BalloonTipIcon = System::Windows::Forms::ToolTipIcon::Info;
			notifyIcon1->ShowBalloonTip(30000);	 // 30 sekund

			
			PanelNotification->Controls->Clear(); // Usuwa poprzednie tresci
			Label^ label = gcnew Label();
			label->AutoSize = true;
			label->Text = message;
			PanelNotification->Controls->Add(label); 
			PanelNotification->Visible = true;

			// Timer ukrywa po 30 sekundach
			System::Windows::Forms::Timer^ timer = gcnew System::Windows::Forms::Timer();
			timer->Interval = 30000; 
			timer->Tick += gcnew EventHandler(this, &MainForm::Timer_Tick);
			timer->Start();
		}

			   
private: void Timer_Tick(Object^ sender, EventArgs^ e)  // Funkcja timera ukrywaj¹ca powiadomienia po 30 sekundach
{
	PanelNotification->Visible = false;
	dynamic_cast<System::Windows::Forms::Timer^>(sender)->Stop(); // Zatrzymuje timer
}



private: void RecenzjeDataGridViewRefresh()			// Funkcja od odœwie¿enia (ksi¹¿ek z recenzji) DataGridView
{

	try
	{
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		
		String^ sqlQuery = "SELECT * FROM Book;";


		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sqlQuery, % sqlConn);
		DataSet^ dataSet = gcnew DataSet();

		// Wype³nienie adaptera ksi¹¿kami
		dataAdapter->Fill(dataSet, "Book");

		// Pokazanie ich w datagridview
		RecenzjeDataGridView->DataSource = dataSet->Tables["Book"];
		RecenzjeDataGridView2->DataSource = dataSet->Tables["Book"];
		sqlConn.Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}



	private: void RefreshData() {    // Funkcja od odœwie¿enia (ksi¹¿ek) DataGridView
		try {
			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			// Pobieranie danych z tabelii Book i dodanie Ocen z tabelii Recenzje oraz obliczenie œredniej (AVG)
			String^ sqlQuery = R"(
			SELECT 
				Book.Id, 
				Book.Tytu³, 
				Book.Autor, 
				Book.Ilosc, 
				Book.Kategoria,
				Book.Cena,
				ISNULL(AVG(Recenzje.Rate), 0) AS ŒredniaOcena		
			FROM 
				Book
			LEFT JOIN 
				Recenzje ON Book.Id = Recenzje.BookID
			GROUP BY 
				Book.Id, Book.Tytu³, Book.Autor, Book.Ilosc, Book.Kategoria, Book.Cena)";

			

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sqlQuery, % sqlConn);
			DataSet^ dataSet = gcnew DataSet();

			// Wype³nienie adaptera danymi
			dataAdapter->Fill(dataSet);

		
			BookDataGridView->DataSource = dataSet->Tables[0];

			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}




 private: void Filtr() {				// Filtr od ComboBox do szukania ksi¹¿ek na podstawie kategorii
		 try {
				
			 String^ selectedCategory = CategoryTextBox->Text;

			 
			 String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			 SqlConnection sqlConn(connString);
				sqlConn.Open();

			 
			 String^ sqlQuery = "SELECT Tytu³, Autor, Ilosc, Kategoria, Cena FROM Book WHERE Kategoria = @selectedCategory;";

			// Obiekty do których bêd¹ przypisywane wartosci
			 SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sqlQuery, % sqlConn);
				   DataSet^ dataSet = gcnew DataSet();

				 
				   dataAdapter->SelectCommand->Parameters->AddWithValue("@selectedCategory", selectedCategory);

				   
				   dataAdapter->Fill(dataSet, "Book");

				   BookDataGridView->DataSource = dataSet->Tables["Book"];
			   }
			   catch (Exception^ ex) {
				   MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			   }
		   }

	private: System::Void TaskLabel_Click(System::Object^ sender, System::EventArgs^ e) {
		

	}
private: System::Void AddLista_Click(System::Object^ sender, System::EventArgs^ e) {
}



private: System::Void TestownyTekstBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddTask_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void NameLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: void CheckLastPurchaseAndGenerateDiscount() {
	try {
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		String^ sqlQuery = "SELECT MAX(Data) as LastPurchaseDate FROM Purchases WHERE UserID = @userId;";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@userId", USER->id);

		Object^ result = command->ExecuteScalar();
		if (result != nullptr) {
			DateTime lastPurchaseDate = DateTime::Parse(result->ToString());
			DateTime currentDate = DateTime::Now;


			// Porównywanie czasu, je¿eli nie kupi³ ksi¹¿ki d³u¿ej ni¿ dwa dni, dostaje kod rabatowy
			TimeSpan diff = currentDate - lastPurchaseDate;
			if (diff.TotalDays >= 2) {

				String^ discountCode = GenerateUniqueDiscountCode(USER->id);


				// Dodaanie kodu rabatowego o wartoœci 5 %
				String^ sqlQueryInsertDiscount = "INSERT INTO Discounts (DiscountCode, UserId, IsUsed, DiscountPercent) VALUES (@discountCode, @userId, 0, 5);";
				SqlCommand^ commandInsertDiscount = gcnew SqlCommand(sqlQueryInsertDiscount, sqlConn);
				commandInsertDiscount->Parameters->AddWithValue("@discountCode", discountCode);
				commandInsertDiscount->Parameters->AddWithValue("@userId", USER->id);
				commandInsertDiscount->ExecuteNonQuery();

				
				SaleComboBox->Items->Add(discountCode);

				
				MessageBox::Show("Dawno Ciê nie by³o! £ap jednorazowy kod rabatowy o wartoœci 5%: " + discountCode, "Kod Rabatowy", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d podczas sprawdzania ostatniego zakupu: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	
	try {
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// kategorie z tabeli dodawane do ComboBox
		SqlCommand selectCommand("SELECT kategoria FROM Kategoria;", % sqlConn);
		SqlDataReader^ reader = selectCommand.ExecuteReader();

		while (reader->Read()) {
			CategoryTextBox->Items->Add(reader["kategoria"]->ToString());
			
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d w ³¹czeniu z baz¹ danych: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

	CheckLastPurchaseAndGenerateDiscount();
	RefreshData();
	LoadUserPurchases(USER->id);
	RefreshReturn(USER->id);
	LoadUserDiscounts(USER->id);
	RecenzjeDataGridViewRefresh();
	LoadRecommendationsForUser(USER->id);

}
private: System::Void Form(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	

	try {
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Usuñ istniej¹ce kategorie z tabeli
		SqlCommand deleteCommand("DELETE FROM Kategoria;", % sqlConn);
		deleteCommand.ExecuteNonQuery();

		// Dodaj aktualne kategorie z ComboBox do tabeli
		for each (String ^ category in CategoryTextBox->Items) {
			SqlCommand insertCommand("INSERT INTO Kategoria (kategoria) VALUES (@kategoria);", % sqlConn);
			insertCommand.Parameters->AddWithValue("@kategoria", category);
			insertCommand.ExecuteNonQuery();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d w ³¹czeniu z baz¹ danych: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void CategoryTextBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	Filtr();
}
private: System::Void RefreshButton_Click(System::Object^ sender, System::EventArgs^ e) {
	Refresh();
}
private: System::Void BookDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	
	// Sprawdzenie czy klikniêto na nag³ówek kolumny

	if (e->RowIndex >= 0) {
		// Indeks wiersza
		DataGridViewRow^ wiersz = BookDataGridView->Rows[e->RowIndex];

		//  wartoœci zaznaczonego wiersza
		String^ title = wiersz->Cells["Tytu³"]->Value->ToString();
		String^ author = wiersz->Cells["Autor"]->Value->ToString();
		String^ quantity = wiersz->Cells["Ilosc"]->Value->ToString();
		String^ category = wiersz->Cells["Kategoria"]->Value->ToString();
		

		
		TitleTextBox->Text = title;
		AutorTextBox->Text = author;
		IloscTextBox->Text = quantity;
		CategoryTextBox->Text = category;
	}		
}
private: System::Void CategoryTextBox_SelectedIndexChanged_1(System::Object^ sender, System::EventArgs^ e) {
	Filtr();
}
private: System::Void RefreshButton_Click_1(System::Object^ sender, System::EventArgs^ e) {

	RefreshData();
}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	TitleTextBox->Text = "";
	AutorTextBox->Text = "";
	IloscTextBox->Text = "";
	CategoryTextBox->Text = "";
	

}

	   void RefreshReturn(int userId)     // Funckja od kupionych ksi¹¿ek dla poszczególnych u¿tkowników zale¿nie od ich ID
	   {			
		   try {
			   String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			   SqlConnection sqlConn(connString);
			   sqlConn.Open();

			   DateTime purchaseDateTime = DateTime::Now;

			  
			   String^ sqlQuery = "SELECT * FROM [Return] WHERE userID = @userId;";
			   SqlCommand command(sqlQuery, % sqlConn);
			   command.Parameters->AddWithValue("@userId", userId);

			   SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
			   DataSet^ dataSet = gcnew DataSet();
			   dataAdapter->Fill(dataSet, "Return");

			   DataGridViewReturn->DataSource = dataSet->Tables["Return"];
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		   }
	   }






	   void LoadUserPurchases(int userId) {						// Funckja od kupionych ksi¹¿ek dla poszczególnych u¿tkowników zale¿nie od ich id
		   try {
			   String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			   SqlConnection sqlConn(connString);
			   sqlConn.Open();

			   DateTime purchaseDateTime = DateTime::Now;

			   
			   String^ sqlQuery = "SELECT * FROM Purchases WHERE UserID = @userId;";
			   SqlCommand command(sqlQuery, % sqlConn);
			   command.Parameters->AddWithValue("@userId", userId);
			   

			   SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
			   DataSet^ dataSet = gcnew DataSet();
			   dataAdapter->Fill(dataSet, "PurchasedBooks");

			  
			   BookDataGridView2->DataSource = dataSet->Tables["PurchasedBooks"];
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		   }
	   }


	   void LoadUserDiscounts(int userId)			// Funckja od ³adowania zni¿ek w ComboBoxie
	   {
		   SaleComboBox->Items->Clear();
		   try {
			   String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			   SqlConnection sqlConn(connString);
			   sqlConn.Open();

			   String^ sqlQuery = "SELECT DiscountCode FROM Discounts WHERE UserId = @userId AND IsUsed = 0;";
			   SqlCommand command(sqlQuery, % sqlConn);
			   command.Parameters->AddWithValue("@userId", userId);

			   SqlDataReader^ reader = command.ExecuteReader();
			   while (reader->Read()) {
				   SaleComboBox->Items->Add(reader["DiscountCode"]->ToString());
			   }

			   sqlConn.Close();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("B³¹d podczas wczytywania kodów rabatowych: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		   }
	   }

	   


	   String^ GenerateUniqueDiscountCode(int userId) {   /// Generowanie losowego rabatu dla u¿ytkownika na podstawie daty i losowych liter
		   
		   DateTime now = DateTime::Now;

		   
		   String^ timeString = now.ToString("yyyyMMddHHmmss");
		   String^ userIdString = userId.ToString();

		   
		   String^ randomString = "";
		   Random^ rnd = gcnew Random();
		   for (int i = 0; i < 5; i++) { 
			   char randomChar = 'A' + rnd->Next(0, 26); //	5 losowych  liter od A do Z
			   randomString += randomChar;
		   }

		   // Kod rabatowy w po³¹czeniu z  czasem, ID u¿ytkownika i llosowymi literami

		   String^ discountCode = "DISC" + timeString + userIdString + randomString;

		   return discountCode;
	   }


	   void SendEmail(String^ to, String^ subject, String^ body) {
		   try {
			   MailMessage^ mail = gcnew MailMessage("juraszka333@wp.pl", to, subject, body);
			   SmtpClient^ client = gcnew SmtpClient("smtp.wp.pl");
			   client->EnableSsl = true;
			   client->DeliveryMethod = SmtpDeliveryMethod::Network;
			   client->UseDefaultCredentials = false;
			   client->Credentials = gcnew NetworkCredential("juraszka333@wp.pl", "patryk123patryk123");			   
			   client->Send(mail);
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Nie mo¿na wys³aæ emaila: " + ex->Message);

		   }
	   }



private: System::Void BuyButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (BookDataGridView->SelectedRows->Count > 0) {
		int selectedRowIndex = BookDataGridView->SelectedRows[0]->Index;
		String^ bookName = BookDataGridView->Rows[selectedRowIndex]->Cells["Autor"]->Value->ToString();
		String^ bookTitle = BookDataGridView->Rows[selectedRowIndex]->Cells["Tytu³"]->Value->ToString();
		String^ bookCategory = BookDataGridView->Rows[selectedRowIndex]->Cells["Kategoria"]->Value->ToString();
		int availableQuantity = Convert::ToInt32(BookDataGridView->Rows[selectedRowIndex]->Cells["Ilosc"]->Value);
		int bookID = Convert::ToInt32(BookDataGridView->Rows[selectedRowIndex]->Cells["Id"]->Value);
		double cena = Convert::ToDouble(BookDataGridView->Rows[selectedRowIndex]->Cells["Cena"]->Value);
		int selectedQuantity = Convert::ToInt32(IloscTextBox->Text);
		String^ selectedDiscountCode = SaleComboBox->Text;
		bool isDiscountApplied = false;			// Czy chce u¿yæ kodu rabatowego
		double discountPercent = 0.0;

		if (selectedQuantity <= availableQuantity && selectedQuantity > 0) {
			try {
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				if (!String::IsNullOrEmpty(selectedDiscountCode)) {
					String^ sqlQuery = "SELECT DiscountPercent FROM Discounts WHERE DiscountCode = @discountCode AND UserId = @userId AND IsUsed = 0;";
					SqlCommand commandDiscountCheck(sqlQuery, % sqlConn);
					commandDiscountCheck.Parameters->AddWithValue("@discountCode", selectedDiscountCode);
					commandDiscountCheck.Parameters->AddWithValue("@userId", USER->id);

					Object^ discountObj = commandDiscountCheck.ExecuteScalar();
					if (discountObj != nullptr)												// Sprawdzenie czy kod rabatowy jest wa¿ny
					{
						discountPercent = Convert::ToDouble(discountObj);
						cena = cena * (1 - (discountPercent / 100));
						isDiscountApplied = true;
					}
				}

				if (cena * selectedQuantity <= USER->money) {
					DateTime purchaseDateTime = DateTime::Now;
					DateTime now = DateTime::Now;


					// Dodanie ksi¹¿ki do zakupionych (Purchases)
					String^ sqlQueryInsert = "INSERT INTO Purchases (nazwa, tytul, kategoria, ilosc, UserID, Data, cena) VALUES (@nazwa, @tytul, @kategoria, @ilosc, @userId, @data, @cena);";
					SqlCommand commandInsert(sqlQueryInsert, % sqlConn);
					commandInsert.Parameters->AddWithValue("@nazwa", bookName);
					commandInsert.Parameters->AddWithValue("@tytul", bookTitle);
					commandInsert.Parameters->AddWithValue("@kategoria", bookCategory);
					commandInsert.Parameters->AddWithValue("@ilosc", selectedQuantity);
					commandInsert.Parameters->AddWithValue("@userId", USER->id);
					commandInsert.Parameters->AddWithValue("@data", purchaseDateTime);
					commandInsert.Parameters->AddWithValue("@cena", cena); // Cena po rabacie
					commandInsert.ExecuteNonQuery();


					// Mniejsza ilosc ksi¹¿ek zale¿nie od wybranej wartoœci
					String^ sqlQueryUpdate = "UPDATE Book SET Ilosc = Ilosc - @ilosc WHERE Autor = @autor AND Tytu³ = @tytul AND Kategoria = @kategoria AND Cena = @Cena;";
					SqlCommand commandUpdate(sqlQueryUpdate, % sqlConn);
					commandUpdate.Parameters->AddWithValue("@ilosc", selectedQuantity);
					commandUpdate.Parameters->AddWithValue("@autor", bookName);
					commandUpdate.Parameters->AddWithValue("@tytul", bookTitle);
					commandUpdate.Parameters->AddWithValue("@kategoria", bookCategory);
					commandUpdate.Parameters->AddWithValue("@Cena", cena);

					commandUpdate.ExecuteNonQuery();



					// Aktualizacja stanu konta u¿ytkownika
					String^ sqlQueryUpdateUser = "UPDATE users SET money = money - @totalPrice WHERE Id = @IdUserId;";
					SqlCommand commandUpdateUser(sqlQueryUpdateUser, % sqlConn);
					commandUpdateUser.Parameters->AddWithValue("@totalPrice", cena * selectedQuantity); 
					commandUpdateUser.Parameters->AddWithValue("@IdUserId", USER->id);
					commandUpdateUser.ExecuteNonQuery();
					USER->money -= cena * selectedQuantity; // Cena po rabacie
					MoneyLabel->Text = USER->money.ToString();
					MoneyLabel2->Text = USER->money.ToString();

					// Aktualizacja stanu konta admina
					String^ sqlQueryUpdateAdmin = "UPDATE Admin SET money = money + @totalPrice;";
					SqlCommand commandUpdateAdmin(sqlQueryUpdateAdmin, % sqlConn);
					commandUpdateAdmin.Parameters->AddWithValue("@totalPrice", cena * selectedQuantity); // Cena po rabacie
					commandUpdateAdmin.ExecuteNonQuery();

					// Aktualizacja Tabeli Income (do analizy dla admina)
					String^ sqlQueryUpdateIncome = "INSERT INTO Income (money, date, UserID, BookID, ilosc) VALUES (@money, @date, @UserID, @BookID, @ilosc);";
					SqlCommand commandUpdateIncome(sqlQueryUpdateIncome, % sqlConn);
					commandUpdateIncome.Parameters->AddWithValue("@money", cena * selectedQuantity); // Cena po rabacie
					commandUpdateIncome.Parameters->AddWithValue("@date", now);
					commandUpdateIncome.Parameters->AddWithValue("@UserID", USER->id);
					commandUpdateIncome.Parameters->AddWithValue("@BookID", bookID);
					commandUpdateIncome.Parameters->AddWithValue("@ilosc", selectedQuantity);
					commandUpdateIncome.ExecuteNonQuery();




					// Jeœli kod rabatowy zosta³ u¿yty uniewa¿niæ go
					if (isDiscountApplied) {
						String^ sqlQueryUpdateDiscount = "UPDATE Discounts SET IsUsed = 1 WHERE DiscountCode = @discountCode AND UserId = @userId;";
						SqlCommand commandUpdateDiscount(sqlQueryUpdateDiscount, % sqlConn);
						commandUpdateDiscount.Parameters->AddWithValue("@discountCode", selectedDiscountCode);
						commandUpdateDiscount.Parameters->AddWithValue("@userId", USER->id);
						commandUpdateDiscount.ExecuteNonQuery();
						SaleComboBox->Items->Remove(selectedDiscountCode); // Usuwanie wykorzystanego kodu z ComboBox
						MessageBox::Show("Kod rabatowy zosta³ zastosowany.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
					}

					// Je¿eli u¿ytkownik kupi 3 lub wiêcej ksi¹¿ek dostaje rabat 15%
						if (selectedQuantity >= 3) {
							String^ discountCode = GenerateUniqueDiscountCode(USER->id);
							// Dodaj kod rabatowy do bazy danych
							String^ sqlQueryDiscountInsert = "INSERT INTO Discounts (DiscountCode, UserId, IsUsed, DiscountPercent) VALUES (@discountCode, @userId, 0, 15);";
							SqlCommand commandDiscountInsert(sqlQueryDiscountInsert, % sqlConn);
							commandDiscountInsert.Parameters->AddWithValue("@discountCode", discountCode);
							commandDiscountInsert.Parameters->AddWithValue("@userId", USER->id);
							commandDiscountInsert.ExecuteNonQuery();

							// Dodaj kod rabatowy do comboboxa
							SaleComboBox->Items->Add(discountCode);

							
							MessageBox::Show("Dziêkujemy za zakupy! Otrzymujesz kod rabatowy na kolejne zakupy: " + discountCode, "Kod Rabatowy o wartoœci 15%", MessageBoxButtons::OK, MessageBoxIcon::Information);
						}

						// SendEmail(USER->email, "Potwierdzenie zakupu ksi¹¿ki", "Zakupi³eœ ksi¹¿kê: " + bookTitle + " Autor: " + bookName + ". Dziêkujemy!");

						// Wysy³anie emaila z informacj¹ o zakupie
						SendEmail("juraszka03@wp.pl", "Nowy zakup ksi¹¿ki", "U¿ytkownik: " + USER->name + " " + USER->lastname + " zakupi³ ksi¹¿kê: " + bookTitle + " Autor: " + bookName);


					//

					 MessageBox::Show("Zakupiono ksi¹¿kê. Potwierdzenie wys³ano na e-mail", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);

					ShowRecommendations(bookCategory);
					RefreshData();
					LoadUserPurchases(USER->id);
					LoadUserDiscounts(USER->id);
					
				}
				else {
					MessageBox::Show("Brak wystarczaj¹cych œrodków na zakup.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}

				sqlConn.Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		else {
			MessageBox::Show("Brak dostêpnych egzemplarzy lub podana nieprawid³owa iloœæ.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
}




private: System::Void FiltrTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {

	try {
		
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		
		String^ filterText = FiltrTextBox->Text;

		
		String^ sqlQuery = "SELECT Id, Tytu³, Ilosc, Kategoria, Autor FROM Book WHERE Autor LIKE '%" + filterText + "%' OR Tytu³ LIKE '%" + filterText + "%' OR Id LIKE '%" + filterText + "%';";

		
		SqlCommand command(sqlQuery, % sqlConn);

		// Obiekt do pobrania danych z bazy
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
		// Obiekt od pobierania danych z bazy
		DataTable^ filteredDataTable = gcnew DataTable();

		
		dataAdapter->Fill(filteredDataTable);

		
		BookDataGridView->DataSource = filteredDataTable;
	}
	catch (Exception^ ex) {
	
		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void BookDataGridView2_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}

private: System::Void AddMoneyButton_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		int AddMoney = System::Convert::ToInt32(AddMoneyTextBox->Text);

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		
		SqlTransaction^ sqlTransaction = sqlConn.BeginTransaction();

		try {
			
			String^ sqlQueryUpdateMoney = "UPDATE users SET money = money + @money WHERE Id = @userId;";
			SqlCommand commandUpdateMoney(sqlQueryUpdateMoney, % sqlConn, sqlTransaction);

			commandUpdateMoney.Parameters->AddWithValue("@money", AddMoney);
			commandUpdateMoney.Parameters->AddWithValue("@userId", USER->id);

			commandUpdateMoney.ExecuteNonQuery();

			
			USER->money = USER->money + AddMoney;
			MoneyLabel->Text = USER->money.ToString();
			MoneyLabel2->Text = USER->money.ToString();

		
			sqlTransaction->Commit();

			MessageBox::Show("Zaktualizowano pomyœlnie.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {

			// W razie b³êdu transakcja zostaje wycofana
			sqlTransaction->Rollback();
			MessageBox::Show("B³¹d: " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d: " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}





private: System::Void ReturnButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (BookDataGridView2->SelectedRows->Count > 0) {
		int selectedRowIndex = BookDataGridView2->SelectedRows[0]->Index;
		if (BookDataGridView2->Rows[selectedRowIndex]->Cells[0]->Value) {
			int purchaseId = Convert::ToInt32(BookDataGridView2->Rows[selectedRowIndex]->Cells[0]->Value);
			DateTime purchaseDate = Convert::ToDateTime(BookDataGridView2->Rows[selectedRowIndex]->Cells["Data"]->Value); // Pobierz datê zakupu
			DateTime currentDate = DateTime::Now;
			TimeSpan dateDifference = currentDate - purchaseDate;  // Obliczanie ró¿nicy czasy

			if (dateDifference.TotalDays <= 2) { // SprawdŸ czy od zakupu minê³y maksymalnie 2 dni

				// Zwrot
				int userId = USER->id; 
				String^ title = BookDataGridView2->Rows[selectedRowIndex]->Cells["tytul"]->Value->ToString();
				String^ author = BookDataGridView2->Rows[selectedRowIndex]->Cells["nazwa"]->Value->ToString();
				int quantity = Convert::ToInt32(BookDataGridView2->Rows[selectedRowIndex]->Cells["ilosc"]->Value);
				String^ category = BookDataGridView2->Rows[selectedRowIndex]->Cells["kategoria"]->Value->ToString();
				int price = Convert::ToInt32(BookDataGridView2->Rows[selectedRowIndex]->Cells["cena"]->Value);

				try {
					String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
					SqlConnection sqlConn(connString);
					sqlConn.Open();

					
					String^ sqlQuery = "DELETE FROM Purchases WHERE Id = @purchaseId;";
					SqlCommand commandPurchases(sqlQuery, % sqlConn);
					commandPurchases.Parameters->AddWithValue("@purchaseId", purchaseId);
					commandPurchases.ExecuteNonQuery();

					
					sqlQuery = "INSERT INTO [Return] (nazwa, tytul, ilosc, kategoria, userID, data, cena) VALUES (@nazwa, @tytul, @ilosc, @kategoria, @userID, @data, @cena);";
					SqlCommand command(sqlQuery, % sqlConn);
					command.Parameters->AddWithValue("@nazwa", author);
					command.Parameters->AddWithValue("@tytul", title);
					command.Parameters->AddWithValue("@ilosc", quantity);
					command.Parameters->AddWithValue("@kategoria", category);
					command.Parameters->AddWithValue("@userID", userId);
					command.Parameters->AddWithValue("@data", currentDate); // Obecna data jako data zwrotu
					command.Parameters->AddWithValue("@cena", price);
					command.ExecuteNonQuery();

					// Aktualizacja stanu konta u¿ytkownika
					sqlQuery = "UPDATE users SET money = money + @price WHERE Id = @userId;";
					SqlCommand commandUser(sqlQuery, % sqlConn);
					commandUser.Parameters->AddWithValue("@price", price * quantity);
					commandUser.Parameters->AddWithValue("@userId", userId);
					commandUser.ExecuteNonQuery();

					// Aktualizacja stanu konta admina
					sqlQuery = "UPDATE admin SET money = money - @price WHERE Id = 3;"; 
					SqlCommand commandAdmin(sqlQuery, % sqlConn);
					commandAdmin.Parameters->AddWithValue("@price", price * quantity);
					commandAdmin.ExecuteNonQuery();

					sqlConn.Close();

					
					USER->money += (price * quantity);
					MoneyLabel->Text = USER->money.ToString();
					MoneyLabel2->Text = USER->money.ToString();

					// Odœwie¿anie
					LoadUserPurchases(USER->id);
					RefreshReturn(USER->id);

					MessageBox::Show("Ksi¹¿ka zosta³a zwrócona.", "Zwrot ksi¹¿ki", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (Exception^ ex) {
					MessageBox::Show("B³¹d w trakcie operacji zwrotu: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				
				MessageBox::Show("Termin na zwrot ksi¹¿ki min¹³. Mo¿na zwróciæ ksi¹¿kê maksymalnie do 2 dni od zakupu.", "Termin min¹³", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}
	else {
		MessageBox::Show("Nie wybrano wiersza do zwrotu", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}



private: System::Void notifyIcon1_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
}


private: System::Void DownloadButton_Click(System::Object^ sender, System::EventArgs^ e) {
	if (BookDataGridView2->SelectedRows->Count > 0) {
		int selectedRowIndex = BookDataGridView2->SelectedRows[0]->Index;
		if (BookDataGridView2->Rows[selectedRowIndex]->Cells[0]->Value) {
			String^ title = BookDataGridView2->Rows[selectedRowIndex]->Cells["tytul"]->Value->ToString();
			String^ author = BookDataGridView2->Rows[selectedRowIndex]->Cells["nazwa"]->Value->ToString();
			String^ quantity = BookDataGridView2->Rows[selectedRowIndex]->Cells["ilosc"]->Value->ToString();
			String^ category = BookDataGridView2->Rows[selectedRowIndex]->Cells["kategoria"]->Value->ToString();
			String^ price = BookDataGridView2->Rows[selectedRowIndex]->Cells["cena"]->Value->ToString();
			String^ data = BookDataGridView2->Rows[selectedRowIndex]->Cells["Data"]->Value->ToString();

			// Tworzenie zawartoœci faktury
			String^ invoiceContent = "Faktura dla zakupionej ksi¹¿ki\n\n";
			invoiceContent += "Tytu³: " + title + "\n";
			invoiceContent += "Autor: " + author + "\n";
			invoiceContent += "Iloœæ: " + quantity + "\n";
			invoiceContent += "Kategoria: " + category + "\n";
			invoiceContent += "Cena: " + price + "\n";
			invoiceContent += "Data: " + data + "\n";

			// Œcie¿ka do folderu
			String^ folderPath = "C:\\Users\\User\\Desktop\\AplikacjaDoKupnaKsi¹¿ek\\ProjektInformatyka\\U¯YTKOWNICY_KUPIONE";       ///////////// TUTAJ WRÓCIÆ ////////////////////////////////////////

			// Sprawdzenie czy folder istnieje
			if (!System::IO::Directory::Exists(folderPath)) {
				System::IO::Directory::CreateDirectory(folderPath);
			}

			// Tworzenie nazwy pliku
			String^ fileName = folderPath + "\\Faktura_" + title + ".txt";

			// Zapisanie faktury do pliku
			System::IO::File::WriteAllText(fileName, invoiceContent);

			MessageBox::Show("Faktura zosta³a zapisana w pliku: " + fileName, "Zapisano", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("Nie wybrano wiersza do pobrania", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}
private: System::Void DownloadReturnButton_Click(System::Object^ sender, System::EventArgs^ e) {


	if (DataGridViewReturn->SelectedRows->Count > 0) {
		int selectedRowIndex = DataGridViewReturn->SelectedRows[0]->Index;
		if (DataGridViewReturn->Rows[selectedRowIndex]->Cells[0]->Value) {
			String^ title = DataGridViewReturn->Rows[selectedRowIndex]->Cells["tytul"]->Value->ToString();
			String^ author = DataGridViewReturn->Rows[selectedRowIndex]->Cells["nazwa"]->Value->ToString();
			String^ quantity = DataGridViewReturn->Rows[selectedRowIndex]->Cells["ilosc"]->Value->ToString();
			String^ category = DataGridViewReturn->Rows[selectedRowIndex]->Cells["kategoria"]->Value->ToString();
			String^ price = DataGridViewReturn->Rows[selectedRowIndex]->Cells["cena"]->Value->ToString();
			String^ data = DataGridViewReturn->Rows[selectedRowIndex]->Cells["Data"]->Value->ToString();

			// Tworzenie zawartoœci faktury
			String^ invoiceContent = "Faktura dla zwróconej ksi¹¿ki\n\n";
			invoiceContent += "Tytu³: " + title + "\n";
			invoiceContent += "Autor: " + author + "\n";
			invoiceContent += "Iloœæ: " + quantity + "\n";
			invoiceContent += "Kategoria: " + category + "\n";
			invoiceContent += "Cena: " + price + "\n";
			invoiceContent += "Data: " + data + "\n";

			// Œcie¿ka do folderu
			String^ folderPath = "C:\\Users\\User\\Desktop\\AplikacjaDoKupnaKsi¹¿ek\\ProjektInformatyka\\U¯YTKOWNICY_ZWRÓCONE";

			// Sprawdzenie czy folder istnieje
			if (!System::IO::Directory::Exists(folderPath)) {
				System::IO::Directory::CreateDirectory(folderPath);
			}

			// Tworzenie nazwy pliku
			String^ fileName = folderPath + "\\Faktura_" + title + ".txt";

			// Zapis
			System::IO::File::WriteAllText(fileName, invoiceContent);

			MessageBox::Show("Faktura zosta³a zapisana w pliku: " + fileName, "Zapisano", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("Nie wybrano wiersza do pobrania", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



}
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {

	PanelNotification->Visible = false;
	timer1->Stop();

}


private: void ShowRecenzje(String^ bookTitle) {						// Funckja od pokazywania recenzji na podstawie tytu³u
	try {
		// Czyszczenie RecenzjeListBoxa

		RecenzjePanel->Controls->Clear();

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Pobrania recenzji i ocen na podstawie tytu³u ksi¹¿ki

		String^ sqlQuery = "SELECT u.name, r.Rate, r.Opis FROM Recenzje r INNER JOIN users u ON r.UserID = u.Id WHERE r.Tytul = @bookTitle;";  // pobieranie na podstawie identyfikatora u¿ytkownika
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@bookTitle", bookTitle);

		SqlDataReader^ reader = command.ExecuteReader();

		while (reader->Read()) {
			String^ userName = reader["name"]->ToString();
			String^ rating = reader["Rate"]->ToString();
			String^ review = reader["Opis"]->ToString();

			//KKontrolki Label dla ka¿dej recenzji  


			Label^ reviewLabel = gcnew Label();
			reviewLabel->Text = userName + ": " + review + "    Ocena:  " + rating + "/5";
			reviewLabel->AutoSize = true;
			reviewLabel->Margin = System::Windows::Forms::Padding(10);

			// Dodawanie kontrolki Label do RecenzjePanel


			RecenzjePanel->Controls->Add(reviewLabel);
		}

		sqlConn.Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d podczas pobierania recenzji: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: void Œrednia()			// Funckja licz¹ca œredni¹ danej ksi¹¿ki
{
	try {
		String^ bookTitle = RecenzjeTextBox->Text; 

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		// Pobrania ocen dla danej ksi¹¿ki
		String^ sqlQuery = "SELECT Rate FROM Recenzje WHERE Tytul = @bookTitle;";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@bookTitle", bookTitle);

		SqlDataReader^ reader = command->ExecuteReader();
		double total = 0;
		int count = 0;

		// Oblicz œredni¹ ocen

		while (reader->Read()) {
			total += Convert::ToDouble(reader["Rate"]);
			count++;
		}

		sqlConn->Close();

		
		if (count > 0) {
			double average = total / count;
			ŒredniaLabel->Text = "Œrednia ocen: " + average.ToString("0.00"); // Formatuj œredni¹ do dwóch miejsc po przecinku
		}
		else {
			ŒredniaLabel->Text = "Brak ocen dla tej ksi¹¿ki.";
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d podczas pobierania ocen: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}


private: System::Void RecenzjeTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {  // Filtr recenzji

	try {									

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();


		String^ filterText = RecenzjeTextBox->Text;


		String^ sqlQuery = "SELECT * FROM Book WHERE Autor LIKE '%" + filterText + "%' OR Tytu³ LIKE '%" + filterText + "%' OR Id LIKE '%" + filterText + "%';";


		SqlCommand command(sqlQuery, % sqlConn);

		// Obiekt do pobrania danych z bazy
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
		// Obiekt od pobierania danych z bazy
		DataTable^ filteredDataTable = gcnew DataTable();


		dataAdapter->Fill(filteredDataTable);
		RecenzjeDataGridView->DataSource = filteredDataTable;

		ShowRecenzje(RecenzjeTextBox->Text);
		Œrednia();

	}
	catch (Exception^ ex) {

		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}



}
private: System::Void AddRecenzjeTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {

	try {

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();


		String^ filterText = AddRecenzjeTextBox->Text;


		String^ sqlQuery = "SELECT * FROM Book WHERE Autor LIKE '%" + filterText + "%' OR Tytu³ LIKE '%" + filterText + "%' OR Id LIKE '%" + filterText + "%';";


		SqlCommand command(sqlQuery, % sqlConn);

		// Obiekt do pobrania danych z bazy
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
		// Obiekt od pobierania danych z bazy
		DataTable^ filteredDataTable = gcnew DataTable();


		dataAdapter->Fill(filteredDataTable);


		RecenzjeDataGridView2->DataSource = filteredDataTable;
	}
	catch (Exception^ ex) {

		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
private: System::Void AddRecenzjaButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// SprawdŸ czy u¿ytkownik wybra³ ksi¹¿kê ocenê i wpisa³ opis
	if (RecenzjeDataGridView2->SelectedRows->Count > 0 && RateComboBox->SelectedItem != nullptr && !String::IsNullOrWhiteSpace(AddRecenzjeTextBox->Text)) {
		int selectedRowIndex = RecenzjeDataGridView2->SelectedRows[0]->Index;
		int bookID = Convert::ToInt32(RecenzjeDataGridView2->Rows[selectedRowIndex]->Cells["Id"]->Value);
		String^ tytul = Convert::ToString(RecenzjeDataGridView2->Rows[selectedRowIndex]->Cells["Tytu³"]->Value);
		String^ autor = Convert::ToString(RecenzjeDataGridView2->Rows[selectedRowIndex]->Cells["Autor"]->Value);
		double rating = Convert::ToDouble(RateComboBox->Text);
		String^ text = RecenzjaBox->Text;

		try {
			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection^ sqlConn = gcnew SqlConnection(connString);
			sqlConn->Open();

			String^ sqlQuery = "INSERT INTO Recenzje (UserID, BookID, Tytul, Autor, Rate, Opis) VALUES (@userID, @bookID, @tytul, @autor, @rating, @reviewText);";
			SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
			command->Parameters->AddWithValue("@userID", USER->id);
			command->Parameters->AddWithValue("@bookID", bookID);
			command->Parameters->AddWithValue("@tytul", tytul);
			command->Parameters->AddWithValue("@autor", autor);
			command->Parameters->AddWithValue("@rating", rating);
			command->Parameters->AddWithValue("@reviewText", text);
			command->ExecuteNonQuery();

			sqlConn->Close();

			MessageBox::Show("Recenzja zosta³a dodana pomyœlnie.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("Wyst¹pi³ b³¹d: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else {
		MessageBox::Show("Wybierz ksi¹¿kê, ocenê i wpisz recenzjê.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}


private: System::Void RecenzjePanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void RecenzjeDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void RecenzjePanel_Paint_1(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}

	   
private: void LoadRecommendationsForUser(int userId) {				//  Funkcja ³aduje rekomendacje po logowaniu u¿ytkownika
	try {
		
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		// TOP 5 ksi¹¿ek pokazywanych na podstawie ostatnich zakupów
		String^ sqlQuery = "SELECT TOP 5 Tytul, Cena FROM Purchases WHERE UserID = @userId ORDER BY Data DESC;";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@userId", userId);

		
		SqlDataReader^ reader = command->ExecuteReader();
		RekomendacjaListBox->Items->Clear();						 //Czyszczenie wczeœniejszych rekomendacji
		RekomendacjaListBox->Items->Add("Najgorêtsze tytu³y !!!");

		while (reader->Read()) {
			String^ bookTitle = reader["Tytul"]->ToString();
			int bookPrice = Convert::ToInt32(reader["Cena"]); 

			// Formatuj ka¿d¹ rekomendacjê zgodnie z szablonem
			String^ formattedRecommendation = "Tytu³: " + bookTitle + "     za jedyne    " + bookPrice + " z³ !!!";

			
			RekomendacjaListBox->Items->Add(formattedRecommendation);
		}
		sqlConn->Close();

		
		RekomendacjaPanel->Visible = true;

	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d podczas ³adowania rekomendacji: " + ex->Message);
	}
}




private: System::Void RekomendacjaExitPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {

	RekomendacjaPanel->Visible = false;

}
private: System::Void PictureExit_Click(System::Object^ sender, System::EventArgs^ e) {
	RekomendacjaPanel->Visible = false;
}
private: System::Void FormForm_Exit(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
}
};
}
