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
	/// Summary for Rejestracja
	/// </summary>
	public ref class Rejestracja : public System::Windows::Forms::Form
	{
	public:
		Rejestracja(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Rejestracja()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuTextbox^ NameTextBox;
	private: Bunifu::Framework::UI::BunifuTextbox^ LastNameTextBox;
	private: Bunifu::Framework::UI::BunifuTextbox^ EmailTextBox;
	private: Bunifu::Framework::UI::BunifuTextbox^ PasswordTextBox;
	private: Bunifu::Framework::UI::BunifuTextbox^ ConfirmPasswordTextBox;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ConfirmButton;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ExitButton;
	private: System::Windows::Forms::LinkLabel^ LogowanieLabelLink;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Rejestracja::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->NameTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->LastNameTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->EmailTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->PasswordTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->ConfirmPasswordTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->ConfirmButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->ExitButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->LogowanieLabelLink = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(770, 48);
			this->label1->TabIndex = 4;
			this->label1->Text = L"REJESTRACJA";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// NameTextBox
			// 
			this->NameTextBox->BackColor = System::Drawing::Color::White;
			this->NameTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NameTextBox.BackgroundImage")));
			this->NameTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->NameTextBox->ForeColor = System::Drawing::Color::Black;
			this->NameTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"NameTextBox.Icon")));
			this->NameTextBox->Location = System::Drawing::Point(91, 74);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(320, 42);
			this->NameTextBox->TabIndex = 5;
			this->NameTextBox->text = L"imiê";
			// 
			// LastNameTextBox
			// 
			this->LastNameTextBox->BackColor = System::Drawing::Color::White;
			this->LastNameTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LastNameTextBox.BackgroundImage")));
			this->LastNameTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->LastNameTextBox->ForeColor = System::Drawing::Color::Black;
			this->LastNameTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"LastNameTextBox.Icon")));
			this->LastNameTextBox->Location = System::Drawing::Point(91, 135);
			this->LastNameTextBox->Name = L"LastNameTextBox";
			this->LastNameTextBox->Size = System::Drawing::Size(320, 42);
			this->LastNameTextBox->TabIndex = 6;
			this->LastNameTextBox->text = L"nazwisko";
			// 
			// EmailTextBox
			// 
			this->EmailTextBox->BackColor = System::Drawing::Color::White;
			this->EmailTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EmailTextBox.BackgroundImage")));
			this->EmailTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->EmailTextBox->ForeColor = System::Drawing::Color::Black;
			this->EmailTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"EmailTextBox.Icon")));
			this->EmailTextBox->Location = System::Drawing::Point(91, 197);
			this->EmailTextBox->Name = L"EmailTextBox";
			this->EmailTextBox->Size = System::Drawing::Size(320, 42);
			this->EmailTextBox->TabIndex = 7;
			this->EmailTextBox->text = L"e-mail";
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::White;
			this->PasswordTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordTextBox.BackgroundImage")));
			this->PasswordTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->PasswordTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordTextBox.Icon")));
			this->PasswordTextBox->Location = System::Drawing::Point(91, 261);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(320, 42);
			this->PasswordTextBox->TabIndex = 8;
			this->PasswordTextBox->text = L"password";
			// 
			// ConfirmPasswordTextBox
			// 
			this->ConfirmPasswordTextBox->BackColor = System::Drawing::Color::White;
			this->ConfirmPasswordTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmPasswordTextBox.BackgroundImage")));
			this->ConfirmPasswordTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ConfirmPasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->ConfirmPasswordTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmPasswordTextBox.Icon")));
			this->ConfirmPasswordTextBox->Location = System::Drawing::Point(91, 320);
			this->ConfirmPasswordTextBox->Name = L"ConfirmPasswordTextBox";
			this->ConfirmPasswordTextBox->Size = System::Drawing::Size(320, 42);
			this->ConfirmPasswordTextBox->TabIndex = 9;
			this->ConfirmPasswordTextBox->text = L"confirm password";
			// 
			// ConfirmButton
			// 
			this->ConfirmButton->ActiveBorderThickness = 1;
			this->ConfirmButton->ActiveCornerRadius = 20;
			this->ConfirmButton->ActiveFillColor = System::Drawing::Color::Silver;
			this->ConfirmButton->ActiveForecolor = System::Drawing::Color::Black;
			this->ConfirmButton->ActiveLineColor = System::Drawing::Color::Black;
			this->ConfirmButton->BackColor = System::Drawing::SystemColors::Control;
			this->ConfirmButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ConfirmButton.BackgroundImage")));
			this->ConfirmButton->ButtonText = L"POTWIERD";
			this->ConfirmButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ConfirmButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ConfirmButton->ForeColor = System::Drawing::Color::Black;
			this->ConfirmButton->IdleBorderThickness = 1;
			this->ConfirmButton->IdleCornerRadius = 20;
			this->ConfirmButton->IdleFillColor = System::Drawing::Color::White;
			this->ConfirmButton->IdleForecolor = System::Drawing::Color::Black;
			this->ConfirmButton->IdleLineColor = System::Drawing::Color::Black;
			this->ConfirmButton->Location = System::Drawing::Point(91, 389);
			this->ConfirmButton->Margin = System::Windows::Forms::Padding(5);
			this->ConfirmButton->Name = L"ConfirmButton";
			this->ConfirmButton->Size = System::Drawing::Size(177, 41);
			this->ConfirmButton->TabIndex = 10;
			this->ConfirmButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ConfirmButton->Click += gcnew System::EventHandler(this, &Rejestracja::ConfirmButton_Click);
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
			this->ExitButton->TabIndex = 11;
			this->ExitButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ExitButton->Click += gcnew System::EventHandler(this, &Rejestracja::ExitButton_Click);
			// 
			// LogowanieLabelLink
			// 
			this->LogowanieLabelLink->AutoSize = true;
			this->LogowanieLabelLink->LinkColor = System::Drawing::Color::Black;
			this->LogowanieLabelLink->Location = System::Drawing::Point(88, 446);
			this->LogowanieLabelLink->Name = L"LogowanieLabelLink";
			this->LogowanieLabelLink->Size = System::Drawing::Size(59, 13);
			this->LogowanieLabelLink->TabIndex = 12;
			this->LogowanieLabelLink->TabStop = true;
			this->LogowanieLabelLink->Text = L"Logowanie";
			this->LogowanieLabelLink->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Rejestracja::LogowanieLabelLink_LinkClicked);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(436, 68);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(210, 48);
			this->label2->TabIndex = 13;
			this->label2->Text = L"IMIE";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(436, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(210, 48);
			this->label3->TabIndex = 14;
			this->label3->Text = L"NAZWISKO";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(436, 191);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(210, 48);
			this->label4->TabIndex = 15;
			this->label4->Text = L"E-MAIL";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(436, 255);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(210, 48);
			this->label5->TabIndex = 16;
			this->label5->Text = L"PASSWORD";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label6
			// 
			this->label6->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(436, 314);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(210, 48);
			this->label6->TabIndex = 17;
			this->label6->Text = L"PASSWORD";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Rejestracja
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->LogowanieLabelLink);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->ConfirmButton);
			this->Controls->Add(this->ConfirmPasswordTextBox);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->EmailTextBox);
			this->Controls->Add(this->LastNameTextBox);
			this->Controls->Add(this->NameTextBox);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(800, 600);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"Rejestracja";
			this->Text = L"Rejestracja";
			this->Load += gcnew System::EventHandler(this, &Rejestracja::Rejestracja_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}


