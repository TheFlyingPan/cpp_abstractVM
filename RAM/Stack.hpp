#include <iostream>
#include <list>
#include <iterator>
#include "../IOperand/IOperand.hpp"

using namespace std;

class Stack : public IOperand
{
    public:
    Stack();
    ~Stack();
    std::list<const IOperand *> stackMem() const;
};