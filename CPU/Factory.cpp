#include "Factory.hpp"

using namespace std;

static IOperand* createOperand(Operand::eOperandType type, const string& value)
{
    if(type == Operand::eOperandType::INT8)
    {
        IOperand* createInt8(const string& value);
    }
    if(type == Operand::eOperandType::INT16)
    {
        IOperand* createInt16(const string& value);
    }
    if(type == Operand::eOperandType::INT32)
    {
        IOperand* createInt32(const string& value);
    }
    if(type == Operand::eOperandType::FLOAT)
    {
        IOperand* createFloat(const string& value);
    }
    if(type == Operand::eOperandType::DOUBLE)
    {
        IOperand* createDouble(const string& value);
    }
    if(type == Operand::eOperandType::BIGDECIMAL)
    {
        IOperand* createBigDecimal(const string& value);
    }
    return 0;
};