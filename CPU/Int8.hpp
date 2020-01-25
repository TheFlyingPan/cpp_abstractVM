#include "IOperand.hpp"
#ifndef __INT8_HPP__
#define __INT8_HPP__

class Int8: public IOperand
{
public:
    Int8(std::string value);
    eOperandType createTypeViaString(std::string str);
    string toString() const; // string that represents the instance
    eOperandType getType() const; // returns the type of instance
private:
    eOperandType _type;
    string _value;
};

#endif