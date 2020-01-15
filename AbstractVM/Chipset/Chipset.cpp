#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Chipset.hpp"
#include "../IO/IO.hpp"
#include "../Memory/instructions.hpp"

using namespace std;

Chipset::Chipset()
{

};

Chipset::~Chipset()
{
    
};

string Chipset::getWords(string ligne)
{
    string arr[2];
    int i = 0;
    stringstream ssin(ligne);
    while (ssin.good()) {
        ssin >> arr[i];
        i++;
    }
    return arr[0];
};

string Chipset::getVar(string ligne)
{
    // sert à séparer le type de la variable de sa valeur
    string delim = "(";
    string delim2 = ")";
    string token = ligne.substr(0, ligne.find(delim));
    size_t dpos = token.length();
    string token2 = ligne.substr(dpos + 1, ligne.find(delim2));
    string str = token2.substr(0, token2.size()-1);
    cout << token << endl; // Type de la variable
    cout << str << endl; // Contenu de la variable
    return "salut";
}