#include <iostream>
#include <list>
#include <iterator>
#include "RAM.hpp"

using namespace std;

class Stack : public RAM
{
    public:
    Stack();
    ~Stack();
    std::list<const IOperand *> stackMem() const;
};