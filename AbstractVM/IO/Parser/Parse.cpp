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
            Parse::getWords(ligne);
        }
        cout << ";;" << endl;
        cout << "resultFichier" << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
};

void Parse::getWords(string line) const
{
    string arr[2];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good()) {
        ssin >> arr[i];
        i++;
    }
    // Il va falloir implementer le dico
    if (arr[0] == "cul") {
        // le arr[1] doit etre envoyé dans la memoire en fonction de la commande
        cout << "Ca marche " << arr[1] << endl;
    }
};