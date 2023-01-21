///////////////////////////////////////////////////////////
//  User.h
//  Implementation of the Class User
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#if !defined(EA_5C2454F7_8846_4589_B119_93AC4194B196__INCLUDED_)
#define EA_5C2454F7_8846_4589_B119_93AC4194B196__INCLUDED_

#include "Folder_list.h"
#include <iostream>
using namespace std;

class User
{

public:
	User();
	Folder_list *m_Folder_list;

	User(string login, string password);
	~User();
	void create_note(string name, string folder_name);
	void delete_note(string name, string folder_name);
	void edit_note(string name, string new_content);
	string get_login();
	string get_password();
	void show();
	void show(string folder_name, string note_name);
	void show(string folder_name);

private:
	Folder_list* folder_list;
	string login;
	string password;

};
#endif // !defined(EA_5C2454F7_8846_4589_B119_93AC4194B196__INCLUDED_)
