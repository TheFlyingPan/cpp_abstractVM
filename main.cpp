#include <iostream>
#include <string>
#include <fstream>
#include "AbstractVM/IOperand/IOperand.hpp"
#include "AbstractVM/Memory/instructions.hpp"
#include "AbstractVM/IO/IO.hpp"


using namespace std;

int main(int argc, char** argv)
{
    IO cmd;
    while (argc > 0){
        if(argc == 1){
            cmd.fromInput();
            break;
        }
        else if(argc == 2){
            cmd.fromFile(argv[1]);
            break;
        }
        else
        {
            return 0;
        }
    }
    return 0;
};