#pragma endregion

		// Przy rejestracji przypisuje siê do obiektu dane u¿ytkownika

public: User^ user = nullptr;



private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {

	
	this->Close();
}

	   
private: System::Void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) 
{
	
	String^ name = NameTextBox->text;
	String^ lastname = LastNameTextBox->text;
	String^ email = EmailTextBox->text;
	String^ password = PasswordTextBox->text;
	String^ confirmPassword = ConfirmPasswordTextBox->text;

	
	if (name->Length == 0 || lastname->Length == 0 || email->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
		
		MessageBox::Show("Uzupe³nij wszystkie pola!", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}


	if (String::Compare(password, confirmPassword) != 0) {
		
		MessageBox::Show("Has³a nie pasuj¹ do siebie", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	try {

		// Po³¹czenie z baz¹ danych
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		// Dodawanie nowego u¿ytkownika do bazy danych SQL
		String^ sqlQuery = "INSERT INTO users (email, password, name, lastname) VALUES (@email, @password, @name, @lastname);";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@password", password);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@lastname", lastname);

		
		command.ExecuteNonQuery();

		// Utworzenie obiektu User i przypisanie mu danych zarejestrowanego u¿ytkownika

		user = gcnew User;
		user->name = name;
		user->email = email;
		user->password = password;
		user->lastname = lastname;
		user->opis = "BRAK";
		user->money = 0;

		this->Close();

	}
	catch (Exception^ ex) {
		
		MessageBox::Show("B³¹d w rejestracji " + ex->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
}

	   // Przel¹czenie do okna logowania 
public: bool switchToLogin = false;

	  
private: System::Void LogowanieLabelLink_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	// Zmiana na true, aby przeœæ do okna logowania
	switchToLogin = true;
	this->Close();
}
private: System::Void Rejestracja_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
