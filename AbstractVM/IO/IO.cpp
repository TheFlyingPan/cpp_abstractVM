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
    mDict.emplace(POP, &Instructions::popFunction);
    mDict.emplace(CLEAR, &Instructions::clearFunction);
    mDict.emplace(DUP, &Instructions::dupFunction);
    mDict.emplace(SWAP, &Instructions::swapFunction);
    mDict.emplace(DUMP, &Instructions::dumpFunction);
    mDict.emplace(ASSERT, &Instructions::assertFunction);
    mDict.emplace(ADD, &Instructions::addFunction);
    mDict.emplace(SUB, &Instructions::subFunction);
    mDict.emplace(MUL, &Instructions::mulFunction);
    mDict.emplace(DIV, &Instructions::divFunction);
    mDict.emplace(MOD, &Instructions::modFunction);
    mDict.emplace(LOAD, &Instructions::loadFunction);
    mDict.emplace(STORE, &Instructions::storeFunction);
    mDict.emplace(PRINT, &Instructions::printFunction);
    mDict.emplace(EXIT, &Instructions::exitFunction);
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