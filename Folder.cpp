///////////////////////////////////////////////////////////
//  Folder.cpp
//  Implementation of the Class Folder
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#include "Folder.h"




Folder::Folder(){
    vector<Note*> notes(10);
    this->max_notes = 10;
}

Folder::Folder(string title){
	this->title = title;
	vector<Note*> notes(10);
    this->max_notes = 10;
}

Folder::~Folder(){
//TODO
}


void Folder::create_note(string name){

    if(notes.size() < this->max_notes){
        cout << "Dodano nową notatkę.\n";
        Note* created_note = new Note(name);

        notes.push_back(created_note);
    }
    else{
        cout << "Nie można dodawać nowych notatek - limit 10 notatek na folder\n";
    }
}


void Folder::delete_note(string name){

    if(notes.empty()){
        cout << "Brak notatek w folderze\n";
    }
    else{
            for (vector<Note*>::iterator it = notes.begin(); it != notes.end(); ++it) {
                if ( (*it)->get_title() == name){
                    notes.erase(it);
                    break;
                }
            }
    }
}


Note* Folder::get_note(string name){

    if(notes.size() != 0 ){

        for (vector<Note*>::iterator it = notes.begin(); it != notes.end(); ++it) {
            if ( (*it)->get_title() == name) 
            {
                return *it;
            }
        }
    }
    else{
        cout << "Brak notatki o nazwie: " << name << ".\n";
    }

    return NULL;
}


int Folder::get_notes_size(){

	return (this->notes).size();
}


void Folder::show(){

    cout << "Notatki w folderze: \n";
    if(notes.size() != 0 ){

        for(int i = 0; i< notes.size(); i++)
        {
            cout << (notes[i])->get_title() << "\n";
        }
    }
    else{
        cout << "--BRAK--\n";
    }
}