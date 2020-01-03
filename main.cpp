#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    while (argc > 0){
        string ligne;
        if(argc == 1){
            //lire le programme et récupérer ligne via cmd
            //A RAJOUTER DANS CLASSE I/O
            while(ligne.find("exit") == string::npos){
                cin >> ligne;
                
            }
            cout << ";;" << endl;
            cout << "result" << endl;
            break;
        }
        else if(argc == 2){
            //lire le programme et récupérer ligne via FICHIER
            //A RAJOUTER DANS CLASSE I/O
            //string fichier = argv[0][1];
            ifstream monFlux("test.txt");  //Ouverture d'un fichier en lecture
            if(monFlux){
                //Lire le fichier et récupérer 
            }
            else
            {
                cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
            }
        }
        else
        {
            return 0;
        }
    }
    return 0;
}