///////////////////////////////////////////////////////////
//  File.cpp
//  Implementation of the Class File
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#include "File.h"


File::File(){
//TODO
}



File::File(string title){
	this->title = title;
}


File::~File(){
//TODO
}


string File::get_title(){

	return  this->title;
}


void File::show(){

	cout << "Nazwa pliku: " << this->title;
}