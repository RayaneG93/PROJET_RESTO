#include "menu.h"
#include <string.h>
#include <iostream>
#include <fstream>

using namespace std;

void Menu::afficher_menu(){

    string jour = "Lundi";
    string periode = "soir";
    string jour_per;
    jour_per = jour + "-" + periode;
    string line;

    ifstream myfile("menu.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            if (line == jour_per)
            {
                while (line != "***")
                {
                    getline(myfile, line);
                    cout<< line <<endl;
                }
            }
        }
        myfile.close();
        }else{
            cout << "Erreur!!!!"<<endl;
        }

}

/////////////////////////////////SET//////////////////////////////////////////////


void Menu::set_entrer(string debut){

    entrer = debut;

}

void Menu::set_plat(string milieu){

    plat = milieu;

}

void Menu::set_dessert(string fin){

    dessert = fin;

}

void Menu::set_addition(int add){

    addition = add;

}

////////////////////////GET///////////////////////////////////////////////


string Menu::get_entrer(){


    return entrer;
}

string Menu::get_plat(){


    return plat;
}

string Menu::get_dessert(){


    return dessert;
}

int Menu::get_addition(){

    return addition;

}

///////////////////////////////////////////////////////////////////////
