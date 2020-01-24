#ifndef __RAM_HPP__
#define __RAM_HPP__
#include "../CPU/IOperand.hpp"
#include <iostream>
#include <list>
#include <iterator>

class RAM
{
    public:
    RAM();
    ~RAM();
    std::list<const IOperand *> stackMem() const;
};

#endif