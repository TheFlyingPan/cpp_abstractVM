#include "Factory.hpp"

using namespace std;

Factory::Factory()
{
};

Factory::~Factory()
{
};

static IOperand* createOperand(eOperandType type, const string& value)
{
    if(type == eOperandType::Int8)
    {
        IOperand* createInt8(const string& value);
    }
    if(type == eOperandType::Int16)
    {
        IOperand* createInt16(const string& value);
    }
    if(type == eOperandType::Int32)
    {
        IOperand* createInt32(const string& value);
    }
    if(type == eOperandType::Float)
    {
        IOperand* createFloat(const string& value);
    }
    if(type == eOperandType::Double)
    {
        IOperand* createDouble(const string& value);
    }
    if(type == eOperandType::BigDecimal)
    {
        IOperand* createBigDecimal(const string& value);
    }

};