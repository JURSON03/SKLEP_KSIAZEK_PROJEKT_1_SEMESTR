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

	/// <summary>
	/// Summary for Logowanie
	/// </summary>
	


	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Bunifu::Framework::UI::BunifuThinButton2^ LoginButton;
	private: Bunifu::Framework::UI::BunifuTextbox^ PasswordTextBox;
	protected:


	private: Bunifu::Framework::UI::BunifuTextbox^ LoginTextBox;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ RegisterLabelLink;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ExitButton;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ AdminLabelLink;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Logowanie::typeid));
			this->LoginButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->PasswordTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->LoginTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->RegisterLabelLink = (gcnew System::Windows::Forms::LinkLabel());
			this->ExitButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->AdminLabelLink = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// LoginButton
			// 
			this->LoginButton->ActiveBorderThickness = 1;
			this->LoginButton->ActiveCornerRadius = 20;
			this->LoginButton->ActiveFillColor = System::Drawing::Color::Silver;
			this->LoginButton->ActiveForecolor = System::Drawing::Color::Black;
			this->LoginButton->ActiveLineColor = System::Drawing::Color::Black;
			this->LoginButton->BackColor = System::Drawing::SystemColors::Control;
			this->LoginButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginButton.BackgroundImage")));
			this->LoginButton->ButtonText = L"Login";
			this->LoginButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LoginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginButton->ForeColor = System::Drawing::Color::Black;
			this->LoginButton->IdleBorderThickness = 1;
			this->LoginButton->IdleCornerRadius = 20;
			this->LoginButton->IdleFillColor = System::Drawing::Color::White;
			this->LoginButton->IdleForecolor = System::Drawing::Color::Black;
			this->LoginButton->IdleLineColor = System::Drawing::Color::Black;
			this->LoginButton->Location = System::Drawing::Point(299, 324);
			this->LoginButton->Margin = System::Windows::Forms::Padding(5);
			this->LoginButton->Name = L"LoginButton";
			this->LoginButton->Size = System::Drawing::Size(177, 41);
			this->LoginButton->TabIndex = 0;
			this->LoginButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->LoginButton->Click += gcnew System::EventHandler(this, &Logowanie::LoginButton_Click);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::White;
			this->PasswordTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordTextBox.BackgroundImage")));
			this->PasswordTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->PasswordTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordTextBox.Icon")));
			this->PasswordTextBox->Location = System::Drawing::Point(268, 260);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(250, 42);
			this->PasswordTextBox->TabIndex = 1;
			this->PasswordTextBox->text = L"password";
			// 
			// LoginTextBox
			// 
			this->LoginTextBox->BackColor = System::Drawing::Color::White;
			this->LoginTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginTextBox.BackgroundImage")));
			this->LoginTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LoginTextBox->ForeColor = System::Drawing::Color::Black;
			this->LoginTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LoginTextBox.Icon")));
			this->LoginTextBox->Location = System::Drawing::Point(268, 191);
			this->LoginTextBox->Name = L"LoginTextBox";
			this->LoginTextBox->Size = System::Drawing::Size(250, 42);
			this->LoginTextBox->TabIndex = 2;
			this->LoginTextBox->text = L"e-mail";
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(-2, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(783, 48);
			this->label1->TabIndex = 3;
			this->label1->Text = L"LOGOWANIE";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &Logowanie::label1_Click);
			// 
			// RegisterLabelLink
			// 
			this->RegisterLabelLink->AutoSize = true;
			this->RegisterLabelLink->LinkColor = System::Drawing::Color::Black;
			this->RegisterLabelLink->Location = System::Drawing::Point(360, 382);
			this->RegisterLabelLink->Name = L"RegisterLabelLink";
			this->RegisterLabelLink->Size = System::Drawing::Size(60, 13);
			this->RegisterLabelLink->TabIndex = 4;
			this->RegisterLabelLink->TabStop = true;
			this->RegisterLabelLink->Text = L"Rejestracja";
			this->RegisterLabelLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Logowanie::RegisterLabelLink_LinkClicked);
			// 
			// ExitButton
			// 
			this->ExitButton->ActiveBorderThickness = 1;
			this->ExitButton->ActiveCornerRadius = 20;
			this->ExitButton->ActiveFillColor = System::Drawing::Color::Silver;
			this->ExitButton->ActiveForecolor = System::Drawing::Color::Black;
			this->ExitButton->ActiveLineColor = System::Drawing::Color::Black;
			this->ExitButton->BackColor = System::Drawing::SystemColors::Control;
			this->ExitButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ExitButton.BackgroundImage")));
			this->ExitButton->ButtonText = L"Exit";
			this->ExitButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExitButton->ForeColor = System::Drawing::Color::Black;
			this->ExitButton->IdleBorderThickness = 1;
			this->ExitButton->IdleCornerRadius = 20;
			this->ExitButton->IdleFillColor = System::Drawing::Color::White;
			this->ExitButton->IdleForecolor = System::Drawing::Color::Black;
			this->ExitButton->IdleLineColor = System::Drawing::Color::Black;
			this->ExitButton->Location = System::Drawing::Point(14, 506);
			this->ExitButton->Margin = System::Windows::Forms::Padding(5);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(123, 41);
			this->ExitButton->TabIndex = 5;
			this->ExitButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Logowanie::ExitButton_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 191);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 48);
			this->label2->TabIndex = 6;
			this->label2->Text = L"E-MAIL";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(23, 254);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 48);
			this->label3->TabIndex = 7;
			this->label3->Text = L"PASSWORD";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// AdminLabelLink
			// 
			this->AdminLabelLink->AutoSize = true;
			this->AdminLabelLink->LinkColor = System::Drawing::Color::Black;
			this->AdminLabelLink->Location = System::Drawing::Point(370, 413);
			this->AdminLabelLink->Name = L"AdminLabelLink";
			this->AdminLabelLink->Size = System::Drawing::Size(36, 13);
			this->AdminLabelLink->TabIndex = 8;
			this->AdminLabelLink->TabStop = true;
			this->AdminLabelLink->Text = L"Admin";
			this->AdminLabelLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Logowanie::AdminLabelLink_LinkClicked);
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->ControlBox = false;
			this->Controls->Add(this->AdminLabelLink);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->RegisterLabelLink);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->LoginTextBox);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->LoginButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Logowanie";
			this->Text = L"Logowanie";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Logowanie::Logowanie_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Logowanie::Logowanie_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	// Zmienna od zalogowania
	public: bool LoginAccept = false;

