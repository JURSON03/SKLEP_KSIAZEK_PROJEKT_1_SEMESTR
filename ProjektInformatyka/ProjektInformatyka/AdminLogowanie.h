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

	/// <summary>
	/// Summary for AdminLogowanie
	/// </summary>
	public ref class AdminLogowanie : public System::Windows::Forms::Form
	{
	public:
		AdminLogowanie(void)
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
		~AdminLogowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: Bunifu::Framework::UI::BunifuTextbox^ PasswordTextBox;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ConfirmButton;
	private: Bunifu::Framework::UI::BunifuThinButton2^ ExitButton;
	private: System::Windows::Forms::LinkLabel^ LogowanieLinkLabel;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminLogowanie::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->PasswordTextBox = (gcnew Bunifu::Framework::UI::BunifuTextbox());
			this->ConfirmButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->ExitButton = (gcnew Bunifu::Framework::UI::BunifuThinButton2());
			this->LogowanieLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(585, 48);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Admin";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->BackColor = System::Drawing::Color::White;
			this->PasswordTextBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordTextBox.BackgroundImage")));
			this->PasswordTextBox->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->PasswordTextBox->ForeColor = System::Drawing::Color::Black;
			this->PasswordTextBox->Icon = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"PasswordTextBox.Icon")));
			this->PasswordTextBox->Location = System::Drawing::Point(136, 148);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(320, 42);
			this->PasswordTextBox->TabIndex = 9;
			this->PasswordTextBox->text = L"password";
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
			this->ConfirmButton->Location = System::Drawing::Point(201, 209);
			this->ConfirmButton->Margin = System::Windows::Forms::Padding(5);
			this->ConfirmButton->Name = L"ConfirmButton";
			this->ConfirmButton->Size = System::Drawing::Size(177, 41);
			this->ConfirmButton->TabIndex = 11;
			this->ConfirmButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ConfirmButton->Click += gcnew System::EventHandler(this, &AdminLogowanie::ConfirmButton_Click);
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
			this->ExitButton->Location = System::Drawing::Point(14, 306);
			this->ExitButton->Margin = System::Windows::Forms::Padding(5);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(123, 41);
			this->ExitButton->TabIndex = 12;
			this->ExitButton->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->ExitButton->Click += gcnew System::EventHandler(this, &AdminLogowanie::ExitButton_Click);
			// 
			// LogowanieLinkLabel
			// 
			this->LogowanieLinkLabel->AutoSize = true;
			this->LogowanieLinkLabel->LinkColor = System::Drawing::Color::Black;
			this->LogowanieLinkLabel->Location = System::Drawing::Point(257, 255);
			this->LogowanieLinkLabel->Name = L"LogowanieLinkLabel";
			this->LogowanieLinkLabel->Size = System::Drawing::Size(59, 13);
			this->LogowanieLinkLabel->TabIndex = 13;
			this->LogowanieLinkLabel->TabStop = true;
			this->LogowanieLinkLabel->Text = L"Logowanie";
			this->LogowanieLinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &AdminLogowanie::LogowanieLinkLabel_LinkClicked);
			// 
			// AdminLogowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(584, 361);
			this->Controls->Add(this->LogowanieLinkLabel);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->ConfirmButton);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->label1);
			this->MaximumSize = System::Drawing::Size(600, 400);
			this->MinimumSize = System::Drawing::Size(600, 400);
			this->Name = L"AdminLogowanie";
			this->Text = L"AdminLogowanie";
			this->Load += gcnew System::EventHandler(this, &AdminLogowanie::AdminLogowanie_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		// Zmienna powracaj¹ca do okna logowania

	public: bool switchToLogowanie = false;

	private: System::Void LogowanieLinkLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		switchToLogowanie = true;
		this->Close();
	}
private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}


	  public: bool Accept = false;
	  public: Admin^ dane = nullptr;

private: System::Void ConfirmButton_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ password = PasswordTextBox->text;
	if (password->Length == 0) {
		MessageBox::Show("Podaj has³o", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}

	
	try {
		// £¹czenie z baz¹ danych
		String^ connString = "Data Source=DESKTOP-1CMP067\\SQLEXPRESS;Initial Catalog=Logowanie;Integrated Security=True;";
		SqlConnection sqlConn(connString);
		sqlConn.Open();


		// Zapytanie SQL sprawdzaj¹ce poprawnoœæ  has³a
		String^ sqlQuery = "SELECT Id, password, money FROM Admin WHERE password=@pwd;";
		SqlCommand command(sqlQuery, % sqlConn);	
		command.Parameters->AddWithValue("@pwd", password);

		SqlDataReader^ reader = command.ExecuteReader();

		
		if (reader->Read()) {

			dane = gcnew Admin;
			dane->id = reader->GetInt32(0);
			dane->password = reader->GetString(1);
			dane->money = reader->GetDouble(2);

			Accept = true;
			this->Close();
		}
		else {
			MessageBox::Show("B³êdny login lub has³o", "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	catch (Exception^ e) {
		MessageBox::Show("B³¹d z ³¹czeniem: " + e->Message, "Informacja", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}

}
private: System::Void AdminLogowanie_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
