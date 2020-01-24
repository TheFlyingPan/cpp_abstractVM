#include <string>
#include <iostream>
#include "instructions.hpp"
#include "Chipset.hpp"
#include "../CPU/IOperand.hpp"
#include "../CPU/eOperandType.hpp"
#include "../CPU/Factory.hpp"

using namespace std;

void Instructions::pushFunction(string m)
{
    cout << "je suis dans Instructions::pushFonction, valeur d'entrée: " << m << endl;
    cout << getVar(m) << " -> à envoyer dans le type de la variable" << endl;
    cout << getVal(m) << " -> à envoyer dans la valeur à ioperand" << endl;
    
}

void Instructions::popFunction(string m)
{
    cout << "popFonction" << endl;
}

void Instructions::clearFunction(string m)
{
    cout << "clearFonction" << endl;
}

void Instructions::dupFunction(string m)
{
    cout << "dupFonction" << endl;
}

void Instructions::swapFunction(string m)
{
    cout << "swapFonction" << endl;
}

void Instructions::dumpFunction(string m)
{
    cout << "dumpFonction" << endl;
}

void Instructions::assertFunction(string m)
{
    cout << "assertFonction" << endl;
}

void Instructions::addFunction(string m)
{
    cout << "addFonction" << endl;
}

void Instructions::subFunction(string m)
{
    cout << "subFonction" << endl;
}

void Instructions::mulFunction(string m)
{
    cout << "mulFonction" << endl;
}

void Instructions::divFunction(string m)
{
    cout << "divFonction" << endl;
}

void Instructions::modFunction(string m)
{
    cout << "modFonction" << endl;
}

void Instructions::loadFunction(string m)
{
    cout << "loadFonction" << endl;
}

void Instructions::storeFunction(string m)
{
    cout << "storeFonction" << endl;
}

void Instructions::printFunction(string m)
{
    cout << "printFonction" << endl;
}

void Instructions::exitFunction(string m)
{
    cout << "exitFonction" << endl;
}