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

// #define INT8 "int8"

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
    while (type.compare(enumType[i]) != 0) {
       if (i > 5) {
           std::cerr << "Error: type '" << type << "' non-existent" << endl;
            // cout << "je suis dans Chipset::pushFonction, valeur d'entree: " << m << endl;
            // cout << getVarType(m) << " -> à envoyer dans le type de la variable" << endl;
            // cout << getVal(m) << " -> à envoyer dans la valeur à ioperand" << endl;
            // this->myRam.stackMem.push_back(std::stod(getVal(m)));
        }
        i++;
    }
    if (i <= 5) {
        this->myRam.stackMem.push_front(std::stod(getVal(m)));
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
    std::list<double>::iterator iter; 
    iter = this->myRam.stackMem.begin();
    std::list<double>::iterator it1 = iter++;
    cout << "swapFonction" << endl;
    //this->myRam.stackMem.swap(it1, iter);
}

void Chipset::dumpFunction(string m)
{
    cout << "dumpFonction" << endl;
    std::list<double> list = this->myRam.stackMem;
    if(!list.empty())
    {
        std::list<double>::iterator IterateurListe; // Construction d’un itérateur pour parcourir les éléments de la liste
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
    double val1 = this->myRam.stackMem.front();
    this->myRam.stackMem.pop_front();
    double val2 = this->myRam.stackMem.front();
    double res = val1 + val2;
    this->myRam.stackMem.push_front(res);
    cout << res << endl;
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
    int i = 0;
    while (myRam.myRegister[i].compare(m) != 0 && i < 17) {
        i++;
    }
    if (i <= 15) {
        this->myRam.stackMem.push_front(stod(Chipset::getVal(m)));
    } else {
        cerr << "Error: The value you asked for doesn't exist" << endl;
    }
}

void Chipset::storeFunction(string m)
{
    int i = 0;
    while (myRam.myRegister[i].compare("") != 0 && i < 17) {
        i++;
    }
    if (i <= 15) {
        myRam.myRegister[i] = m;
    } else {
        cerr << "Error: The register is full" << endl;
    }
    
}

void Chipset::printFunction(string m)
{
    // std::list<double>::const_iterator it = this->myRam.stackMem.begin();
    // while (it != this->myRam.stackMem.end()){
    //     cout << this->myRam.stackMem.front() << endl;
    //     this->myRam.stackMem.pop_front();
    //     it++;
    // }
}

void Chipset::exitFunction(string m)
{
    cout << "exitFonction" << endl;
    exit;
}