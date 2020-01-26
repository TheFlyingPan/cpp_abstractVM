#ifndef __RAM_HPP__
#define __RAM_HPP__
#include <iostream>
#include <list>
#include <iterator>
#include "../CPU/IOperand.hpp"

class RAM
{
    public:
        RAM();
        ~RAM();
    //  std::list<IOperand *> stackMem;
        std::list<double> stackMem;
        std::string resType;
        std::string myRegister[16];
};

#endif