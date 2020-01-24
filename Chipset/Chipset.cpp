#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Chipset.hpp"
#include "../IO/IO.hpp"
#include "../CPU/IOperand.hpp"
#include "../CPU/eOperandType.hpp"
#include "../CPU/Factory.hpp"

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

string Chipset::getNumber(string ligne)
{
    string arr[2];
    int i = 0;
    stringstream ssin(ligne);
    while (ssin.good()) {
        ssin >> arr[i];
        i++;
    }
    return arr[1];
}

string Chipset::getVar(string ligne)
{
    // sert à séparer le type de la variable de sa valeur
    string delim = "(";
    string delim2 = ")";
    string token = ligne.substr(0, ligne.find(delim));
    size_t dpos = token.length();
    string token2 = ligne.substr(dpos + 1, ligne.find(delim2));
    string str = token2.substr(0, token2.size()-1);
    // cout << token << endl; // Type de la variable
    // cout << str << endl; // Contenu de la variable
    return token;
};

string Chipset::getVal(string ligne)
{
    // sert à séparer le type de la variable de sa valeur
    string delim = "(";
    string delim2 = ")";
    string token = ligne.substr(0, ligne.find(delim));
    size_t dpos = token.length();
    string token2 = ligne.substr(dpos + 1, ligne.find(delim2));
    string str = token2.substr(0, token2.size()-1);
    // cout << token << endl; // Type de la variable
    // cout << str << endl; // Contenu de la variable
    return str;
};

void Chipset::pushFunction(string m)
{
    cout << "je suis dans Chipset::pushFonction, valeur d'entrée: " << m << endl;
    cout << getVar(m) << " -> à envoyer dans le type de la variable" << endl;
    cout << getVal(m) << " -> à envoyer dans la valeur à ioperand" << endl;
    
}

void Chipset::popFunction(string m)
{
    cout << "popFonction" << endl;
}

void Chipset::clearFunction(string m)
{
    cout << "clearFonction" << endl;
}

void Chipset::dupFunction(string m)
{
    cout << "dupFonction" << endl;
}

void Chipset::swapFunction(string m)
{
    cout << "swapFonction" << endl;
}

void Chipset::dumpFunction(string m)
{
    cout << "dumpFonction" << endl;
}

void Chipset::assertFunction(string m)
{
    cout << "assertFonction" << endl;
}

void Chipset::addFunction(string m)
{
    cout << "addFonction" << endl;
}

void Chipset::subFunction(string m)
{
    cout << "subFonction" << endl;
}

void Chipset::mulFunction(string m)
{
    cout << "mulFonction" << endl;
}

void Chipset::divFunction(string m)
{
    cout << "divFonction" << endl;
}

void Chipset::modFunction(string m)
{
    cout << "modFonction" << endl;
}

void Chipset::loadFunction(string m)
{
    cout << "loadFonction" << endl;
}

void Chipset::storeFunction(string m)
{
    cout << "storeFonction" << endl;
}

void Chipset::printFunction(string m)
{
    cout << "printFonction" << endl;
}

void Chipset::exitFunction(string m)
{
    cout << "exitFonction" << endl;
}