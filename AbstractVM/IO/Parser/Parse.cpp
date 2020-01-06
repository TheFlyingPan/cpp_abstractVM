#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Parse.hpp"

using namespace std;

Parse::Parse()
{

};

Parse::~Parse()
{
    
};

void Parse::fromFile(const char* argv) const
{
    string ligne;
    ifstream monFlux(argv);  //Ouverture d'un fichier en lecture
    if(monFlux){
        //Lire le fichier et récupérer 
        while(getline(monFlux, ligne) && (ligne.find("exit") == string::npos)) //Tant qu'on n'est pas à la fin, on lit
        {
            std::cout << ligne << endl;
        }
        cout << ";;" << endl;
        cout << "resultFichier" << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
};

void Parse::getWords(string line)
{
    string arr[2];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good()) {
        ssin >> arr[i];
        i++;
    }
    for (i = 0; i <= 3; i++) {
        // Envoyer ensuite tout dans dictionnaire
        cout << arr[i] << endl;
    }
};

// void Parse::getSplit(const std::string& str, Container& cont, char delim = ' ')
// {
//     size_t current, previous = 0;
//     current = str.find(delim);
//     while (current != string::npos) {
//         cont.push_back(str.substr(previous, current - previous));
//         previous = current + 1;
//         current = str.find(delim, previous);
//     }
//     cont.push_back(substr(previous, current - previous));
// };