#include <map>
#include <string>
#include <iostream>
#include "dictionnary.hpp"
using namespace std; 

dictionnary::dictionnary(){
    map <string, string> instructionsCmd = {
        {"comments", "commentsFunction"},
        {"push", "pushFunction"},
        {"pop", "popFunction"},
        {"error", "errorFunction"},
        {"clear", "clearFunction"},
        {"dup", "dupFunction"},
        {"swap", "swapFunction"},
        {"dump", "dumpFunction"},
        {"assert", "assertFunction"},
        {"add", "addFunction"},
        {"sub", "subFunction"},
        {"mul", "mulFunction"},
        {"div", "divFunction"},
        {"mod", "modFunction"},
        {"load", "loadFunction"},
        {"store", "storeFunction"},
        {"print", "printFunction"},
        {"exit", "exitFunction"},
        };

    //READ MAP
    cout << "Map contains following elements" << endl;

   for (auto it = instructionsCmd.begin(); it != instructionsCmd.end(); ++it)
      cout << it->first << " = " << it->second << endl;
}

dictionnary::~dictionnary()
{}