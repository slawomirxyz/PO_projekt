///////////////////////////////////////////////////////////
//  User_manager.h
//  Implementation of the Class User_manager
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#if !defined(EA_279B8F5B_0DA5_4911_8599_D3EE6DDC3AC8__INCLUDED_)
#define EA_279B8F5B_0DA5_4911_8599_D3EE6DDC3AC8__INCLUDED_

#include "User_db.h"
#include "User.h"
#include <iostream>
using namespace std;

class User_manager
{

public:
	User_db *m_User_db;
	User *m_User;

	User_manager();
	~User_manager();
	void deregister(string name, string password);
	void login(string name, string password);
	void logout();
	//w diagramie UML jest register() - w C++ jest to slowo kluczowe, wiec zmieniono nazwe na register_user()
	void register_user(string name, string password);
	void user_action(int option);

private:
	User* logged_in_user;
	User_db* user_list;

};
#endif // !defined(EA_279B8F5B_0DA5_4911_8599_D3EE6DDC3AC8__INCLUDED_)
