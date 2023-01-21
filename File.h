///////////////////////////////////////////////////////////
//  File.h
//  Implementation of the Class File
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#if !defined(EA_A1B4F044_E4AD_4676_ACBF_BF686494E90F__INCLUDED_)
#define EA_A1B4F044_E4AD_4676_ACBF_BF686494E90F__INCLUDED_

#include <iostream>
using namespace std;

class File
{

public:
	File();

	File(string title);
	~File();
	string get_title();
	virtual void show();

protected:
	string title;

};
#endif // !defined(EA_A1B4F044_E4AD_4676_ACBF_BF686494E90F__INCLUDED_)
