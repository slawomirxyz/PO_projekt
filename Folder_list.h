///////////////////////////////////////////////////////////
//  Folder_list.h
//  Implementation of the Class Folder_list
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#if !defined(EA_ED4C4753_B627_469b_9CE6_56538376481C__INCLUDED_)
#define EA_ED4C4753_B627_469b_9CE6_56538376481C__INCLUDED_

#include "Folder.h"
#include <iostream>
#include <vector>
using namespace std;

class Folder_list
{

public:
	Folder *m_Folder;

	Folder_list();
	~Folder_list();
	void create_folder(string name);
	void delete_folder(string name);
	Folder* get_folder(string name);
	int get_folders_size();
	void show_folders();

private:
	vector<Folder*> folders;
	int max_folder;

};
#endif // !defined(EA_ED4C4753_B627_469b_9CE6_56538376481C__INCLUDED_)
