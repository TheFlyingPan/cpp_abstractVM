#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <memory>
#include "Chipset.hpp"
#include "../IO/IO.hpp"
#include "../CPU/IOperand.hpp"
#include "../CPU/Operand.hpp"
#include "../CPU/Factory.hpp"
#include "../CPU/Int8.hpp"

using namespace std;

Chipset::Chipset()
{
}

Chipset::~Chipset()
{
}

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
}

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

string Chipset::getVarType(string ligne)
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
    string enumType[6] = {"int8","int16","int32","float","double","bigdecimal"};
    string type = getVarType(m);
    int i = 0;
       if(type.compare(enumType[i]) == 0 )
        {
            cout << "je suis dans Chipset::pushFonction, valeur d'entree: " << m << endl;
            cout << getVarType(m) << " -> à envoyer dans le type de la variable" << endl;
            cout << getVal(m) << " -> à envoyer dans la valeur à ioperand" << endl;
            this->myRam.stackMem.push_back(9);
        }
        else
        {
            std::cerr << "Error: no type known" << endl;
        }
    
    
}

void Chipset::popFunction(string m)
{
    if(!this->myRam.stackMem.empty())
        this->myRam.stackMem.pop_back();
    else
        std::cerr << "error: pop on empty stack";    
}

void Chipset::clearFunction(string m)
{
    cout << "clearFonction" << endl;
    this->myRam.stackMem.clear();
}

void Chipset::dupFunction(string m)
{
    auto back = this->myRam.stackMem.back();
    this->myRam.stackMem.push_back(back);
    cout << back << endl;
}

void Chipset::swapFunction(string m)
{
    std::list<int>::iterator iter; 
    iter = this->myRam.stackMem.begin();
    std::list<int>::iterator it1 = iter++;
    cout << "swapFonction" << endl;
    //this->myRam.stackMem.swap(it1, iter);
}

void Chipset::dumpFunction(string m)
{
    cout << "dumpFonction" << endl;
    std::list<int> list = this->myRam.stackMem;
    if(!list.empty())
    {
        std::list<int>::iterator IterateurListe; // Construction d’un itérateur pour parcourir les éléments de la liste
        for(IterateurListe=list.begin();IterateurListe!=list.end();IterateurListe++)
        {
            std::cout << (*IterateurListe) << std::endl;
        }
    }
    else
    {
    std::cerr << "La liste est vide" << std::endl;
    }
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
    exit;
}