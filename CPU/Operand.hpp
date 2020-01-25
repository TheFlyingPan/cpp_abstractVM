#include <string>
#include "../Chipset/Chipset.hpp"
#include "IOperand.hpp"

#ifndef __Operand_HPP__
#define __Operand_HPP__


class Operand: public IOperand
{
private:
    eOperandType _type;
    string _value;
public:
    Operand();
    eOperandType createTypeViaString(std::string str);
    virtual string toString() const = 0; // string that represents the instance
    virtual eOperandType getType() const = 0; // returns the type of instance

    virtual IOperand* operator+( const IOperand& rhs ) const = 0; // sum
    virtual IOperand* operator-( const IOperand& rhs ) const = 0; // difference
    virtual IOperand* operator*( const IOperand& rhs ) const = 0; // product
    virtual IOperand* operatorDiv( const IOperand& rhs ) const = 0; // quotient
    virtual IOperand* operatorMod( const IOperand& rhs ) const = 0; // modulo
};

#endif