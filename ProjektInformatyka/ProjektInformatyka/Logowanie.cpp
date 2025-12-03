#include "Logowanie.h"
#include "MainForm.h"
#include "Rejestracja.h"
#include "AdminLogowanie.h"
#include "AdminForm.h"


using namespace System;
using namespace System::Windows::Forms;



[STAThread]
void main(array<String^>^ args)

{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	

	
    // WskaŸnik na obiekt klasy user

    User^ user = nullptr;
    bool LoginAdmin = false; 
    bool LoginUser = false;
    Admin^ admin = nullptr;
    

    
    while (true)
    {
       
        ProjektInformatyka::Logowanie LogowanieForm;
        Application::Run(% LogowanieForm);

        if (LogowanieForm.ExitBtn)
        {
            break;          // wy³¹czenie aplikacji
        }
        
        if (LogowanieForm.LoginAccept)
        {
            // Przypisanie danych zalogowanego u¿ytkownika
            user = LogowanieForm.USER;
            break;
        }

        // Sprawdzenie, czy u¿ytkownik chce przejœæ do formularza rejestracji
        if (LogowanieForm.switchToRegister)
        {
            
            ProjektInformatyka::Rejestracja RejestracjaForm;
            Application::Run(% RejestracjaForm);

            // Sprawdzenie, czy u¿ytkownik chce powróciæ do formularza logowania
            if (RejestracjaForm.switchToLogin)
            {
                continue;
            }
            else
            {
                // Przypisanie danych zarejestrowanego u¿ytkownika
                user = RejestracjaForm.user;
                break;
            }
        }
        else if (LogowanieForm.switchToAdmin)
        {
            // Tworzenie i uruchamianie formularza admin

            ProjektInformatyka::AdminLogowanie AdminLogowanieForm;
            Application::Run(% AdminLogowanieForm);

            // Sprawdzenie, czy u¿ytkownik chce powróciæ do formularza logowania
            if (AdminLogowanieForm.switchToLogowanie)
            {
                continue;
            }
            else
            {
                LoginAdmin = AdminLogowanieForm.Accept;
                admin = AdminLogowanieForm.dane;
                break;
            }
        }
  

 
    }



    // Sprawdzenie, czy u¿ytkownik zosta³ zalogowany

    if (user != nullptr)
    {
        
        MessageBox::Show("Udane logowanie. Witaj " + user->name, "Logowanie", MessageBoxButtons::OK);

        
        ProjektInformatyka::MainForm mainForm(user);
        Application::Run(% mainForm);
    }



    if (LoginAdmin)
    {
       
        MessageBox::Show("Witaj Adminie", "Logowanie", MessageBoxButtons::OK);

       
        ProjektInformatyka::AdminForm FormAdmin(admin);
        Application::Run(% FormAdmin);

    }




}
