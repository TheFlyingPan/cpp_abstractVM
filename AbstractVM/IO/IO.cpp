#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

#include "IO.hpp"
#include "../Chipset/Chipset.hpp"
#include "../Memory/instructions.hpp"
using namespace std;

IO::IO()
{
    this->mDict;
    mDict.emplace(PUSH, &Instructions::pushFunction);
    mDict.emplace(COMMENT, &Instructions::commentsFunction);
    // std::map<std::string, void (*)(std::string)>::iterator it = mDict.begin();
    // this->mDict[PUSH] = &Instructions::pushFunction;
    // this->mDict[COMMENT] = &Instructions::commentsFunction;
}

IO::~IO()
{
    //nothing
}

void IO::fromFile(const char* argv) const
{
    std::map<std::string, void (*)(std::string)>::iterator it;
    std::string ligne;
    ifstream monFlux(argv);  // Ouverture d'un fichier en lecture
    if(monFlux){
        //Lire le fichier et récupérer 
        while(getline(monFlux, ligne) && (ligne.find("exit") == string::npos)) //Tant qu'on n'est pas à la fin, on lit
        {
            std::cout << ligne << endl;
            string str = Chipset::getWords(ligne);
            // it = mDict.find(str);
            if (mDict.find(str) == mDict.end()) {
                std::cout << "not found" << endl;
            }
            else
            {
                std::cout << "found: " << str << std::endl;
                (this->mDict.find(str)->second("je suis dans la bonne fonction"));
            }
        }
        cout << ";;" << endl;
        cout << "resultFichier" << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
}

void IO::fromInput() const
{
     //lire le programme et récupérer ligne via cmd
            //A RAJOUTER DANS CLASSE I/O
    string ligne;
    while(ligne.find("exit") == string::npos){
        getline(cin, ligne);
        string it = Chipset::getWords(ligne);
        if (mDict.find(it) == mDict.end()) {
                std::cout << "not found" << endl;
            }
            else
            {
                std::cout << "found: " << it << endl;
            }
    }
    cout << ";;" << endl;
    cout << "result" << endl;
}