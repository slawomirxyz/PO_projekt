///////////////////////////////////////////////////////////
//  Folder.h
//  Implementation of the Class Folder
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#if !defined(EA_381968E1_1443_4342_853E_4DB8EB9F7337__INCLUDED_)
#define EA_381968E1_1443_4342_853E_4DB8EB9F7337__INCLUDED_

#include "File.h"
#include "Note.h"
#include <iostream>
#include <vector>
using namespace std;

class Folder : public File
{

public:
	Note *m_Note;

	Folder();
	Folder(string title);
	~Folder();
	void create_note(string name);
	void delete_note(string name);
	Note* get_note(string name);
	int get_notes_size();
	void show();

private:
	/**
	 * te
	 */
	int max_notes;
	vector<Note*> notes;

};
#endif // !defined(EA_381968E1_1443_4342_853E_4DB8EB9F7337__INCLUDED_)
