#include <iostream>
#include <fstream>
#include <string>
#include "IO.hpp"
#include "Parser/Parser.cpp"

using namespace std;

IO::IO()
{
    //nothing
};

IO::~IO()
{
    //nothing
};

void IO::fromFile(const char* argv) const
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

void IO::fromInput() const
{
     //lire le programme et récupérer ligne via cmd
            //A RAJOUTER DANS CLASSE I/O
    string ligne;
    while(ligne.find("exit") == string::npos){
        cin >> ligne;
    }
    cout << ";;" << endl;
    cout << "result" << endl;
};