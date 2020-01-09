#include "Factory.cpp"
#include "IOperand.cpp"
#include <iostream>
#include <string>

using namespace  std;

int main()
{
    Factory::createOperand(eOperandType::Int8, "34");
};
