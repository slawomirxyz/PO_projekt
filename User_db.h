///////////////////////////////////////////////////////////
//  User_db.h
//  Implementation of the Class User_db
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#if !defined(EA_2758B71F_03AA_4be9_A85A_3003D7BEE7CC__INCLUDED_)
#define EA_2758B71F_03AA_4be9_A85A_3003D7BEE7CC__INCLUDED_

#include "User.h"
#include <iostream>
#include <vector>
using namespace std;

class User_db
{

public:
	User *m_User;

	User_db();
	~User_db();
	bool check_password(string password, string nazwa);
	void create_user(string name, string password);
	void delete_user(string name, string password);
	User* get_user(string nazwa);
	int get_users_size();
	void show_all_users();

private:
	int max_user_count;
	vector<User*> users;

};
#endif // !defined(EA_2758B71F_03AA_4be9_A85A_3003D7BEE7CC__INCLUDED_)
