#include <iostream>
#include <string>
#include "eOperandType.hpp"

#ifndef __IOperand_HPP__
#define __IOperand_HPP__

using namespace std;

class IOperand
{
public:
    virtual string toString() const = 0; // string that represents the instance
    virtual eOperandType getType() const = 0; // returns the type of instance
    
    virtual IOperand* operator+( const IOperand& rhs ) const = 0; // sum
    virtual IOperand* operator-( const IOperand& rhs ) const = 0; // difference
    virtual IOperand* operator*( const IOperand& rhs ) const = 0; // product
    virtual IOperand* operatorDiv( const IOperand& rhs ) const = 0; // quotient
    virtual IOperand* operatorMod( const IOperand& rhs ) const = 0; // modulo
    
    virtual ~IOperand() {}
private:
    eOperandType _type;
    string _value;
};

#endif

