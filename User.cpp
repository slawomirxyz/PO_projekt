///////////////////////////////////////////////////////////
//  User.cpp
//  Implementation of the Class User
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#include "User.h"


User::User(){
//TODO
}


User::User(string login, string password){
    this->folder_list = new Folder_list();
    this->login = login;
    this->password = password;
}


User::~User(){
//TODO
}


void User::create_note(string name, string folder_name){
//TODO
}


void User::delete_note(string name, string folder_name){
//TODO
}


void User::edit_note(string name, string new_content){
//TODO
}


string User::get_login(){

	return  this->login;
}


string User::get_password(){

	return  this->password;
}


void User::show(){
//TODO
}


void User::show(string folder_name, string note_name){
//TODO
}


void User::show(string folder_name){
//TODO
}