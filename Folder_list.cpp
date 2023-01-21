///////////////////////////////////////////////////////////
//  Folder_list.cpp
//  Implementation of the Class Folder_list
//  Created on:      18-Jan-2023 3:04:23 PM
//  Original author: morph
///////////////////////////////////////////////////////////

#include "Folder_list.h"




Folder_list::Folder_list(){
    vector<Folder*> folders(10);
    this->max_folder = 10;
}


Folder_list::~Folder_list(){
//TODO
}


void Folder_list::create_folder(string name){

    if(folders.size() < this->max_folder){
        cout << "Dodano nowy folder\n";
        Folder* created_folder = new Folder(name);

        folders.push_back(created_folder);
    }
    else{
        cout << "Nie można dodawać nowych folderów - limit 10 folderów na użytkowników\n";
    }
}


void Folder_list::delete_folder(string name){

    if(folders.empty()){
        cout << "Brak folderów - nie można usunąć folderu o podanej nazwie\n";
    }
    else{
            for (vector<Folder*>::iterator it = folders.begin(); it != folders.end(); ++it) {
                if ( (*it)->get_title() == name){
                    folders.erase(it);
                    break;
                }
            }
    }
}


Folder* Folder_list::get_folder(string name){

    if(folders.size() != 0 ){

        for (vector<Folder*>::iterator it = folders.begin(); it != folders.end(); ++it) {
            if ( (*it)->get_title() == name) 
            {
                return *it;
            }
        }
    }
    else{
        cout << "Brak folderu o nazwie: " << name << ".\n";
    }

    return NULL;
}


int Folder_list::get_folders_size(){

	return (this->folders).size();
}


void Folder_list::show_folders(){

    cout << "Dostępne foldery: \n";
    if(folders.size() != 0 ){

        for(int i = 0; i< folders.size(); i++)
        {
            cout << (folders[i])->get_title() << "\n";
        }
    }
    else{
        cout << "--BRAK--\n";
    }
}