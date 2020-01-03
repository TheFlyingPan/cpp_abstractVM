#include <iostream>
#include <string>
#include "IOperand.hpp"

using namespace std;

class Factory : public IOperand
{
public:
    Factory();
    ~Factory();
    static IOperand* createOperand(eOperandType type, const string& value);
};