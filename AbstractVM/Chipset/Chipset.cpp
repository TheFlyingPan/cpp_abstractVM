#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "Chipset.hpp"

using namespace std;

Chipset::Chipset()
{

};

Chipset::~Chipset()
{
    
};

void Chipset::fromFile(const char* argv) const
{
    string ligne;
    ifstream monFlux(argv);  //Ouverture d'un fichier en lecture
    if(monFlux){
        //Lire le fichier et récupérer 
        while(getline(monFlux, ligne) && (ligne.find("exit") == string::npos)) //Tant qu'on n'est pas à la fin, on lit
        {
            std::cout << ligne << endl;
            // Chipset::getVar(ligne);
            Chipset::getWords(ligne);
        }
        cout << ";;" << endl;
        cout << "resultFichier" << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
};

void Chipset::getWords(string line) const
{
    string arr[2];
    int i = 0;
    stringstream ssin(line);
    while (ssin.good()) {
        ssin >> arr[i];
        i++;
    }
    // Il va falloir implementer le dico
    if (arr[0] == "push") {
        // le arr[1] doit etre envoyé dans la memoire en fonction de la commande
        cout << "Ca marche " << arr[1] << endl;
        Chipset::getVar(arr[1]);
    }
};

void Chipset::getVar(string line) const
{
    // sert à séparer le type de la variable de sa valeur
    string delim = "(";
    string delim2 = ")";
    string token = line.substr(0, line.find(delim));
    size_t dpos = token.length();
    string token2 = line.substr(dpos + 1, line.find(delim2));
    string str = token2.substr(0, token2.size()-1);
    cout << token << endl; // Type de la variable
    cout << str << endl; // Contenu de la variable
}