#pragma once

#include "Admin.h"

namespace ProjektInformatyka {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	using namespace System::IO;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{

	public: Admin^ dane;

	public:
		AdminForm(Admin^ DANE)
		{
			InitializeComponent();
			

			dane = DANE;
			KASA->Text = dane->money.ToString();

		}

	
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ ADMIN;
private: System::Windows::Forms::Label^ KASA;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label14;
private: System::Windows::Forms::TabPage^ tabPage8;
private: System::Windows::Forms::TabPage^ tabPage7;
private: System::Windows::Forms::TabPage^ tabPage5;
private: System::Windows::Forms::ComboBox^ StatsFiltrBook;
private: System::Windows::Forms::Label^ IloscBookLabel;
private: System::Windows::Forms::Label^ KategoriaBookLabel;
private: System::Windows::Forms::Label^ label25;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::DataGridView^ DataGridViewBookStats;
private: Bunifu::Framework::UI::BunifuThinButton2^ RefreshButtonBookStats;
private: System::Windows::Forms::Label^ label22;
private: System::Windows::Forms::Label^ label23;
private: System::Windows::Forms::DateTimePicker^ EndTimePickerBook;
private: System::Windows::Forms::DateTimePicker^ StartTimePickerBook;
private: System::Windows::Forms::Label^ label24;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ StatystykiBook;
private: System::Windows::Forms::TabPage^ tabPage4;
private: System::Windows::Forms::Label^ IncomeIloscLabel;
private: System::Windows::Forms::Label^ label20;
private: System::Windows::Forms::Label^ IncomeMoneyLabel;
private: System::Windows::Forms::Label^ label19;
private: System::Windows::Forms::DataVisualization::Charting::Chart^ StatystykiPrzychody;
private: Bunifu::Framework::UI::BunifuThinButton2^ RefreshIncomeMoney;
private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::Label^ label17;
private: System::Windows::Forms::DateTimePicker^ EndTimePicker;
private: System::Windows::Forms::DateTimePicker^ StartTimePicker;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::DataGridView^ DataGridViewIncome;
private: System::Windows::Forms::TabPage^ tabPage3;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::DataGridView^ BuyBookDataGridView;
private: System::Windows::Forms::TabPage^ tabPage2;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ UserFiltrTextBox;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: Bunifu::Framework::UI::BunifuThinButton2^ EditUserButton;
private: Bunifu::Framework::UI::BunifuThinButton2^ DeleteUserButton;
private: Bunifu::Framework::UI::BunifuThinButton2^ AddUserButton;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ PasswordTextBox;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ EmailTextBox;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ LastNameTextBox;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ NameTextBox;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::DataGridView^ UserDataGridView;
private: System::Windows::Forms::TabPage^ tabPage1;
private: System::Windows::Forms::Label^ label12;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ PriceTextBox;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ FiltrTextBox;
private: System::Windows::Forms::Label^ label1;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ AddCategoryTextBox;
private: Bunifu::Framework::UI::BunifuThinButton2^ AddCategoryButton;
private: Bunifu::Framework::UI::BunifuThinButton2^ RefreshButton;
private: System::Windows::Forms::ComboBox^ CategoryTextBox2;
private: System::Windows::Forms::ComboBox^ CategoryTextBox;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ IloscTextBox;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ TitleTextBox;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ AutorTextBox;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::DataGridView^ BookDataGridView;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Label^ label8;
private: Bunifu::Framework::UI::BunifuThinButton2^ ResetButton;
private: Bunifu::Framework::UI::BunifuThinButton2^ DeleteButton;
private: Bunifu::Framework::UI::BunifuThinButton2^ EditButton;
private: Bunifu::Framework::UI::BunifuThinButton2^ SaveButton;
private: System::Windows::Forms::TabControl^ tabControl1;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::DataGridView^ DataGridViewReturn;
private: Bunifu::Framework::UI::BunifuThinButton2^ PobierzRaportButton;
private: Bunifu::Framework::UI::BunifuThinButton2^ PobierzRaportKategorie;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ ZwróconeBookFiltrTextBox;

private: Bunifu::Framework::UI::BunifuMaterialTextbox^ KupioneFiltrTextBox;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::TabPage^ tabPage6;
private: System::Windows::Forms::Label^ label28;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ AddDiscountTextBox;

private: System::Windows::Forms::DataGridView^ UserStatsDataGridView;

private: System::Windows::Forms::Label^ label27;
private: System::Windows::Forms::ComboBox^ FiltrUserComboBox;
private: Bunifu::Framework::UI::BunifuThinButton2^ AddDiscountButton;


private: System::Windows::Forms::FlowLayoutPanel^ RecenzjePanel;
private: System::Windows::Forms::Label^ ŒredniaLabel;
private: System::Windows::Forms::Label^ label29;
private: Bunifu::Framework::UI::BunifuMaterialTextbox^ RecenzjeTextBox;
private: System::Windows::Forms::DataGridView^ RecenzjeDataGridView;
private: System::Windows::Forms::Label^ label30;
private: System::Windows::Forms::TabPage^ tabPage9;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->KASA = (gcnew System::Windows::Forms::Label());
			this->ADMIN = (gcnew System::Windows::Forms::Label());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->AddDiscountButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->AddDiscountTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->UserStatsDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->FiltrUserComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->ZwróconeBookFiltrTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->DataGridViewReturn = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->PobierzRaportKategorie = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->StatsFiltrBook = (gcnew System::Windows::Forms::ComboBox());
			this->IloscBookLabel = (gcnew System::Windows::Forms::Label());
			this->KategoriaBookLabel = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->DataGridViewBookStats = (gcnew System::Windows::Forms::DataGridView());
			this->RefreshButtonBookStats = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->EndTimePickerBook = (gcnew System::Windows::Forms::DateTimePicker());
			this->StartTimePickerBook = (gcnew System::Windows::Forms::DateTimePicker());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->StatystykiBook = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->PobierzRaportButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->IncomeIloscLabel = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->IncomeMoneyLabel = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->StatystykiPrzychody = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->RefreshIncomeMoney = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->EndTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->StartTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->DataGridViewIncome = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->KupioneFiltrTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->BuyBookDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->UserFiltrTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->EditUserButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->DeleteUserButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->AddUserButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->PasswordTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->EmailTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->LastNameTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->NameTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->UserDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->PriceTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->FiltrTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddCategoryTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->AddCategoryButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->RefreshButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->CategoryTextBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->CategoryTextBox = (gcnew System::Windows::Forms::ComboBox());
			this->IloscTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->TitleTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->AutorTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->BookDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->ResetButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->DeleteButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->EditButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->SaveButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->RecenzjePanel = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->ŒredniaLabel = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->RecenzjeTextBox = (gcnew Bunifu::Framework::UI::BunifuMaterialTextbox());
			this->RecenzjeDataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->panel2->SuspendLayout();
			this->tabPage8->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserStatsDataGridView))->BeginInit();
			this->tabPage7->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewReturn))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewBookStats))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatystykiBook))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatystykiPrzychody))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewIncome))->BeginInit();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BuyBookDataGridView))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserDataGridView))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookDataGridView))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RecenzjeDataGridView))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Location = System::Drawing::Point(7, 103);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(49, 55);
			this->panel1->TabIndex = 0;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->KASA);
			this->panel2->Controls->Add(this->ADMIN);
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Location = System::Drawing::Point(5, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(154, 663);
			this->panel2->TabIndex = 1;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::Transparent;
			this->panel3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel3.BackgroundImage")));
			this->panel3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel3->Location = System::Drawing::Point(40, 6);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(78, 72);
			this->panel3->TabIndex = 82;
			// 
			// label14
			// 
			this->label14->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(7, 289);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(129, 47);
			this->label14->TabIndex = 52;
			this->label14->Text = L"Ca³kowity";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(82, 336);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(54, 47);
			this->label15->TabIndex = 51;
			this->label15->Text = L"z³";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// KASA
			// 
			this->KASA->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KASA->Location = System::Drawing::Point(5, 336);
			this->KASA->Name = L"KASA";
			this->KASA->Size = System::Drawing::Size(89, 47);
			this->KASA->TabIndex = 50;
			this->KASA->Text = L"KASA";
			this->KASA->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// ADMIN
			// 
			this->ADMIN->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ADMIN->Location = System::Drawing::Point(64, 118);
			this->ADMIN->Name = L"ADMIN";
			this->ADMIN->Size = System::Drawing::Size(87, 32);
			this->ADMIN->TabIndex = 14;
			this->ADMIN->Text = L"ADMIN";
			this->ADMIN->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::Color::White;
			this->tabPage8->Controls->Add(this->AddDiscountButton);
			this->tabPage8->Controls->Add(this->label28);
			this->tabPage8->Controls->Add(this->AddDiscountTextBox);
			this->tabPage8->Controls->Add(this->UserStatsDataGridView);
			this->tabPage8->Controls->Add(this->label27);
			this->tabPage8->Controls->Add(this->FiltrUserComboBox);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(1093, 637);
			this->tabPage8->TabIndex = 7;
			this->tabPage8->Text = L"Statystyki-U¿ytkownicy";
			// 
			// AddDiscountButton
			// 
			this->AddDiscountButton->ActiveBorderThickness = 1;
			this->AddDiscountButton->ActiveCornerRadius = 20;
			this->AddDiscountButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->AddDiscountButton->ActiveForecolor = System::Drawing::Color::Black;
			this->AddDiscountButton->ActiveLineColor = System::Drawing::Color::Black;
			this->AddDiscountButton->BackColor = System::Drawing::Color::White;
			this->AddDiscountButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddDiscountButton.BackgroundImage")));
			this->AddDiscountButton->ButtonText = L"PODARUJ";
			this->AddDiscountButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddDiscountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddDiscountButton->ForeColor = System::Drawing::Color::Black;
			this->AddDiscountButton->IdleBorderThickness = 1;
			this->AddDiscountButton->IdleCornerRadius = 20;
			this->AddDiscountButton->IdleFillColor = System::Drawing::Color::White;
			this->AddDiscountButton->IdleForecolor = System::Drawing::Color::Black;
			this->AddDiscountButton->IdleLineColor = System::Drawing::Color::Black;
			this->AddDiscountButton->Location = System::Drawing::Point(11, 190);
			this->AddDiscountButton->Margin = System::Windows::Forms::Padding(5);
			this->AddDiscountButton->Name = L"AddDiscountButton";
			this->AddDiscountButton->Size = System::Drawing::Size(129, 33);
			this->AddDiscountButton->TabIndex = 77;
			this->AddDiscountButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddDiscountButton->Click += gcnew System::EventHandler(this, &AdminForm::AddDiscountButton_Click);
			// 
			// label28
			// 
			this->label28->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(3, 138);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(147, 47);
			this->label28->TabIndex = 76;
			this->label28->Text = L"Podaruj rabat";
			this->label28->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddDiscountTextBox
			// 
			this->AddDiscountTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->AddDiscountTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->AddDiscountTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->AddDiscountTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->AddDiscountTextBox->HintText = L"";
			this->AddDiscountTextBox->isPassword = false;
			this->AddDiscountTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->AddDiscountTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->AddDiscountTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->AddDiscountTextBox->LineThickness = 3;
			this->AddDiscountTextBox->Location = System::Drawing::Point(157, 138);
			this->AddDiscountTextBox->Margin = System::Windows::Forms::Padding(4);
			this->AddDiscountTextBox->Name = L"AddDiscountTextBox";
			this->AddDiscountTextBox->Size = System::Drawing::Size(141, 44);
			this->AddDiscountTextBox->TabIndex = 75;
			this->AddDiscountTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// UserStatsDataGridView
			// 
			this->UserStatsDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->UserStatsDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->UserStatsDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->UserStatsDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->UserStatsDataGridView->Location = System::Drawing::Point(310, 96);
			this->UserStatsDataGridView->Name = L"UserStatsDataGridView";
			this->UserStatsDataGridView->Size = System::Drawing::Size(466, 434);
			this->UserStatsDataGridView->TabIndex = 74;
			// 
			// label27
			// 
			this->label27->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(7, 9);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(1083, 47);
			this->label27->TabIndex = 73;
			this->label27->Text = L"Statystyki u¿ytkownicy";
			this->label27->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// FiltrUserComboBox
			// 
			this->FiltrUserComboBox->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) {
				L"matematyka", L"fizyka",
					L"chemia", L"biologia", L"informatyka"
			});
			this->FiltrUserComboBox->FormattingEnabled = true;
			this->FiltrUserComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Najbardziej aktywni", L"Najmniej aktywni",
					L"Wszyscy"
			});
			this->FiltrUserComboBox->Location = System::Drawing::Point(426, 59);
			this->FiltrUserComboBox->Name = L"FiltrUserComboBox";
			this->FiltrUserComboBox->Size = System::Drawing::Size(232, 21);
			this->FiltrUserComboBox->TabIndex = 72;
			this->FiltrUserComboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::FiltrUserComboBox_SelectedIndexChanged);
			// 
			// tabPage7
			// 
			this->tabPage7->BackColor = System::Drawing::Color::White;
			this->tabPage7->Controls->Add(this->ZwróconeBookFiltrTextBox);
			this->tabPage7->Controls->Add(this->label26);
			this->tabPage7->Controls->Add(this->DataGridViewReturn);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(1093, 637);
			this->tabPage7->TabIndex = 6;
			this->tabPage7->Text = L"Zwroty";
			// 
			// ZwróconeBookFiltrTextBox
			// 
			this->ZwróconeBookFiltrTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->ZwróconeBookFiltrTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->ZwróconeBookFiltrTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ZwróconeBookFiltrTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->ZwróconeBookFiltrTextBox->HintText = L"";
			this->ZwróconeBookFiltrTextBox->isPassword = false;
			this->ZwróconeBookFiltrTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->ZwróconeBookFiltrTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->ZwróconeBookFiltrTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->ZwróconeBookFiltrTextBox->LineThickness = 3;
			this->ZwróconeBookFiltrTextBox->Location = System::Drawing::Point(467, 93);
			this->ZwróconeBookFiltrTextBox->Margin = System::Windows::Forms::Padding(4);
			this->ZwróconeBookFiltrTextBox->Name = L"ZwróconeBookFiltrTextBox";
			this->ZwróconeBookFiltrTextBox->Size = System::Drawing::Size(141, 44);
			this->ZwróconeBookFiltrTextBox->TabIndex = 61;
			this->ZwróconeBookFiltrTextBox->Text = L"Filtr";
			this->ZwróconeBookFiltrTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->ZwróconeBookFiltrTextBox->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::ZwróconeBookFiltrTextBox_OnValueChanged);
			// 
			// label26
			// 
			this->label26->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(221, 42);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(640, 47);
			this->label26->TabIndex = 60;
			this->label26->Text = L"ZWRÓCONE KSI¥¯KI";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DataGridViewReturn
			// 
			this->DataGridViewReturn->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DataGridViewReturn->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridViewReturn->BackgroundColor = System::Drawing::SystemColors::Control;
			this->DataGridViewReturn->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridViewReturn->Location = System::Drawing::Point(221, 149);
			this->DataGridViewReturn->Name = L"DataGridViewReturn";
			this->DataGridViewReturn->Size = System::Drawing::Size(640, 447);
			this->DataGridViewReturn->TabIndex = 39;
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::White;
			this->tabPage5->Controls->Add(this->PobierzRaportKategorie);
			this->tabPage5->Controls->Add(this->StatsFiltrBook);
			this->tabPage5->Controls->Add(this->IloscBookLabel);
			this->tabPage5->Controls->Add(this->KategoriaBookLabel);
			this->tabPage5->Controls->Add(this->label25);
			this->tabPage5->Controls->Add(this->label21);
			this->tabPage5->Controls->Add(this->DataGridViewBookStats);
			this->tabPage5->Controls->Add(this->RefreshButtonBookStats);
			this->tabPage5->Controls->Add(this->label22);
			this->tabPage5->Controls->Add(this->label23);
			this->tabPage5->Controls->Add(this->EndTimePickerBook);
			this->tabPage5->Controls->Add(this->StartTimePickerBook);
			this->tabPage5->Controls->Add(this->label24);
			this->tabPage5->Controls->Add(this->StatystykiBook);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Size = System::Drawing::Size(1093, 637);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statystyki-Ksi¹¿ki";
			// 
			// PobierzRaportKategorie
			// 
			this->PobierzRaportKategorie->ActiveBorderThickness = 1;
			this->PobierzRaportKategorie->ActiveCornerRadius = 20;
			this->PobierzRaportKategorie->ActiveFillColor = System::Drawing::Color::LightGray;
			this->PobierzRaportKategorie->ActiveForecolor = System::Drawing::Color::Black;
			this->PobierzRaportKategorie->ActiveLineColor = System::Drawing::Color::Black;
			this->PobierzRaportKategorie->BackColor = System::Drawing::Color::White;
			this->PobierzRaportKategorie->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PobierzRaportKategorie.BackgroundImage")));
			this->PobierzRaportKategorie->ButtonText = L"PobierzRaport";
			this->PobierzRaportKategorie->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PobierzRaportKategorie->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PobierzRaportKategorie->ForeColor = System::Drawing::Color::Black;
			this->PobierzRaportKategorie->IdleBorderThickness = 1;
			this->PobierzRaportKategorie->IdleCornerRadius = 20;
			this->PobierzRaportKategorie->IdleFillColor = System::Drawing::Color::White;
			this->PobierzRaportKategorie->IdleForecolor = System::Drawing::Color::Black;
			this->PobierzRaportKategorie->IdleLineColor = System::Drawing::Color::Black;
			this->PobierzRaportKategorie->Location = System::Drawing::Point(410, 121);
			this->PobierzRaportKategorie->Margin = System::Windows::Forms::Padding(5);
			this->PobierzRaportKategorie->Name = L"PobierzRaportKategorie";
			this->PobierzRaportKategorie->Size = System::Drawing::Size(129, 33);
			this->PobierzRaportKategorie->TabIndex = 72;
			this->PobierzRaportKategorie->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PobierzRaportKategorie->Click += gcnew System::EventHandler(this, &AdminForm::PobierzRaportKategorie_Click);
			// 
			// StatsFiltrBook
			// 
			this->StatsFiltrBook->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) {
				L"matematyka", L"fizyka",
					L"chemia", L"biologia", L"informatyka"
			});
			this->StatsFiltrBook->FormattingEnabled = true;
			this->StatsFiltrBook->Location = System::Drawing::Point(216, 130);
			this->StatsFiltrBook->Name = L"StatsFiltrBook";
			this->StatsFiltrBook->Size = System::Drawing::Size(171, 21);
			this->StatsFiltrBook->TabIndex = 71;
			this->StatsFiltrBook->Text = L"Filtr";
			// 
			// IloscBookLabel
			// 
			this->IloscBookLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IloscBookLabel->Location = System::Drawing::Point(907, 113);
			this->IloscBookLabel->Name = L"IloscBookLabel";
			this->IloscBookLabel->Size = System::Drawing::Size(148, 38);
			this->IloscBookLabel->TabIndex = 70;
			this->IloscBookLabel->Text = L"0";
			this->IloscBookLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// KategoriaBookLabel
			// 
			this->KategoriaBookLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->KategoriaBookLabel->Location = System::Drawing::Point(891, 75);
			this->KategoriaBookLabel->Name = L"KategoriaBookLabel";
			this->KategoriaBookLabel->Size = System::Drawing::Size(180, 38);
			this->KategoriaBookLabel->TabIndex = 69;
			this->KategoriaBookLabel->Text = L"Kategoria";
			this->KategoriaBookLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(621, 75);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(280, 38);
			this->label25->TabIndex = 68;
			this->label25->Text = L"Kategoria: ";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(621, 113);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(280, 38);
			this->label21->TabIndex = 67;
			this->label21->Text = L"Sprzedana iloœæ ksi¹¿ek: ";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DataGridViewBookStats
			// 
			this->DataGridViewBookStats->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DataGridViewBookStats->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridViewBookStats->BackgroundColor = System::Drawing::SystemColors::Control;
			this->DataGridViewBookStats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridViewBookStats->Location = System::Drawing::Point(24, 166);
			this->DataGridViewBookStats->Name = L"DataGridViewBookStats";
			this->DataGridViewBookStats->Size = System::Drawing::Size(1047, 142);
			this->DataGridViewBookStats->TabIndex = 65;
			// 
			// RefreshButtonBookStats
			// 
			this->RefreshButtonBookStats->ActiveBorderThickness = 1;
			this->RefreshButtonBookStats->ActiveCornerRadius = 20;
			this->RefreshButtonBookStats->ActiveFillColor = System::Drawing::Color::LightGray;
			this->RefreshButtonBookStats->ActiveForecolor = System::Drawing::Color::Black;
			this->RefreshButtonBookStats->ActiveLineColor = System::Drawing::Color::Black;
			this->RefreshButtonBookStats->BackColor = System::Drawing::Color::White;
			this->RefreshButtonBookStats->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RefreshButtonBookStats.BackgroundImage")));
			this->RefreshButtonBookStats->ButtonText = L"ODŒWIE¯";
			this->RefreshButtonBookStats->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RefreshButtonBookStats->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->RefreshButtonBookStats->ForeColor = System::Drawing::Color::Black;
			this->RefreshButtonBookStats->IdleBorderThickness = 1;
			this->RefreshButtonBookStats->IdleCornerRadius = 20;
			this->RefreshButtonBookStats->IdleFillColor = System::Drawing::Color::White;
			this->RefreshButtonBookStats->IdleForecolor = System::Drawing::Color::Black;
			this->RefreshButtonBookStats->IdleLineColor = System::Drawing::Color::Black;
			this->RefreshButtonBookStats->Location = System::Drawing::Point(60, 125);
			this->RefreshButtonBookStats->Margin = System::Windows::Forms::Padding(5);
			this->RefreshButtonBookStats->Name = L"RefreshButtonBookStats";
			this->RefreshButtonBookStats->Size = System::Drawing::Size(129, 33);
			this->RefreshButtonBookStats->TabIndex = 64;
			this->RefreshButtonBookStats->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RefreshButtonBookStats->Click += gcnew System::EventHandler(this, &AdminForm::RefreshButtonBookStats_Click);
			// 
			// label22
			// 
			this->label22->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(266, 43);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(204, 47);
			this->label22->TabIndex = 63;
			this->label22->Text = L"Koniec";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(56, 33);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(204, 47);
			this->label23->TabIndex = 62;
			this->label23->Text = L"Pocz¹tek";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EndTimePickerBook
			// 
			this->EndTimePickerBook->Location = System::Drawing::Point(270, 93);
			this->EndTimePickerBook->Name = L"EndTimePickerBook";
			this->EndTimePickerBook->Size = System::Drawing::Size(200, 20);
			this->EndTimePickerBook->TabIndex = 61;
			// 
			// StartTimePickerBook
			// 
			this->StartTimePickerBook->Location = System::Drawing::Point(51, 93);
			this->StartTimePickerBook->Name = L"StartTimePickerBook";
			this->StartTimePickerBook->Size = System::Drawing::Size(200, 20);
			this->StartTimePickerBook->TabIndex = 60;
			// 
			// label24
			// 
			this->label24->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(-4, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(1059, 47);
			this->label24->TabIndex = 59;
			this->label24->Text = L"Statystyki Ksi¹¿ek";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StatystykiBook
			// 
			chartArea1->Name = L"ChartArea1";
			this->StatystykiBook->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->StatystykiBook->Legends->Add(legend1);
			this->StatystykiBook->Location = System::Drawing::Point(15, 314);
			this->StatystykiBook->Name = L"StatystykiBook";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Kategorie";
			this->StatystykiBook->Series->Add(series1);
			this->StatystykiBook->Size = System::Drawing::Size(1056, 320);
			this->StatystykiBook->TabIndex = 56;
			this->StatystykiBook->Text = L"chart1";
			this->StatystykiBook->Click += gcnew System::EventHandler(this, &AdminForm::StatystykiBook_Click);
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::White;
			this->tabPage4->Controls->Add(this->PobierzRaportButton);
			this->tabPage4->Controls->Add(this->IncomeIloscLabel);
			this->tabPage4->Controls->Add(this->label20);
			this->tabPage4->Controls->Add(this->IncomeMoneyLabel);
			this->tabPage4->Controls->Add(this->label19);
			this->tabPage4->Controls->Add(this->StatystykiPrzychody);
			this->tabPage4->Controls->Add(this->RefreshIncomeMoney);
			this->tabPage4->Controls->Add(this->label18);
			this->tabPage4->Controls->Add(this->label17);
			this->tabPage4->Controls->Add(this->EndTimePicker);
			this->tabPage4->Controls->Add(this->StartTimePicker);
			this->tabPage4->Controls->Add(this->label16);
			this->tabPage4->Controls->Add(this->DataGridViewIncome);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Size = System::Drawing::Size(1093, 637);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Statystyki-Przychody";
			this->tabPage4->Click += gcnew System::EventHandler(this, &AdminForm::tabPage4_Click);
			// 
			// PobierzRaportButton
			// 
			this->PobierzRaportButton->ActiveBorderThickness = 1;
			this->PobierzRaportButton->ActiveCornerRadius = 20;
			this->PobierzRaportButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->PobierzRaportButton->ActiveForecolor = System::Drawing::Color::Black;
			this->PobierzRaportButton->ActiveLineColor = System::Drawing::Color::Black;
			this->PobierzRaportButton->BackColor = System::Drawing::Color::White;
			this->PobierzRaportButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PobierzRaportButton.BackgroundImage")));
			this->PobierzRaportButton->ButtonText = L"PobierzRaport";
			this->PobierzRaportButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->PobierzRaportButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PobierzRaportButton->ForeColor = System::Drawing::Color::Black;
			this->PobierzRaportButton->IdleBorderThickness = 1;
			this->PobierzRaportButton->IdleCornerRadius = 20;
			this->PobierzRaportButton->IdleFillColor = System::Drawing::Color::White;
			this->PobierzRaportButton->IdleForecolor = System::Drawing::Color::Black;
			this->PobierzRaportButton->IdleLineColor = System::Drawing::Color::Black;
			this->PobierzRaportButton->Location = System::Drawing::Point(347, 113);
			this->PobierzRaportButton->Margin = System::Windows::Forms::Padding(5);
			this->PobierzRaportButton->Name = L"PobierzRaportButton";
			this->PobierzRaportButton->Size = System::Drawing::Size(129, 33);
			this->PobierzRaportButton->TabIndex = 61;
			this->PobierzRaportButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->PobierzRaportButton->Click += gcnew System::EventHandler(this, &AdminForm::PobierzRaportButton_Click);
			// 
			// IncomeIloscLabel
			// 
			this->IncomeIloscLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IncomeIloscLabel->Location = System::Drawing::Point(937, 51);
			this->IncomeIloscLabel->Name = L"IncomeIloscLabel";
			this->IncomeIloscLabel->Size = System::Drawing::Size(149, 33);
			this->IncomeIloscLabel->TabIndex = 60;
			this->IncomeIloscLabel->Text = L"0";
			this->IncomeIloscLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label20
			// 
			this->label20->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(670, 51);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(280, 38);
			this->label20->TabIndex = 59;
			this->label20->Text = L"Sprzedana iloœæ ksi¹¿ek: ";
			this->label20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// IncomeMoneyLabel
			// 
			this->IncomeMoneyLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IncomeMoneyLabel->Location = System::Drawing::Point(937, 11);
			this->IncomeMoneyLabel->Name = L"IncomeMoneyLabel";
			this->IncomeMoneyLabel->Size = System::Drawing::Size(149, 33);
			this->IncomeMoneyLabel->TabIndex = 58;
			this->IncomeMoneyLabel->Text = L"0";
			this->IncomeMoneyLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label19
			// 
			this->label19->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(674, 13);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(276, 38);
			this->label19->TabIndex = 57;
			this->label19->Text = L"Podsumowanie obrotu:";
			this->label19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// StatystykiPrzychody
			// 
			chartArea2->Name = L"ChartArea1";
			this->StatystykiPrzychody->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->StatystykiPrzychody->Legends->Add(legend2);
			this->StatystykiPrzychody->Location = System::Drawing::Point(378, 171);
			this->StatystykiPrzychody->Name = L"StatystykiPrzychody";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->Name = L"Przychody";
			this->StatystykiPrzychody->Series->Add(series2);
			this->StatystykiPrzychody->Size = System::Drawing::Size(708, 444);
			this->StatystykiPrzychody->TabIndex = 55;
			this->StatystykiPrzychody->Text = L"chart1";
			this->StatystykiPrzychody->Click += gcnew System::EventHandler(this, &AdminForm::StatystykiPrzychody_Click);
			// 
			// RefreshIncomeMoney
			// 
			this->RefreshIncomeMoney->ActiveBorderThickness = 1;
			this->RefreshIncomeMoney->ActiveCornerRadius = 20;
			this->RefreshIncomeMoney->ActiveFillColor = System::Drawing::Color::LightGray;
			this->RefreshIncomeMoney->ActiveForecolor = System::Drawing::Color::Black;
			this->RefreshIncomeMoney->ActiveLineColor = System::Drawing::Color::Black;
			this->RefreshIncomeMoney->BackColor = System::Drawing::Color::White;
			this->RefreshIncomeMoney->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"RefreshIncomeMoney.BackgroundImage")));
			this->RefreshIncomeMoney->ButtonText = L"ODŒWIE¯";
			this->RefreshIncomeMoney->Cursor = System::Windows::Forms::Cursors::Hand;
			this->RefreshIncomeMoney->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->RefreshIncomeMoney->ForeColor = System::Drawing::Color::Black;
			this->RefreshIncomeMoney->IdleBorderThickness = 1;
			this->RefreshIncomeMoney->IdleCornerRadius = 20;
			this->RefreshIncomeMoney->IdleFillColor = System::Drawing::Color::White;
			this->RefreshIncomeMoney->IdleForecolor = System::Drawing::Color::Black;
			this->RefreshIncomeMoney->IdleLineColor = System::Drawing::Color::Black;
			this->RefreshIncomeMoney->Location = System::Drawing::Point(200, 113);
			this->RefreshIncomeMoney->Margin = System::Windows::Forms::Padding(5);
			this->RefreshIncomeMoney->Name = L"RefreshIncomeMoney";
			this->RefreshIncomeMoney->Size = System::Drawing::Size(129, 33);
			this->RefreshIncomeMoney->TabIndex = 56;
			this->RefreshIncomeMoney->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RefreshIncomeMoney->Click += gcnew System::EventHandler(this, &AdminForm::RefreshIncomeMoney_Click);
			// 
			// label18
			// 
			this->label18->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(272, 35);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(204, 47);
			this->label18->TabIndex = 54;
			this->label18->Text = L"Koniec";
			this->label18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label17
			// 
			this->label17->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(42, 35);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(204, 47);
			this->label17->TabIndex = 53;
			this->label17->Text = L"Pocz¹tek";
			this->label17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EndTimePicker
			// 
			this->EndTimePicker->Location = System::Drawing::Point(276, 85);
			this->EndTimePicker->Name = L"EndTimePicker";
			this->EndTimePicker->Size = System::Drawing::Size(200, 20);
			this->EndTimePicker->TabIndex = 52;
			this->EndTimePicker->ValueChanged += gcnew System::EventHandler(this, &AdminForm::EndTimePicker_ValueChanged);
			// 
			// StartTimePicker
			// 
			this->StartTimePicker->Location = System::Drawing::Point(46, 85);
			this->StartTimePicker->Name = L"StartTimePicker";
			this->StartTimePicker->Size = System::Drawing::Size(200, 20);
			this->StartTimePicker->TabIndex = 51;
			// 
			// label16
			// 
			this->label16->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(27, 4);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(1059, 47);
			this->label16->TabIndex = 50;
			this->label16->Text = L"OBRÓT";
			this->label16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// DataGridViewIncome
			// 
			this->DataGridViewIncome->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DataGridViewIncome->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->DataGridViewIncome->BackgroundColor = System::Drawing::SystemColors::Control;
			this->DataGridViewIncome->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridViewIncome->Location = System::Drawing::Point(15, 171);
			this->DataGridViewIncome->Name = L"DataGridViewIncome";
			this->DataGridViewIncome->Size = System::Drawing::Size(347, 434);
			this->DataGridViewIncome->TabIndex = 40;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::White;
			this->tabPage3->Controls->Add(this->KupioneFiltrTextBox);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->BuyBookDataGridView);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1093, 637);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Kupione";
			// 
			// KupioneFiltrTextBox
			// 
			this->KupioneFiltrTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->KupioneFiltrTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->KupioneFiltrTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->KupioneFiltrTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->KupioneFiltrTextBox->HintText = L"";
			this->KupioneFiltrTextBox->isPassword = false;
			this->KupioneFiltrTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->KupioneFiltrTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->KupioneFiltrTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->KupioneFiltrTextBox->LineThickness = 3;
			this->KupioneFiltrTextBox->Location = System::Drawing::Point(464, 58);
			this->KupioneFiltrTextBox->Margin = System::Windows::Forms::Padding(4);
			this->KupioneFiltrTextBox->Name = L"KupioneFiltrTextBox";
			this->KupioneFiltrTextBox->Size = System::Drawing::Size(141, 44);
			this->KupioneFiltrTextBox->TabIndex = 50;
			this->KupioneFiltrTextBox->Text = L"Filtr";
			this->KupioneFiltrTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->KupioneFiltrTextBox->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::KupioneFiltrTextBox_OnValueChanged);
			// 
			// label13
			// 
			this->label13->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(171, 7);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(737, 47);
			this->label13->TabIndex = 49;
			this->label13->Text = L"ZAKUPIONE KSI¥¯KI";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BuyBookDataGridView
			// 
			this->BuyBookDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BuyBookDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->BuyBookDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->BuyBookDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BuyBookDataGridView->Location = System::Drawing::Point(175, 115);
			this->BuyBookDataGridView->Name = L"BuyBookDataGridView";
			this->BuyBookDataGridView->Size = System::Drawing::Size(733, 504);
			this->BuyBookDataGridView->TabIndex = 39;
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->UserFiltrTextBox);
			this->tabPage2->Controls->Add(this->label11);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->EditUserButton);
			this->tabPage2->Controls->Add(this->DeleteUserButton);
			this->tabPage2->Controls->Add(this->AddUserButton);
			this->tabPage2->Controls->Add(this->PasswordTextBox);
			this->tabPage2->Controls->Add(this->EmailTextBox);
			this->tabPage2->Controls->Add(this->LastNameTextBox);
			this->tabPage2->Controls->Add(this->NameTextBox);
			this->tabPage2->Controls->Add(this->label10);
			this->tabPage2->Controls->Add(this->UserDataGridView);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1093, 637);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"U¿ytkownicy";
			// 
			// UserFiltrTextBox
			// 
			this->UserFiltrTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->UserFiltrTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->UserFiltrTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->UserFiltrTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->UserFiltrTextBox->HintText = L"";
			this->UserFiltrTextBox->isPassword = false;
			this->UserFiltrTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->UserFiltrTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->UserFiltrTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->UserFiltrTextBox->LineThickness = 3;
			this->UserFiltrTextBox->Location = System::Drawing::Point(393, 270);
			this->UserFiltrTextBox->Margin = System::Windows::Forms::Padding(4);
			this->UserFiltrTextBox->Name = L"UserFiltrTextBox";
			this->UserFiltrTextBox->Size = System::Drawing::Size(260, 44);
			this->UserFiltrTextBox->TabIndex = 55;
			this->UserFiltrTextBox->Text = L"NAZWISKO";
			this->UserFiltrTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->UserFiltrTextBox->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::UserFiltrTextBox_OnValueChanged);
			// 
			// label11
			// 
			this->label11->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(762, 13);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(185, 47);
			this->label11->TabIndex = 54;
			this->label11->Text = L"HAS£O";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label11->Click += gcnew System::EventHandler(this, &AdminForm::label11_Click);
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(551, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 47);
			this->label4->TabIndex = 53;
			this->label4->Text = L"E-MAIL";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(318, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(185, 47);
			this->label3->TabIndex = 52;
			this->label3->Text = L"NAZWISKO";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(100, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 47);
			this->label2->TabIndex = 51;
			this->label2->Text = L"IMIÊ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// EditUserButton
			// 
			this->EditUserButton->ActiveBorderThickness = 1;
			this->EditUserButton->ActiveCornerRadius = 20;
			this->EditUserButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->EditUserButton->ActiveForecolor = System::Drawing::Color::Black;
			this->EditUserButton->ActiveLineColor = System::Drawing::Color::Black;
			this->EditUserButton->BackColor = System::Drawing::Color::White;
			this->EditUserButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditUserButton.BackgroundImage")));
			this->EditUserButton->ButtonText = L"Edytuj";
			this->EditUserButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditUserButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditUserButton->ForeColor = System::Drawing::Color::Black;
			this->EditUserButton->IdleBorderThickness = 1;
			this->EditUserButton->IdleCornerRadius = 20;
			this->EditUserButton->IdleFillColor = System::Drawing::Color::White;
			this->EditUserButton->IdleForecolor = System::Drawing::Color::Black;
			this->EditUserButton->IdleLineColor = System::Drawing::Color::Black;
			this->EditUserButton->Location = System::Drawing::Point(415, 161);
			this->EditUserButton->Margin = System::Windows::Forms::Padding(5);
			this->EditUserButton->Name = L"EditUserButton";
			this->EditUserButton->Size = System::Drawing::Size(181, 40);
			this->EditUserButton->TabIndex = 50;
			this->EditUserButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->EditUserButton->Click += gcnew System::EventHandler(this, &AdminForm::EditUserButton_Click);
			// 
			// DeleteUserButton
			// 
			this->DeleteUserButton->ActiveBorderThickness = 1;
			this->DeleteUserButton->ActiveCornerRadius = 20;
			this->DeleteUserButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->DeleteUserButton->ActiveForecolor = System::Drawing::Color::Black;
			this->DeleteUserButton->ActiveLineColor = System::Drawing::Color::Black;
			this->DeleteUserButton->BackColor = System::Drawing::Color::White;
			this->DeleteUserButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeleteUserButton.BackgroundImage")));
			this->DeleteUserButton->ButtonText = L"Usuñ";
			this->DeleteUserButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteUserButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteUserButton->ForeColor = System::Drawing::Color::Black;
			this->DeleteUserButton->IdleBorderThickness = 1;
			this->DeleteUserButton->IdleCornerRadius = 20;
			this->DeleteUserButton->IdleFillColor = System::Drawing::Color::White;
			this->DeleteUserButton->IdleForecolor = System::Drawing::Color::Black;
			this->DeleteUserButton->IdleLineColor = System::Drawing::Color::Black;
			this->DeleteUserButton->Location = System::Drawing::Point(673, 161);
			this->DeleteUserButton->Margin = System::Windows::Forms::Padding(5);
			this->DeleteUserButton->Name = L"DeleteUserButton";
			this->DeleteUserButton->Size = System::Drawing::Size(181, 40);
			this->DeleteUserButton->TabIndex = 48;
			this->DeleteUserButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->DeleteUserButton->Click += gcnew System::EventHandler(this, &AdminForm::DeleteUserButton_Click);
			// 
			// AddUserButton
			// 
			this->AddUserButton->ActiveBorderThickness = 1;
			this->AddUserButton->ActiveCornerRadius = 20;
			this->AddUserButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->AddUserButton->ActiveForecolor = System::Drawing::Color::Black;
			this->AddUserButton->ActiveLineColor = System::Drawing::Color::Black;
			this->AddUserButton->BackColor = System::Drawing::Color::White;
			this->AddUserButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddUserButton.BackgroundImage")));
			this->AddUserButton->ButtonText = L"Dodaj";
			this->AddUserButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddUserButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddUserButton->ForeColor = System::Drawing::Color::Black;
			this->AddUserButton->IdleBorderThickness = 1;
			this->AddUserButton->IdleCornerRadius = 20;
			this->AddUserButton->IdleFillColor = System::Drawing::Color::White;
			this->AddUserButton->IdleForecolor = System::Drawing::Color::Black;
			this->AddUserButton->IdleLineColor = System::Drawing::Color::Black;
			this->AddUserButton->Location = System::Drawing::Point(138, 161);
			this->AddUserButton->Margin = System::Windows::Forms::Padding(5);
			this->AddUserButton->Name = L"AddUserButton";
			this->AddUserButton->Size = System::Drawing::Size(172, 40);
			this->AddUserButton->TabIndex = 47;
			this->AddUserButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddUserButton->Click += gcnew System::EventHandler(this, &AdminForm::AddUserButton_Click);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->PasswordTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PasswordTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->PasswordTextBox->HintText = L"";
			this->PasswordTextBox->isPassword = false;
			this->PasswordTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->PasswordTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->PasswordTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->PasswordTextBox->LineThickness = 3;
			this->PasswordTextBox->Location = System::Drawing::Point(766, 81);
			this->PasswordTextBox->Margin = System::Windows::Forms::Padding(4);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(181, 44);
			this->PasswordTextBox->TabIndex = 46;
			this->PasswordTextBox->Text = L"HAS£O";
			this->PasswordTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// EmailTextBox
			// 
			this->EmailTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->EmailTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->EmailTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->EmailTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->EmailTextBox->HintText = L"";
			this->EmailTextBox->isPassword = false;
			this->EmailTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->EmailTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->EmailTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->EmailTextBox->LineThickness = 3;
			this->EmailTextBox->Location = System::Drawing::Point(551, 81);
			this->EmailTextBox->Margin = System::Windows::Forms::Padding(4);
			this->EmailTextBox->Name = L"EmailTextBox";
			this->EmailTextBox->Size = System::Drawing::Size(181, 44);
			this->EmailTextBox->TabIndex = 45;
			this->EmailTextBox->Text = L"E-MAIL";
			this->EmailTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// LastNameTextBox
			// 
			this->LastNameTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->LastNameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->LastNameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->LastNameTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->LastNameTextBox->HintText = L"";
			this->LastNameTextBox->isPassword = false;
			this->LastNameTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->LastNameTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->LastNameTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->LastNameTextBox->LineThickness = 3;
			this->LastNameTextBox->Location = System::Drawing::Point(322, 81);
			this->LastNameTextBox->Margin = System::Windows::Forms::Padding(4);
			this->LastNameTextBox->Name = L"LastNameTextBox";
			this->LastNameTextBox->Size = System::Drawing::Size(181, 44);
			this->LastNameTextBox->TabIndex = 44;
			this->LastNameTextBox->Text = L"NAZWISKO";
			this->LastNameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// NameTextBox
			// 
			this->NameTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->NameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->NameTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->NameTextBox->HintText = L"";
			this->NameTextBox->isPassword = false;
			this->NameTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->NameTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->NameTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->NameTextBox->LineThickness = 3;
			this->NameTextBox->Location = System::Drawing::Point(104, 81);
			this->NameTextBox->Margin = System::Windows::Forms::Padding(4);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(172, 44);
			this->NameTextBox->TabIndex = 43;
			this->NameTextBox->Text = L"IMIÊ";
			this->NameTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// label10
			// 
			this->label10->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(104, 219);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(843, 47);
			this->label10->TabIndex = 40;
			this->label10->Text = L"LISTA U¯YTKOWNIKÓW";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// UserDataGridView
			// 
			this->UserDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->UserDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->UserDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->UserDataGridView->Location = System::Drawing::Point(117, 327);
			this->UserDataGridView->Name = L"UserDataGridView";
			this->UserDataGridView->Size = System::Drawing::Size(843, 294);
			this->UserDataGridView->TabIndex = 39;
			this->UserDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::UserDataGridView_CellContentClick);
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->label12);
			this->tabPage1->Controls->Add(this->PriceTextBox);
			this->tabPage1->Controls->Add(this->FiltrTextBox);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->AddCategoryTextBox);
			this->tabPage1->Controls->Add(this->AddCategoryButton);
			this->tabPage1->Controls->Add(this->RefreshButton);
			this->tabPage1->Controls->Add(this->CategoryTextBox2);
			this->tabPage1->Controls->Add(this->CategoryTextBox);
			this->tabPage1->Controls->Add(this->IloscTextBox);
			this->tabPage1->Controls->Add(this->TitleTextBox);
			this->tabPage1->Controls->Add(this->AutorTextBox);
			this->tabPage1->Controls->Add(this->label9);
			this->tabPage1->Controls->Add(this->BookDataGridView);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Controls->Add(this->ResetButton);
			this->tabPage1->Controls->Add(this->DeleteButton);
			this->tabPage1->Controls->Add(this->EditButton);
			this->tabPage1->Controls->Add(this->SaveButton);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1093, 637);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Ksi¹¿ki";
			this->tabPage1->Click += gcnew System::EventHandler(this, &AdminForm::tabPage1_Click);
			// 
			// label12
			// 
			this->label12->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(497, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(133, 47);
			this->label12->TabIndex = 51;
			this->label12->Text = L"CENA";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PriceTextBox
			// 
			this->PriceTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->PriceTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->PriceTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->PriceTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->PriceTextBox->HintText = L"";
			this->PriceTextBox->isPassword = false;
			this->PriceTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->PriceTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->PriceTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->PriceTextBox->LineThickness = 3;
			this->PriceTextBox->Location = System::Drawing::Point(511, 96);
			this->PriceTextBox->Margin = System::Windows::Forms::Padding(4);
			this->PriceTextBox->Name = L"PriceTextBox";
			this->PriceTextBox->Size = System::Drawing::Size(129, 44);
			this->PriceTextBox->TabIndex = 50;
			this->PriceTextBox->Text = L"1";
			this->PriceTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// FiltrTextBox
			// 
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
			this->FiltrTextBox->Location = System::Drawing::Point(328, 252);
			this->FiltrTextBox->Margin = System::Windows::Forms::Padding(4);
			this->FiltrTextBox->Name = L"FiltrTextBox";
			this->FiltrTextBox->Size = System::Drawing::Size(141, 44);
			this->FiltrTextBox->TabIndex = 49;
			this->FiltrTextBox->Text = L"Filtr";
			this->FiltrTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->FiltrTextBox->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::FilrtTextBox_OnValueChanged);
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(830, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(218, 47);
			this->label1->TabIndex = 48;
			this->label1->Text = L"DODAJ KATEGORIE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AddCategoryTextBox
			// 
			this->AddCategoryTextBox->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->AddCategoryTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F));
			this->AddCategoryTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->AddCategoryTextBox->HintForeColor = System::Drawing::Color::Empty;
			this->AddCategoryTextBox->HintText = L"";
			this->AddCategoryTextBox->isPassword = false;
			this->AddCategoryTextBox->LineFocusedColor = System::Drawing::Color::Blue;
			this->AddCategoryTextBox->LineIdleColor = System::Drawing::Color::Gray;
			this->AddCategoryTextBox->LineMouseHoverColor = System::Drawing::Color::Blue;
			this->AddCategoryTextBox->LineThickness = 3;
			this->AddCategoryTextBox->Location = System::Drawing::Point(857, 96);
			this->AddCategoryTextBox->Margin = System::Windows::Forms::Padding(4);
			this->AddCategoryTextBox->Name = L"AddCategoryTextBox";
			this->AddCategoryTextBox->Size = System::Drawing::Size(133, 40);
			this->AddCategoryTextBox->TabIndex = 47;
			this->AddCategoryTextBox->Text = L"Kategoria";
			this->AddCategoryTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// AddCategoryButton
			// 
			this->AddCategoryButton->ActiveBorderThickness = 1;
			this->AddCategoryButton->ActiveCornerRadius = 20;
			this->AddCategoryButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->AddCategoryButton->ActiveForecolor = System::Drawing::Color::Black;
			this->AddCategoryButton->ActiveLineColor = System::Drawing::Color::Black;
			this->AddCategoryButton->BackColor = System::Drawing::Color::White;
			this->AddCategoryButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"AddCategoryButton.BackgroundImage")));
			this->AddCategoryButton->ButtonText = L"DodajKategorie";
			this->AddCategoryButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AddCategoryButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddCategoryButton->ForeColor = System::Drawing::Color::Black;
			this->AddCategoryButton->IdleBorderThickness = 1;
			this->AddCategoryButton->IdleCornerRadius = 20;
			this->AddCategoryButton->IdleFillColor = System::Drawing::Color::White;
			this->AddCategoryButton->IdleForecolor = System::Drawing::Color::Black;
			this->AddCategoryButton->IdleLineColor = System::Drawing::Color::Black;
			this->AddCategoryButton->Location = System::Drawing::Point(675, 149);
			this->AddCategoryButton->Margin = System::Windows::Forms::Padding(5);
			this->AddCategoryButton->Name = L"AddCategoryButton";
			this->AddCategoryButton->Size = System::Drawing::Size(133, 40);
			this->AddCategoryButton->TabIndex = 46;
			this->AddCategoryButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->AddCategoryButton->Click += gcnew System::EventHandler(this, &AdminForm::AddCategoryButton_Click);
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
			this->RefreshButton->Location = System::Drawing::Point(713, 263);
			this->RefreshButton->Margin = System::Windows::Forms::Padding(5);
			this->RefreshButton->Name = L"RefreshButton";
			this->RefreshButton->Size = System::Drawing::Size(129, 33);
			this->RefreshButton->TabIndex = 45;
			this->RefreshButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->RefreshButton->Click += gcnew System::EventHandler(this, &AdminForm::RefreshButton_Click);
			// 
			// CategoryTextBox2
			// 
			this->CategoryTextBox2->AutoCompleteCustomSource->AddRange(gcnew cli::array< System::String^  >(5) {
				L"matematyka", L"fizyka",
					L"chemia", L"biologia", L"informatyka"
			});
			this->CategoryTextBox2->FormattingEnabled = true;
			this->CategoryTextBox2->Location = System::Drawing::Point(511, 275);
			this->CategoryTextBox2->Name = L"CategoryTextBox2";
			this->CategoryTextBox2->Size = System::Drawing::Size(171, 21);
			this->CategoryTextBox2->TabIndex = 44;
			this->CategoryTextBox2->Text = L"Filtr";
			this->CategoryTextBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &AdminForm::CategoryTextBox2_SelectedIndexChanged);
			// 
			// CategoryTextBox
			// 
			this->CategoryTextBox->FormattingEnabled = true;
			this->CategoryTextBox->Location = System::Drawing::Point(677, 115);
			this->CategoryTextBox->Name = L"CategoryTextBox";
			this->CategoryTextBox->Size = System::Drawing::Size(132, 21);
			this->CategoryTextBox->TabIndex = 43;
			this->CategoryTextBox->Text = L"Kategorie";
			// 
			// IloscTextBox
			// 
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
			this->IloscTextBox->Location = System::Drawing::Point(362, 96);
			this->IloscTextBox->Margin = System::Windows::Forms::Padding(4);
			this->IloscTextBox->Name = L"IloscTextBox";
			this->IloscTextBox->Size = System::Drawing::Size(129, 44);
			this->IloscTextBox->TabIndex = 42;
			this->IloscTextBox->Text = L"50";
			this->IloscTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// TitleTextBox
			// 
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
			this->TitleTextBox->Location = System::Drawing::Point(44, 96);
			this->TitleTextBox->Margin = System::Windows::Forms::Padding(4);
			this->TitleTextBox->Name = L"TitleTextBox";
			this->TitleTextBox->Size = System::Drawing::Size(107, 44);
			this->TitleTextBox->TabIndex = 41;
			this->TitleTextBox->Text = L"Tytu³";
			this->TitleTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			// 
			// AutorTextBox
			// 
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
			this->AutorTextBox->Location = System::Drawing::Point(193, 96);
			this->AutorTextBox->Margin = System::Windows::Forms::Padding(4);
			this->AutorTextBox->Name = L"AutorTextBox";
			this->AutorTextBox->Size = System::Drawing::Size(133, 44);
			this->AutorTextBox->TabIndex = 40;
			this->AutorTextBox->Text = L"Autor";
			this->AutorTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->AutorTextBox->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::AutorTextBox_OnValueChanged);
			// 
			// label9
			// 
			this->label9->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(20, 193);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(995, 47);
			this->label9->TabIndex = 39;
			this->label9->Text = L"LISTA KSI¥¯EK";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// BookDataGridView
			// 
			this->BookDataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BookDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->BookDataGridView->BackgroundColor = System::Drawing::SystemColors::Control;
			this->BookDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->BookDataGridView->Location = System::Drawing::Point(76, 316);
			this->BookDataGridView->Name = L"BookDataGridView";
			this->BookDataGridView->Size = System::Drawing::Size(899, 315);
			this->BookDataGridView->TabIndex = 38;
			this->BookDataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::BookDataGridView_CellContentClick);
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(664, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 47);
			this->label5->TabIndex = 37;
			this->label5->Text = L"KATEGORIE";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(358, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(133, 47);
			this->label6->TabIndex = 36;
			this->label6->Text = L"ILOSC";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label7
			// 
			this->label7->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(40, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 47);
			this->label7->TabIndex = 35;
			this->label7->Text = L"TYTUL";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label8
			// 
			this->label8->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(189, 45);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(133, 47);
			this->label8->TabIndex = 34;
			this->label8->Text = L"AUTOR";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->ResetButton->Location = System::Drawing::Point(511, 149);
			this->ResetButton->Margin = System::Windows::Forms::Padding(5);
			this->ResetButton->Name = L"ResetButton";
			this->ResetButton->Size = System::Drawing::Size(133, 40);
			this->ResetButton->TabIndex = 33;
			this->ResetButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ResetButton->Click += gcnew System::EventHandler(this, &AdminForm::ResetButton_Click);
			// 
			// DeleteButton
			// 
			this->DeleteButton->ActiveBorderThickness = 1;
			this->DeleteButton->ActiveCornerRadius = 20;
			this->DeleteButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->DeleteButton->ActiveForecolor = System::Drawing::Color::Black;
			this->DeleteButton->ActiveLineColor = System::Drawing::Color::Black;
			this->DeleteButton->BackColor = System::Drawing::Color::White;
			this->DeleteButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"DeleteButton.BackgroundImage")));
			this->DeleteButton->ButtonText = L"USUÑ";
			this->DeleteButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DeleteButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeleteButton->ForeColor = System::Drawing::Color::Black;
			this->DeleteButton->IdleBorderThickness = 1;
			this->DeleteButton->IdleCornerRadius = 20;
			this->DeleteButton->IdleFillColor = System::Drawing::Color::White;
			this->DeleteButton->IdleForecolor = System::Drawing::Color::Black;
			this->DeleteButton->IdleLineColor = System::Drawing::Color::Black;
			this->DeleteButton->Location = System::Drawing::Point(193, 148);
			this->DeleteButton->Margin = System::Windows::Forms::Padding(5);
			this->DeleteButton->Name = L"DeleteButton";
			this->DeleteButton->Size = System::Drawing::Size(129, 40);
			this->DeleteButton->TabIndex = 32;
			this->DeleteButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->DeleteButton->Click += gcnew System::EventHandler(this, &AdminForm::DeleteButton_Click);
			// 
			// EditButton
			// 
			this->EditButton->ActiveBorderThickness = 1;
			this->EditButton->ActiveCornerRadius = 20;
			this->EditButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->EditButton->ActiveForecolor = System::Drawing::Color::Black;
			this->EditButton->ActiveLineColor = System::Drawing::Color::Black;
			this->EditButton->BackColor = System::Drawing::Color::White;
			this->EditButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EditButton.BackgroundImage")));
			this->EditButton->ButtonText = L"Edytuj";
			this->EditButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->EditButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditButton->ForeColor = System::Drawing::Color::Black;
			this->EditButton->IdleBorderThickness = 1;
			this->EditButton->IdleCornerRadius = 20;
			this->EditButton->IdleFillColor = System::Drawing::Color::White;
			this->EditButton->IdleForecolor = System::Drawing::Color::Black;
			this->EditButton->IdleLineColor = System::Drawing::Color::Black;
			this->EditButton->Location = System::Drawing::Point(362, 148);
			this->EditButton->Margin = System::Windows::Forms::Padding(5);
			this->EditButton->Name = L"EditButton";
			this->EditButton->Size = System::Drawing::Size(129, 40);
			this->EditButton->TabIndex = 31;
			this->EditButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->EditButton->Click += gcnew System::EventHandler(this, &AdminForm::EditButton_Click);
			// 
			// SaveButton
			// 
			this->SaveButton->ActiveBorderThickness = 1;
			this->SaveButton->ActiveCornerRadius = 20;
			this->SaveButton->ActiveFillColor = System::Drawing::Color::LightGray;
			this->SaveButton->ActiveForecolor = System::Drawing::Color::Black;
			this->SaveButton->ActiveLineColor = System::Drawing::Color::Black;
			this->SaveButton->BackColor = System::Drawing::Color::White;
			this->SaveButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SaveButton.BackgroundImage")));
			this->SaveButton->ButtonText = L"ZAPISZ";
			this->SaveButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SaveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SaveButton->ForeColor = System::Drawing::Color::Black;
			this->SaveButton->IdleBorderThickness = 1;
			this->SaveButton->IdleCornerRadius = 20;
			this->SaveButton->IdleFillColor = System::Drawing::Color::White;
			this->SaveButton->IdleForecolor = System::Drawing::Color::Black;
			this->SaveButton->IdleLineColor = System::Drawing::Color::Black;
			this->SaveButton->Location = System::Drawing::Point(44, 149);
			this->SaveButton->Margin = System::Windows::Forms::Padding(5);
			this->SaveButton->Name = L"SaveButton";
			this->SaveButton->Size = System::Drawing::Size(107, 40);
			this->SaveButton->TabIndex = 30;
			this->SaveButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->SaveButton->Click += gcnew System::EventHandler(this, &AdminForm::SaveButton_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Controls->Add(this->tabPage4);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->Location = System::Drawing::Point(162, 6);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1101, 663);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage6
			// 
			this->tabPage6->Controls->Add(this->RecenzjePanel);
			this->tabPage6->Controls->Add(this->ŒredniaLabel);
			this->tabPage6->Controls->Add(this->label29);
			this->tabPage6->Controls->Add(this->RecenzjeTextBox);
			this->tabPage6->Controls->Add(this->RecenzjeDataGridView);
			this->tabPage6->Controls->Add(this->label30);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(1093, 637);
			this->tabPage6->TabIndex = 8;
			this->tabPage6->Text = L"Recenzje Ksi¹¿ek";
			this->tabPage6->UseVisualStyleBackColor = true;
			// 
			// RecenzjePanel
			// 
			this->RecenzjePanel->AutoScroll = true;
			this->RecenzjePanel->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->RecenzjePanel->Location = System::Drawing::Point(96, 286);
			this->RecenzjePanel->Name = L"RecenzjePanel";
			this->RecenzjePanel->Size = System::Drawing::Size(912, 333);
			this->RecenzjePanel->TabIndex = 87;
			this->RecenzjePanel->WrapContents = false;
			// 
			// ŒredniaLabel
			// 
			this->ŒredniaLabel->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ŒredniaLabel->Location = System::Drawing::Point(386, 249);
			this->ŒredniaLabel->Name = L"ŒredniaLabel";
			this->ŒredniaLabel->Size = System::Drawing::Size(357, 34);
			this->ŒredniaLabel->TabIndex = 86;
			this->ŒredniaLabel->Text = L"Œrednia ocen: ";
			this->ŒredniaLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label29
			// 
			this->label29->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(92, 249);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(377, 34);
			this->label29->TabIndex = 85;
			this->label29->Text = L"Recenzje ksi¹¿ki ";
			this->label29->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			this->RecenzjeTextBox->Location = System::Drawing::Point(424, 56);
			this->RecenzjeTextBox->Margin = System::Windows::Forms::Padding(4);
			this->RecenzjeTextBox->Name = L"RecenzjeTextBox";
			this->RecenzjeTextBox->Size = System::Drawing::Size(206, 44);
			this->RecenzjeTextBox->TabIndex = 84;
			this->RecenzjeTextBox->Text = L"Autor";
			this->RecenzjeTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Left;
			this->RecenzjeTextBox->OnValueChanged += gcnew System::EventHandler(this, &AdminForm::RecenzjeTextBox_OnValueChanged);
			// 
			// RecenzjeDataGridView
			// 
			this->RecenzjeDataGridView->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->RecenzjeDataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->RecenzjeDataGridView->Location = System::Drawing::Point(85, 107);
			this->RecenzjeDataGridView->Name = L"RecenzjeDataGridView";
			this->RecenzjeDataGridView->Size = System::Drawing::Size(923, 139);
			this->RecenzjeDataGridView->TabIndex = 83;
			// 
			// label30
			// 
			this->label30->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(344, 18);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(381, 34);
			this->label30->TabIndex = 82;
			this->label30->Text = L"LISTA KSI¥¯EK";
			this->label30->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tabPage9
			// 
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(1093, 637);
			this->tabPage9->TabIndex = 9;
			this->tabPage9->Text = L"tabPage9";
			this->tabPage9->UseVisualStyleBackColor = true;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->panel2);
			this->MaximumSize = System::Drawing::Size(1280, 720);
			this->MinimumSize = System::Drawing::Size(1280, 720);
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &AdminForm::Form);
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->panel2->ResumeLayout(false);
			this->tabPage8->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserStatsDataGridView))->EndInit();
			this->tabPage7->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewReturn))->EndInit();
			this->tabPage5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewBookStats))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatystykiBook))->EndInit();
			this->tabPage4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->StatystykiPrzychody))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridViewIncome))->EndInit();
			this->tabPage3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BuyBookDataGridView))->EndInit();
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->UserDataGridView))->EndInit();
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->BookDataGridView))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RecenzjeDataGridView))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


