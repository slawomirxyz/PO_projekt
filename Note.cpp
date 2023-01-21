///////////////////////////////////////////////////////////
//  Note.cpp
//  Implementation of the Class Note
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#include "Note.h"




Note::Note(){
//TODO
}

Note::Note(string title){
	this->title = title;
}

Note::~Note(){
//TODO
}


void Note::edit(string new_content){
	this->content = new_content;
}


void Note::show(){
	cout << this->content << "\n";
}