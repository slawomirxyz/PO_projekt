///////////////////////////////////////////////////////////
//  User_db.cpp
//  Implementation of the Class User_db
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#include "User_db.h"


User_db::User_db(){
    vector<User*> users(100);
    this->max_user_count = 100;
    this->m_User = NULL;
}


User_db::~User_db(){
//TODO
}


bool User_db::check_password(string password, string nazwa){

	User* user_named = get_user(nazwa);

	if(user_named != NULL)
		return true;

	return  false;
}


void User_db::create_user(string name, string password){

    if(users.size() < this->max_user_count){
        cout << "Dodano nowego uzytkownika\n";
        User* created_user = new User(name, password);

        users.push_back(created_user);
    }
    else{
        cout << "Nie można dodać nowych użytkowników do bazy - limit 100 użytkowników\n";
    }
}


void User_db::delete_user(string name, string password){

    if(users.empty()){
        cout << "Baza użytkowników jest pusta\n";
    }
    else{
            for (vector<User*>::iterator it = users.begin(); it != users.end(); ++it) {
                if ( (*it)->get_login() == name && (*it)->get_password() == password){
                    users.erase(it);
                    break;
                }
            }
    }
}


User* User_db::get_user(string nazwa){

    if(users.size() != 0 ){

        for (vector<User*>::iterator it = users.begin(); it != users.end(); ++it) {
            if ( (*it)->get_login() == nazwa) 
            {
                return *it;
            }
        }
    }
    else{
        cout << "Brak użytkownika o nazwie: " << nazwa << "w bazie.\n";
    }

    return NULL;
}


int User_db::get_users_size(){

	return users.size();
}


void User_db::show_all_users(){

    cout << "Użytkownicy w bazie danych: \n";
    if(users.size() != 0 ){

        for(int i = 0; i< users.size(); i++)
        {
            cout << (users[i])->get_login() << "\n";
        }
    }
    else{
        cout << "--BRAK--\n";
    }
}