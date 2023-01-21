///////////////////////////////////////////////////////////
//  Note.h
//  Implementation of the Class Note
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#if !defined(EA_6DCF44B0_A44B_42f8_A5D5_C8B87F7E4D76__INCLUDED_)
#define EA_6DCF44B0_A44B_42f8_A5D5_C8B87F7E4D76__INCLUDED_

#include "File.h"
#include <iostream>
using namespace std;

class Note : public File
{

public:
	Note();
	Note(string title);
	~Note();
	void edit(string new_content);
	void show();

private:
	string content;

};
#endif // !defined(EA_6DCF44B0_A44B_42f8_A5D5_C8B87F7E4D76__INCLUDED_)
