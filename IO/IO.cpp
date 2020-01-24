#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

#include "IO.hpp"
#include "../Chipset/Chipset.hpp"
using namespace std;

IO::IO()
{
    this->mDict;
    mDict.emplace(PUSH, &Chipset::pushFunction);
    mDict.emplace(POP, &Chipset::popFunction);
    mDict.emplace(CLEAR, &Chipset::clearFunction);
    mDict.emplace(DUP, &Chipset::dupFunction);
    mDict.emplace(SWAP, &Chipset::swapFunction);
    mDict.emplace(DUMP, &Chipset::dumpFunction);
    mDict.emplace(ASSERT, &Chipset::assertFunction);
    mDict.emplace(ADD, &Chipset::addFunction);
    mDict.emplace(SUB, &Chipset::subFunction);
    mDict.emplace(MUL, &Chipset::mulFunction);
    mDict.emplace(DIV, &Chipset::divFunction);
    mDict.emplace(MOD, &Chipset::modFunction);
    mDict.emplace(LOAD, &Chipset::loadFunction);
    mDict.emplace(STORE, &Chipset::storeFunction);
    mDict.emplace(PRINT, &Chipset::printFunction);
    mDict.emplace(EXIT, &Chipset::exitFunction);
    // std::map<std::string, void (*)(std::string)>::iterator it = mDict.begin();
    // this->mDict[PUSH] = &Chipset::pushFunction;
    // this->mDict[COMMENT] = &Chipset::commentsFunction;
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
                std::cout << "not found\n" << endl;
            }
            else
            {
                // std::cout << "found: " << str << std::endl;
                (this->mDict.find(str)->second(Chipset::getWords(str))); // Mettre ici la sortie du parseur ( int32(x) )
                std::cout << "\n" << std::endl;
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
            // Faire liste des commandes et executer quand il rencontre ";;"
            // Et erreur si exit avant ";;"
    string ligne;
    while(ligne.find("exit") == string::npos){
        getline(cin, ligne);
        string it = Chipset::getWords(ligne);
        if (mDict.find(it) == mDict.end()) {
                std::cout << "not found" << endl;
            }
            else
            {
                // std::cout << "found: " << it << endl;
                (this->mDict.find(it)->second(Chipset::getNumber(ligne))); // Mettre ici la sortie du parseur ( int32(x) )
                // std::cout << "\n" << std::endl;
            }
    }
    cout << ";;" << endl;
    cout << "result" << endl;
}