#include "Int8.hpp"

Int8::Int8(string value):_value(value), _type(eOperandType::INT8)
{
}

std::string Int8::toString() const
{
    return _value;
}

IOperand::eOperandType Int8::getType() const
{
    return IOperand::eOperandType::INT8;
}