void RefreshReturn()				// Funckja od zwróconych ksi¹¿ek
{  
			try {
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				DateTime purchaseDateTime = DateTime::Now;

				
				String^ sqlQuery = "SELECT * FROM [Return];";
				SqlCommand command(sqlQuery, % sqlConn);


				SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
				DataSet^ dataSet = gcnew DataSet();
				dataAdapter->Fill(dataSet, "Return");

				DataGridViewReturn->DataSource = dataSet->Tables["Return"];
			}
			catch (Exception^ ex) {
				MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}



private: void UpdateBookChart(DataTable^ bookDataTable, String^ selectedCategory, DateTime startDate, DateTime endDate)	 // Funckja od aktualizowania wykresu ksi¹¿ek w aplikacj (iloœæ sprzedanych kategorii)
{
	StatystykiBook->Series["Kategorie"]->Points->Clear();	

	auto dateGroups = gcnew System::Collections::Generic::Dictionary<DateTime, int>();		// grupowanie wed³ug daty
	for each (DataRow ^ row in bookDataTable->Rows)
		{
			DateTime date = Convert::ToDateTime(row["Data"]).Date;  // Pobiera date i ilosc
			int quantity = Convert::ToInt32(row["ilosc"]);

			if (dateGroups->ContainsKey(date)) // sprawdza czy zawiera klucz z dat¹
				{
					dateGroups[date] += quantity;		// Dodajemy ilosc do danej daty jak ju¿ istnieje
				}
			else
				{
					dateGroups[date] = quantity;	// Jeœli jest to pierwsza sprzeda¿ w danym dniu, zaczynamy liczyæ od tej sprzeda¿y
				}
			}

			for each (System::Collections::Generic::KeyValuePair<DateTime, int> pair in dateGroups)
			{
				StatystykiBook->Series["Kategorie"]->Points->AddXY(pair.Key, pair.Value);
			}

			StatystykiBook->ChartAreas["ChartArea1"]->AxisX->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Days;
			StatystykiBook->ChartAreas["ChartArea1"]->AxisX->Interval = 1;
			StatystykiBook->ChartAreas["ChartArea1"]->AxisX->LabelStyle->Format = "dd.MM.yyyy";
}




		private: void RefreshBookStats(String^ selectedCategory, DateTime startDate, DateTime endDate)	// Funckja  odœwie¿a statystyki sprzeda¿y ksi¹¿ek w aplikacji na podstawie wybranej kategorii i okreœlonego zakresu dat
		{
			try
			{
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				String^ sqlQuery = "SELECT * FROM Purchases WHERE kategoria = @selectedCategory AND Data BETWEEN @startDate AND @endDate ORDER BY Data;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@selectedCategory", selectedCategory);
				command.Parameters->AddWithValue("@startDate", startDate);
				command.Parameters->AddWithValue("@endDate", endDate);

				SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
				DataSet^ dataSet = gcnew DataSet();
				dataAdapter->Fill(dataSet, "Purchases");

				DataGridViewBookStats->DataSource = dataSet->Tables["Purchases"];

				UpdateBookChart(dataSet->Tables["Purchases"], selectedCategory, startDate, endDate);

				int totalBooksSold = 0;
				for each (DataRow ^ row in dataSet->Tables["Purchases"]->Rows)
				{
					totalBooksSold += Convert::ToInt32(row["ilosc"]);				// Liczenie iloœci
				}
				IloscBookLabel->Text = "" + totalBooksSold;

				
				IloscBookLabel->Text = ""+totalBooksSold;
				IloscBookLabel->Refresh(); 


				sqlConn.Close();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show("B³¹d: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}










		private: void UpdateChartIncome(DataTable^ incomeDataTable)   // Odœwie¿enie wykresu obrotu na podstawie przedzia³u jaki wybra³ administrator
		{
			// Czyœæ dane na wykresie
			StatystykiPrzychody->Series["Przychody"]->Points->Clear();

			// Ustawienie  na osi X jako DateTime
			StatystykiPrzychody->Series["Przychody"]->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::DateTime;

			// Przechodzi przez dane DataTable, grupuje po dacie i dodaje sume pieniedzy
			auto groups = gcnew System::Collections::Generic::Dictionary<DateTime, double>();
			for each (DataRow ^ row in incomeDataTable->Rows)
			{
				DateTime date = Convert::ToDateTime(row["date"]).Date; //	Pobiera money i date
				double money = Convert::ToDouble(row["money"]);

				if (groups->ContainsKey(date))
				{
					groups[date] += money;		// Jezeli dla danej daty istnieje to dodaje money
				}
				else
				{
					groups[date] = money;		// Jezeli pierwszy to przypisuje pierwsza ilosc kasy
				}
			}

			// Dodaj zgrupowane dane do wykresu
			for each (System::Collections::Generic::KeyValuePair<DateTime, double> pair in groups)
			{
				StatystykiPrzychody->Series["Przychody"]->Points->AddXY(pair.Key, pair.Value);
			}

			// Ustawienie  osi X
			StatystykiPrzychody->ChartAreas["ChartArea1"]->AxisX->IntervalType = System::Windows::Forms::DataVisualization::Charting::DateTimeIntervalType::Days;
			StatystykiPrzychody->ChartAreas["ChartArea1"]->AxisX->Interval = 1; // Ustawienie 1 dzieñ 
			StatystykiPrzychody->ChartAreas["ChartArea1"]->AxisX->LabelStyle->Format = "dd.MM"; // Skrócony format daty

			// W³¹czenie przewijania i zoomu dla osi X
			StatystykiPrzychody->ChartAreas["ChartArea1"]->AxisX->ScaleView->Zoomable = true;
			StatystykiPrzychody->ChartAreas["ChartArea1"]->CursorX->AutoScroll = true;

			
		}








		private: void RefreshIncome()  // Odœwie¿anie DataGridViewIncome  przychodów w zale¿noœci od wybranej daty
		{
			try
			{
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				// Zakres dat
				DateTime startDate = StartTimePicker->Value;
				DateTime endDate = EndTimePicker->Value;

				// Zapytanie z dodanym warunkiem daty
				String^ sqlQuery = "SELECT * FROM Income WHERE date BETWEEN @startDate AND @endDate;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@startDate", startDate);
				command.Parameters->AddWithValue("@endDate", endDate);

				SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
				DataSet^ dataSet = gcnew DataSet();

				dataAdapter->Fill(dataSet, "Income");

				DataGridViewIncome->DataSource = dataSet->Tables["Income"];

				// Aktualizacja wykresu
				UpdateChartIncome(dataSet->Tables["Income"]);

				// Obliczanie sumy wartoœci money
				double totalIncome = 0;
				int totalBooksSold = 0;				// zmienna do przechowywania sumy iloœci sprzedanych ksi¹¿ek
				for each (DataRow ^ row in dataSet->Tables["Income"]->Rows)
				{
					totalIncome += Convert::ToDouble(row["money"]);
					totalBooksSold += Convert::ToInt32(row["ilosc"]);	
				}

				
				IncomeMoneyLabel->Text = totalIncome.ToString("C");
				IncomeIloscLabel->Text = totalBooksSold.ToString();

				sqlConn.Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}






		private: void RefreshBuyBook() // Funkcja od odœwie¿ania DataGridView (kupionych ksi¹¿ek)
		{

			try
			{
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();


				String^ sqlQuery = "SELECT * FROM Purchases;";


				SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sqlQuery, % sqlConn);
				DataSet^ dataSet = gcnew DataSet();


				dataAdapter->Fill(dataSet, "Purchases");



				BuyBookDataGridView->DataSource = dataSet->Tables["Purchases"];
				sqlConn.Close();
			}
			catch (Exception^ ex) {
				MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}


		}



		private: void RefreshUser() // Funkcja od odœwie¿ania DataGridView (u¿ytkowników)
		{	
			
				try 
				{
					String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
					SqlConnection sqlConn(connString);
					sqlConn.Open();

					
					String^ sqlQuery = "SELECT Id, name, lastname, email, password, opis, money  FROM users;";

					
					SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sqlQuery, % sqlConn);
					DataSet^ dataSet = gcnew DataSet();

					
					dataAdapter->Fill(dataSet, "users");

					

					UserDataGridView->DataSource = dataSet->Tables["users"];
					sqlConn.Close();
				}
				catch (Exception^ ex) {
					MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
			

		}


	private: void RefreshBook()			// Funkcja od odœwie¿ania DataGridView (Ksi¹¿ek)
{

		 try
		  {
			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();	  
			 String^ sqlQuery = "SELECT Id, Tytu³, Autor, Ilosc, Kategoria, Cena FROM Book;";

					
			  SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sqlQuery, % sqlConn);
			DataSet^ dataSet = gcnew DataSet();

			 // Przypisanie danych
				 dataAdapter->Fill(dataSet, "Book");

					
				 BookDataGridView->DataSource = dataSet->Tables["Book"];
				sqlConn.Close();
		 }
		catch (Exception^ ex) {
		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}


 }

	private: void Filtr() 
	{
			try {
			
				String^ selectedCategory = CategoryTextBox2->Text;

				
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				
				String^ sqlQuery = "SELECT Tytu³, Autor, Ilosc, Kategoria, Cena FROM Book WHERE Kategoria = @selectedCategory;";

				// Tworzenie adaptera danych i zestawu danych
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


	private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {

		try {

			// Przy uruchomieniu AdminForma przypisywane do ComboBox wszystkie kategorie z bazy danych

			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			
			SqlCommand selectCommand("SELECT kategoria FROM Kategoria;", % sqlConn);
			SqlDataReader^ reader = selectCommand.ExecuteReader();

			while (reader->Read()) {
				CategoryTextBox->Items->Add(reader["kategoria"]->ToString());
				CategoryTextBox2->Items->Add(reader["kategoria"]->ToString());
				StatsFiltrBook->Items->Add(reader["kategoria"]->ToString());
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("B³¹d w ³¹czeniu z baz¹ danych: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		RefreshUser();
		RefreshBook();
		RefreshBuyBook();
		RefreshIncome();
		RefreshReturn();

	}


	private: System::Void AutorTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SaveButton_Click(System::Object^ sender, System::EventArgs^ e)	// Dodanie nowych ksi¹¿ek
	{

		if (AutorTextBox->Text == "" || TitleTextBox->Text == "" || IloscTextBox->Text == "" || CategoryTextBox->Text =="") {
			MessageBox::Show("Uzupe³nij wartoœci!", "Informacja", MessageBoxButtons::OK);
			return;
		}

		try {
			
			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO Book (Tytu³, Autor, Ilosc, Kategoria, Cena) VALUES (@tytu³, @autor, @ilosc, @kategoria, @cena);";

		
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@autor", AutorTextBox->Text);
			command.Parameters->AddWithValue("@tytu³", TitleTextBox->Text);
			command.Parameters->AddWithValue("@ilosc", IloscTextBox->Text);
			command.Parameters->AddWithValue("@kategoria", CategoryTextBox->Text);
			command.Parameters->AddWithValue("@cena", PriceTextBox->Text);

			// Wykonanie pytania SQL
			command.ExecuteNonQuery();

			MessageBox::Show("Dodano pomyslnie ", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}



private: System::Void RefreshButton_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshBook();
}
private: System::Void CategoryTextBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	Filtr();
}
private: System::Void ResetButton_Click(System::Object^ sender, System::EventArgs^ e) {
	AutorTextBox->Text = "";  
	TitleTextBox->Text = ""; 
	IloscTextBox->Text = "";
	
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void DeleteButton_Click(System::Object^ sender, System::EventArgs^ e) {

	// Usuwanie ksi¹¿ki na podstawie wybranego wiersza i ID 

	if (BookDataGridView->SelectedRows->Count > 0) {
		

		int selectedRowIndex = BookDataGridView->SelectedRows[0]->Index;
	

		if (BookDataGridView->Rows[selectedRowIndex]->Cells[0]->Value) {
			int bookId = Convert::ToInt32(BookDataGridView->Rows[selectedRowIndex]->Cells[0]->Value);

			try {
				
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				// Usuwanie zale¿nie od wybranej ID ksi¹¿ki

				String^ sqlQuery = "DELETE FROM Book WHERE Id = @bookId;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@bookId", bookId);

				
				command.ExecuteNonQuery();

				
				RefreshBook();

				MessageBox::Show("Usuniêto pomyœlnie", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("B³¹d w usuwaniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}
	else {
		MessageBox::Show("Nie wybrano wiersza do usuniêcia", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}

private: System::Void BookDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	
	if (e->RowIndex >= 0) {
		
		DataGridViewRow^ wiersz = BookDataGridView->Rows[e->RowIndex];

		// Wartoœci zaznaczonego wiersza
		String^ title = wiersz->Cells["Tytu³"]->Value->ToString();
		String^ author = wiersz->Cells["Autor"]->Value->ToString();
		String^ quantity = wiersz->Cells["Ilosc"]->Value->ToString();
		String^ category = wiersz->Cells["Kategoria"]->Value->ToString();
		String^ cena = wiersz->Cells["Cena"]->Value->ToString();

		
		TitleTextBox->Text = title;
		AutorTextBox->Text = author;
		IloscTextBox->Text = quantity;
		CategoryTextBox->Text = category;
		PriceTextBox->Text = cena;
	}

}
private: System::Void EditButton_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (BookDataGridView->SelectedRows->Count > 0) {

		// Indeks wiersza
		int selectedRowIndex = BookDataGridView->SelectedRows[0]->Index;

		// Wartosc id
		int id = safe_cast<int>(BookDataGridView->Rows[selectedRowIndex]->Cells["Id"]->Value);

		
		String^ updatedTitle = TitleTextBox->Text;
		String^ updatedAuthor = AutorTextBox->Text;
		int updatedQuantity = System::Int32::Parse(IloscTextBox->Text);
		String^ updatedCategory = CategoryTextBox->Text;
		int updatedPrice = System::Int32::Parse(PriceTextBox->Text);

		try {
			

			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			
			String^ sqlQuery = "UPDATE Book SET Tytu³ = @tytu³, Autor = @autor, Ilosc = @ilosc, Kategoria = @kategoria, Cena = @cena WHERE Id = @id;";

			// Obiekt SqlCommand
			SqlCommand command(sqlQuery, % sqlConn);

			
			command.Parameters->AddWithValue("@tytu³", updatedTitle);
			command.Parameters->AddWithValue("@autor", updatedAuthor);
			command.Parameters->AddWithValue("@ilosc", updatedQuantity);
			command.Parameters->AddWithValue("@kategoria", updatedCategory);
			command.Parameters->AddWithValue("@cena", updatedPrice);
			command.Parameters->AddWithValue("@id", id);

			
			command.ExecuteNonQuery();

			MessageBox::Show("Zaktualizowano pomyœlnie.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);

			
			RefreshBook();
		}
		catch (Exception^ ex) {
			MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("Wybierz wiersz do edycji.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void AddCategoryButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	
	String^ newCategory = AddCategoryTextBox->Text->Trim();

	// Czy kategoria nie jest pusta
	if (!String::IsNullOrWhiteSpace(newCategory)) {
		try {
			
			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			
			String^ sqlQuery = "INSERT INTO Kategoria (kategoria) VALUES (@kategoria);";

			
			SqlCommand command(sqlQuery, % sqlConn);

			
			command.Parameters->AddWithValue("@kategoria", newCategory);

		
			command.ExecuteNonQuery();

			
			CategoryTextBox->Items->Add(newCategory);
			CategoryTextBox2->Items->Add(newCategory);

			
			AddCategoryTextBox->Text = "";

			
			MessageBox::Show("Dodano now¹ kategoriê", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		catch (Exception^ ex) {
			
			MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		
		MessageBox::Show("Podaj nazwê kategorii", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
private: System::Void Form(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {

	try {
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Usuniêcie istniej¹cych kategorie z tabeli
		SqlCommand deleteCommand("DELETE FROM Kategoria;", % sqlConn);
		deleteCommand.ExecuteNonQuery();

		// Dodanie aktualnych kategorii
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
private: System::Void AddUserButton_Click(System::Object^ sender, System::EventArgs^ e) {

	if (NameTextBox->Text == "" || LastNameTextBox->Text == "" || EmailTextBox->Text == "" || PasswordTextBox->Text == "") {
		MessageBox::Show("Uzupe³nij wartoœci!", "Informacja", MessageBoxButtons::OK);
		return;
	}

	try {
		
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users (email, password, name, lastname) VALUES (@email, @password, @name, @lastname);";

		
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@name", NameTextBox->Text);
		command.Parameters->AddWithValue("@lastname", LastNameTextBox->Text);
		command.Parameters->AddWithValue("@email", EmailTextBox->Text);
		command.Parameters->AddWithValue("@password", PasswordTextBox->Text);

		
		command.ExecuteNonQuery();
		RefreshUser();

		MessageBox::Show("Dodano pomyslnie ", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void DeleteUserButton_Click(System::Object^ sender, System::EventArgs^ e) {
	
	// Wybranie wiersza
	if (UserDataGridView->SelectedRows->Count > 0) {

		// Wybranie ID
		int selectedRowIndex = UserDataGridView->SelectedRows[0]->Index;


		if (UserDataGridView->Rows[selectedRowIndex]->Cells[0]->Value) {
			int usersId = Convert::ToInt32(UserDataGridView->Rows[selectedRowIndex]->Cells[0]->Value);

			try {
			
				String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				// Usuniêcie wiersza o danym ID
				String^ sqlQuery = "DELETE FROM users WHERE Id = @usersId;";
				SqlCommand command(sqlQuery, % sqlConn);
				command.Parameters->AddWithValue("@usersId", usersId);

			
				command.ExecuteNonQuery();

			
				RefreshUser();

				MessageBox::Show("Usuniêto pomyœlnie", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
			catch (Exception^ ex) {
				MessageBox::Show("B³¹d w usuwaniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	}
	else {
		MessageBox::Show("Nie wybrano wiersza do usuniêcia", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void EditUserButton_Click(System::Object^ sender, System::EventArgs^ e) {

	
	if (UserDataGridView->SelectedRows->Count > 0) {
		// Indeks wiersza
		int selectedRowIndex = UserDataGridView->SelectedRows[0]->Index;

		// Wartosc id
		int id = safe_cast<int>(UserDataGridView->Rows[selectedRowIndex]->Cells["Id"]->Value);

		
		String^ name = NameTextBox->Text;
		String^ lastname = LastNameTextBox->Text;
		String^ email = EmailTextBox->Text;
		String^ password = PasswordTextBox->Text;

		try {
		
			String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			
			String^ sqlQuery = "UPDATE users SET email = @email, password = @password, name = @name, lastname = @lastname WHERE Id = @id;";

			
			SqlCommand command(sqlQuery, % sqlConn);

			
			command.Parameters->AddWithValue("@email", email);
			command.Parameters->AddWithValue("@password", password);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@lastname", lastname);
			command.Parameters->AddWithValue("@id", id);

			
			command.ExecuteNonQuery();

			MessageBox::Show("Zaktualizowano pomyœlnie.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);

			
			RefreshUser();
		}
		catch (Exception^ ex) {
			MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	else {
		MessageBox::Show("Wybierz wiersz do edycji.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void UserDataGridView_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	// Wciœniêcie tekstu

	if (e->RowIndex >= 0) {

		// Pobranie wiersza
		DataGridViewRow^ wiersz = UserDataGridView->Rows[e->RowIndex];

		// Pobranie wartoœci wiersza
		String^ name = wiersz->Cells["name"]->Value->ToString();
		String^ lastname = wiersz->Cells["lastname"]->Value->ToString();
		String^ email = wiersz->Cells["email"]->Value->ToString();
		String^ password = wiersz->Cells["password"]->Value->ToString();

	
		NameTextBox->Text = name;
		LastNameTextBox->Text = lastname;
		EmailTextBox->Text = email;
		PasswordTextBox->Text = password;
	}
}
private: System::Void BookButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabPage1->Show();
}
private: System::Void UsersButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tabPage2->Show();
}
private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void FilrtTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {			// Filtr z textboxa

	try {
		
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		
		String^ filterText = FiltrTextBox->Text;

		
		String^ sqlQuery = "SELECT Id, Tytu³, Ilosc, Kategoria, Autor, Cena FROM Book WHERE Autor LIKE '%" + filterText + 
			"%' OR Tytu³ LIKE '%" + filterText + 
			"%' OR Autor LIKE '%" + filterText +
			"%' OR Kategoria LIKE '%" + filterText +
			"%' OR Cena LIKE '%" + filterText +
			"%' OR Id LIKE '%" + filterText + "%';";

	
		SqlCommand command(sqlQuery, % sqlConn);

		// pobranie danych z bazy


		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
		DataTable^ filteredDataTable = gcnew DataTable();

		
		dataAdapter->Fill(filteredDataTable);

		
		BookDataGridView->DataSource = filteredDataTable;
	}
	catch (Exception^ ex) {
		
		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void UserFiltrTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {

	try {
	
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		
		String^ filterText = UserFiltrTextBox->Text;

		
		String^ sqlQuery = "SELECT id, email, name, lastname, opis FROM Users WHERE "
			"Id LIKE '%" + filterText + "%' OR "
			"Email LIKE '%" + filterText + "%' OR "
			"Name LIKE '%" + filterText + "%' OR "
			"Lastname LIKE '%" + filterText + "%' OR "			
			"Opis LIKE '%" + filterText + "%';";

	
		SqlCommand command(sqlQuery, % sqlConn);

		// Obiekt do pobrania bazy danych
		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);

		//  pobierane dane z bazy
		DataTable^ filteredDataTable = gcnew DataTable();

	
		dataAdapter->Fill(filteredDataTable);

	
		UserDataGridView->DataSource = filteredDataTable;
	}
	catch (Exception^ ex) {
		
		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RefreshIncomeMoney_Click(System::Object^ sender, System::EventArgs^ e) {
	RefreshIncome();
}
private: System::Void StatystykiPrzychody_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void EndTimePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RefreshButtonBookStats_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (StatsFiltrBook->SelectedItem != nullptr) // Czy kategoria zosta³a wybrana
	{
		String^ selectedCategory = StatsFiltrBook->SelectedItem->ToString();
		DateTime startDate = StartTimePickerBook->Value;
		DateTime endDate = EndTimePickerBook->Value;
		RefreshBookStats(selectedCategory, startDate, endDate);
		KategoriaBookLabel->Text = StatsFiltrBook->Text;
	}
	else
	{
		MessageBox::Show("Proszê wybraæ kategoriê.", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: System::Void StatystykiBook_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void CategoryStatsTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {

}

private: void ExportDataToTxt() {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Plik tekstowy|*.txt";
	saveFileDialog1->Title = "Zapisz dane jako plik tekstowy";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);

		// Dodaj nag³ówki kolumn
		String^ headers = String::Format("{0,-10}{1,-10}{2,-25}{3,-15}{4,-10}{5,-10}", "Id", "money", "date", "UserID", "BookID", "ilosc");
		sw->WriteLine(headers);

		// Pêtla przez wszystkie wiersze
		for (int i = 0; i < DataGridViewIncome->Rows->Count; i++) {
			String^ line = "";
			for (int j = 0; j < DataGridViewIncome->Columns->Count; j++) {
				// Formatowanie ka¿dej komórki  i dodawanie do linii
				String^ cellValue = DataGridViewIncome->Rows[i]->Cells[j]->Value != nullptr ? DataGridViewIncome->Rows[i]->Cells[j]->Value->ToString() : "";
				if (j == 0) line += String::Format("{0,-10}", cellValue); 
				else if (j == 1) line += String::Format("{0,-10}", cellValue); 
				else if (j == 2) line += String::Format("{0,-25}", cellValue); 
				else if (j == 3) line += String::Format("{0,-15}", cellValue); 
				else if (j == 4) line += String::Format("{0,-10}", cellValue); 
				else if (j == 5) line += String::Format("{0,-10}", cellValue); 
			}
			sw->WriteLine(line);
		}
		sw->Close();
	}
}




private: void ExportChartDataToTxt() {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Plik CSV|*.csv";
	saveFileDialog1->Title = "Zapisz dane wykresu jako plik CSV";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);

		// Za³ó¿my, ¿e mamy seriê danych w wykresie
		for (int seriesIndex = 0; seriesIndex < StatystykiPrzychody->Series->Count; seriesIndex++) {
			sw->WriteLine("Seria: " + StatystykiPrzychody->Series[seriesIndex]->Name);
			sw->WriteLine("Data: , Przychod: ");

			// Pêtla przez wszystkie punkty w serii
			for (int pointIndex = 0; pointIndex < StatystykiPrzychody->Series[seriesIndex]->Points->Count; pointIndex++) {
				// Konwersja XValue (która jest wartoœci¹ typu double) na DateTime
				DateTime date = DateTime::FromOADate(StatystykiPrzychody->Series[seriesIndex]->Points[pointIndex]->XValue);

				// Formatowanie daty i zapisywanie jej wraz z wartoœci¹ Y do pliku
				sw->WriteLine(date.ToString("yyyy-MM-dd") + ", " + StatystykiPrzychody->Series[seriesIndex]->Points[pointIndex]->YValues[0]);
			}
			sw->WriteLine();
		}
		sw->Close();
	}
}





private: System::Void PobierzRaportButton_Click(System::Object^ sender, System::EventArgs^ e) {

	ExportDataToTxt();
	ExportChartDataToTxt();
}


private: void ExportBookStatsDataToTxt() {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Plik tekstowy|*.txt";
	saveFileDialog1->Title = "Zapisz dane statystyk ksi¹¿ek jako plik tekstowy";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);

		//nag³ówki kolumn
		String^ headers = String::Format("{0,-10}{1,-30}{2,-30}{3,-10}{4,-30}{5,-10}{6,-25}{7,-15}", "Id", "nazwa", "tytu³", "iloœæ", "kategoria", "UserID", "Data", "cena");
		sw->WriteLine(headers);

		// Pêtla przez wszystkie wiersze
		for (int i = 0; i < DataGridViewBookStats->Rows->Count; i++) {
			String^ line = "";
			for (int j = 0; j < DataGridViewBookStats->Columns->Count; j++) {
				// Formatowanie ka¿dej komórki  i dodawanie do linii
				String^ cellValue = DataGridViewBookStats->Rows[i]->Cells[j]->Value != nullptr ? DataGridViewBookStats->Rows[i]->Cells[j]->Value->ToString() : "";
				if (j == 0) line += String::Format("{0,-10}", cellValue); 
				else if (j == 1) line += String::Format("{0,-30}", cellValue); 
				else if (j == 2) line += String::Format("{0,-30}", cellValue); 
				else if (j == 3) line += String::Format("{0,-10}", cellValue); 
				else if (j == 4) line += String::Format("{0,-30}", cellValue); 
				else if (j == 5) line += String::Format("{0,-10}", cellValue); 
				else if (j == 6) line += String::Format("{0,-25}", cellValue); 
				else if (j == 7) line += String::Format("{0,-15}", cellValue); 
			}
			sw->WriteLine(line);
		}
		sw->Close();
	}
}


private: void ExportBookChartDataToTxt() {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "Plik CSV|*.csv";
	saveFileDialog1->Title = "Zapisz dane wykresu ksi¹¿ek jako plik CSV";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ sw = gcnew StreamWriter(saveFileDialog1->FileName);

		// Za³ó¿my, ¿e mamy seriê danych w wykresie
		for (int seriesIndex = 0; seriesIndex < StatystykiBook->Series->Count; seriesIndex++) {
			sw->WriteLine("Data " + "Ilosc Kategorii: " + StatsFiltrBook->Text);
			// Pêtla przez wszystkie punkty w serii
			for (int pointIndex = 0; pointIndex < StatystykiBook->Series[seriesIndex]->Points->Count; pointIndex++) {
				// Konwertuj wartoœæ XValue na DateTime i formatuj jako datê
				DateTime pointDate = DateTime::FromOADate(StatystykiBook->Series[seriesIndex]->Points[pointIndex]->XValue);
				String^ formattedDate = pointDate.ToString("yyyy-MM-dd");
				sw->WriteLine(formattedDate + ", " + StatystykiBook->Series[seriesIndex]->Points[pointIndex]->YValues[0]);
			}
			sw->WriteLine();
		}
		sw->Close();
	}
}




private: System::Void PobierzRaportKategorie_Click(System::Object^ sender, System::EventArgs^ e) {

	ExportBookChartDataToTxt();
	ExportBookStatsDataToTxt();
}
private: System::Void bunifuMaterialTextbox1_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {


}
private: System::Void KupioneFiltrTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {

	try {

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();


		String^ filterText = KupioneFiltrTextBox->Text;


		String^ sqlQuery = "SELECT Id, nazwa, tytul, ilosc, kategoria, UserID, Data, cena  FROM Purchases WHERE "
			"Id LIKE '%" + filterText + "%' OR "
			"nazwa LIKE '%" + filterText + "%' OR "
			"tytul LIKE '%" + filterText + "%' OR "
			"ilosc LIKE '%" + filterText + "%' OR "
			"kategoria LIKE '%" + filterText + "%' OR "
			"UserID LIKE '%" + filterText + "%' OR "
			"Data LIKE '%" + filterText + "%' OR "
			"Cena LIKE '%" + filterText + "%';";


		SqlCommand command(sqlQuery, % sqlConn);

		// pobranie danych z bazy


		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
		DataTable^ filteredDataTable = gcnew DataTable();


		dataAdapter->Fill(filteredDataTable);


		BuyBookDataGridView->DataSource = filteredDataTable;
	}
	catch (Exception^ ex) {

		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void ZwróconeBookFiltrTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {

	try {

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();


		String^ filterText = ZwróconeBookFiltrTextBox->Text;


		String^ sqlQuery = "SELECT Id, nazwa, tytul, ilosc, kategoria, UserID, Data, cena  FROM [Return] WHERE "
			"Id LIKE '%" + filterText + "%' OR "
			"nazwa LIKE '%" + filterText + "%' OR "
			"tytul LIKE '%" + filterText + "%' OR "
			"ilosc LIKE '%" + filterText + "%' OR "
			"kategoria LIKE '%" + filterText + "%' OR "
			"UserID LIKE '%" + filterText + "%' OR "
			"Data LIKE '%" + filterText + "%' OR "
			"Cena LIKE '%" + filterText + "%';";


		SqlCommand command(sqlQuery, % sqlConn);

		// pobranie danych z bazy


		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(% command);
		DataTable^ filteredDataTable = gcnew DataTable();


		dataAdapter->Fill(filteredDataTable);


		DataGridViewReturn->DataSource = filteredDataTable;
	}
	catch (Exception^ ex) {

		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}
private: System::Void FiltrUserComboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	String^ selectedOption = FiltrUserComboBox->Text;
    String^ sqlQuery;
    
    if (selectedOption == "Najbardziej aktywni") {
        sqlQuery = "SELECT TOP 3 UserID, COUNT(*) as KsiazkiKupione FROM Purchases GROUP BY UserID ORDER BY COUNT(*) DESC;";
    }
    else if (selectedOption == "Najmniej aktywni") {
        sqlQuery = "SELECT TOP 3 UserID, COUNT(*) as KsiazkiKupione FROM Purchases GROUP BY UserID ORDER BY COUNT(*) ASC;";
    }
    else if (selectedOption == "Wszyscy") {
        sqlQuery = "SELECT UserID, COUNT(*) as KsiazkiKupione FROM Purchases GROUP BY UserID ORDER BY UserID;";
    }
    
    RefreshUserStatsDataGridView(sqlQuery);

}

private: void RefreshUserStatsDataGridView(String^ sqlQuery) {
	try {
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(sqlQuery, sqlConn);
		DataSet^ dataSet = gcnew DataSet();
		dataAdapter->Fill(dataSet, "UserStats");

		UserStatsDataGridView->DataSource = dataSet->Tables["UserStats"];

		sqlConn->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

private: String^ GenerateUniqueDiscountCode(int userId) {
	//  bie¿¹ca data
	DateTime now = DateTime::Now;
	String^ timeString = now.ToString("yyyyMMddHHmmss");

	// userId na ci¹g znaków
	String^ userIdString = userId.ToString();

	
	String^ randomString = "";
	Random^ rnd = gcnew Random();
	for (int i = 0; i < 5; i++) {
		char randomChar = 'A' + rnd->Next(0, 26); // Losowa litera od A do Z
		randomString += randomChar;
	}

	//  kod rabatowy z po³¹czenia czasu, userId i losowego ci¹gu
	String^ discountCode = "DISC" + timeString + userIdString + randomString;

	return discountCode;
}



private: System::Void AddDiscountButton_Click(System::Object^ sender, System::EventArgs^ e) {
	// czy jakiœ wiersz jest zaznaczony
	if (UserStatsDataGridView->SelectedRows->Count == 0) {
		MessageBox::Show("Wybierz u¿ytkownika.", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Pobranie UserID 
	int selectedRowIndex = UserStatsDataGridView->SelectedRows[0]->Index;
	int userId = Convert::ToInt32(UserStatsDataGridView->Rows[selectedRowIndex]->Cells["UserID"]->Value);

	// Pobranie wartoœci rabatu
	String^ discountValueStr = AddDiscountTextBox->Text;
	double discountValue;
	if (!Double::TryParse(discountValueStr, discountValue) || discountValue <= 0 || discountValue > 100) {
		MessageBox::Show("Podaj prawid³ow¹ wartoœæ rabatu (1-100).", "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}


	String^ discountCode = GenerateUniqueDiscountCode(userId);

	try {
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		
		String^ sqlQuery = "INSERT INTO Discounts (DiscountCode, UserId, IsUsed, DiscountPercent) VALUES (@discountCode, @userId, 0, @discountValue);";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@discountCode", discountCode);
		command->Parameters->AddWithValue("@userId", userId);
		command->Parameters->AddWithValue("@discountValue", discountValue);
		command->ExecuteNonQuery();

		sqlConn->Close();

		MessageBox::Show("Dodano rabat dla u¿ytkownika.", "Sukces", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d podczas dodawania rabatu: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}



private: void DisplayReviews(String^ bookTitle) {			// Funkcja od pokazywania recenzji
	try {
		
		RecenzjePanel->Controls->Clear();

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Zapytanie  do pobrania recenzji i ocen na podstawie tytu³u ksi¹¿ki
		String^ sqlQuery = "SELECT u.name, r.Rate, r.Opis FROM Recenzje r INNER JOIN users u ON r.UserID = u.Id WHERE r.Tytul = @bookTitle;";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@bookTitle", bookTitle);

		SqlDataReader^ reader = command.ExecuteReader();

		while (reader->Read()) {
			String^ userName = reader["name"]->ToString();
			String^ rating = reader["Rate"]->ToString();
			String^ review = reader["Opis"]->ToString();

			
			Label^ reviewLabel = gcnew Label();
			reviewLabel->Text = userName + ": " + review + "    Ocena:  " + rating + "/5";
			reviewLabel->AutoSize = true;
			reviewLabel->Margin = System::Windows::Forms::Padding(10);

			
			RecenzjePanel->Controls->Add(reviewLabel);
		}

		sqlConn.Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d podczas pobierania recenzji: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: void Œrednia() {
	try {
		String^ bookTitle = RecenzjeTextBox->Text; 

		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection^ sqlConn = gcnew SqlConnection(connString);
		sqlConn->Open();

		
		String^ sqlQuery = "SELECT Rate FROM Recenzje WHERE Tytul = @bookTitle;";
		SqlCommand^ command = gcnew SqlCommand(sqlQuery, sqlConn);
		command->Parameters->AddWithValue("@bookTitle", bookTitle);

		SqlDataReader^ reader = command->ExecuteReader();
		double total = 0;
		int count = 0;

		// œrednia ocen
		while (reader->Read()) {
			total += Convert::ToDouble(reader["Rate"]);
			count++;
		}

		sqlConn->Close();

		
		if (count > 0) {
			double average = total / count;
			ŒredniaLabel->Text = "Œrednia ocen: " + average.ToString("0.00"); 
		}
		else {
			ŒredniaLabel->Text = "Brak ocen dla tej ksi¹¿ki.";
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("B³¹d podczas pobierania ocen: " + ex->Message, "B³¹d", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}



private: System::Void RecenzjeTextBox_OnValueChanged(System::Object^ sender, System::EventArgs^ e) {

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

		DisplayReviews(RecenzjeTextBox->Text);
		Œrednia();

	}
	catch (Exception^ ex) {

		MessageBox::Show("B³¹d w ³¹czeniu " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

}

};
}


