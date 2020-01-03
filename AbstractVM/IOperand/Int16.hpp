#include <iostream>
#include <string>
#include "IOperand.hpp"

using namespace std;

class Int16 : public IOperand
{
public:
    Int16();
    ~Int16() {}
};