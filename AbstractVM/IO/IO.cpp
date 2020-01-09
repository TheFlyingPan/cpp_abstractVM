#include <iostream>
#include <fstream>
#include <string>
#include <map>
#include "IO.hpp"
#include "../Memory/instructions.hpp"

using namespace std;

IO::IO()
{ 
    this->mDict;
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
            if (mDict.find(ligne) == mDict.end()) {
                //not found
            }
            else
            {
                //found
            }
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
        if (mDict.find(ligne) == mDict.end()) {
                //not found
            }
            else
            {
                //found
            }
    }
    cout << ";;" << endl;
    cout << "result" << endl;
};