// WskaŸnik na klasê user, która bêdzie przechowywaæ dane o u¿ytkowniku przy zalogowaniu

public: User^ USER = nullptr;


private: System::Void Logowanie_Load(System::Object^ sender, System::EventArgs^ e) {    
}



private: System::Void LoginButton_Click(System::Object^ sender, System::EventArgs^ e) {

    
    String^ email = this->LoginTextBox->text;
    String^ password = this->PasswordTextBox->text;

    
    if (email->Length == 0 || password->Length == 0) {
        MessageBox::Show("Podaj e-mail lub has³o", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
        return;
    }

    
    try {

        // £¹czenie z baz¹ danych
        String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
        SqlConnection sqlConn(connString);
        sqlConn.Open();


        // Zapytanie SQL sprawdzaj¹ce poprawnoœæ loginu i has³a

        String^ sqlQuery = "SELECT Id, email, password, name, lastname, opis, money FROM users WHERE email=@email AND password=@pwd;";
        SqlCommand command(sqlQuery, % sqlConn);
        command.Parameters->AddWithValue("@email", email);
        command.Parameters->AddWithValue("@pwd", password);

        SqlDataReader^ reader = command.ExecuteReader();

        // Je¿eli dane s¹ poprawne, tworzymy obiekt User i przypisujemy mu dane z bazy

		if (reader->Read()) {
			USER = gcnew User;
			USER->id = reader->GetInt32(0);
			USER->email = reader->GetString(1);
			USER->password = reader->GetString(2);
			USER->name = reader->GetString(3);
			USER->lastname = reader->GetString(4);
			USER->opis = reader->GetString(5);
			 USER->money = reader->GetInt32(6);


			LoginAccept = true;
            this->Close();

        } else {
            MessageBox::Show("B³êdny login lub has³o", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
        }
    } catch (Exception^ e) {
        MessageBox::Show("B³¹d z ³¹czeniem: " + e->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Error);
    }
}

// Zmienna od zamkniêcia programu
public: bool ExitBtn = false;

private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	ExitBtn = true;
	this->Close();
}

// Zmienna od prze³¹czenia siê do okna rejestracji
public: bool switchToRegister = false;


private: System::Void RegisterLabelLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
    switchToRegister = true;
    this->Close();
}


	   // Zmienna od prze³¹czenia siê do okna logowania admina
public: bool switchToAdmin = false;

private: System::Void AdminLabelLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	switchToAdmin = true;
	this->Close();
}

private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Logowanie_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	
}
};
}
