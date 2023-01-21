#include <iostream>
#include "File.h"
#include "Folder.h"
#include "Folder_list.h"
#include "Note.h"
#include "User.h"
#include "User_db.h"
#include "User_manager.h"

using namespace std;

void menu()
{
    cout << "\nMENU\n";
    cout << "0. exit\n";
    cout << "1. Zaloguj się\n";
    cout << "2. Wyloguj się\n";
    cout << "3. Zarejestruj się\n";
    cout << "4. Wyrejestruj się\n";
    cout << "5. Wykonaj operację za pomocą swojego konta\n";
    cout << "99. MENU\n";
}

int main()
{
    cout << "Menager Notatek" << endl;
    User_manager* UserManager = new User_manager();

    menu();

   bool app_should_run = true;
   int choice;
   int user_opt;
   string name;
   string password;


   while (app_should_run)
   {
      cout << "\nWybierz numer operacji : ";
      cin >> choice;

      switch(choice)
      {
         case 0 : 
            app_should_run = false;
         break;
         
         case 1 : 
            cout << "Podaj nazwe konta oraz hasło aby się zalogować: ";
            cin >> name;
            cin >> password;
            UserManager->login(name, password);
         break;

         case 2 : 
            UserManager->logout();
         break;

         case 3 : 
            cout << "Podaj nazwe konta oraz hasło aby stworzyć nowe konto: ";
            cin >> name;
            cin >> password;
            UserManager->register_user(name, password);
         break;

         case 4 :
            cout << "Podaj nazwe konta oraz przypisane mu hasło aby usunąć konto: ";
            cin >> name;
            cin >> password;
            UserManager->deregister(name, password);
         break;

         case 5 :
            cout << "OPCJE\n";
            cout << "1. Pokaz notatke\n";
            cout << "2. Pokaz zawartosc folderu\n";
            cout << "3. Pokaz wszystkie foldery\n";
            cout << "4. Utworz folder\n";
            cout << "5. Utworz notatke\n";

            cout << "Podaj jaką akcję związaną z kontem checesz zrobić: ";
            cin >> user_opt;
            UserManager->user_action(user_opt);
         break;

         case 99 : 
            menu();
         break;

         default:
            cout << "Niepoprawna operacja" << endl;
         break;
      }
   }


   delete UserManager;

	return 0;
}
