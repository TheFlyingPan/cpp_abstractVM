#include <iostream>
#include <string>

#ifndef __IOperand_HPP__
#define __IOperand_HPP__

using namespace std;


class IOperand
{
public:
    enum class eOperandType
    {
        INT8,
        INT16,
        INT32,
        FLOAT,
        DOUBLE,
        BIGDECIMAL
    };

    virtual eOperandType createTypeViaString(std::string str);
    virtual string toString() const = 0; // string that represents the instance
    virtual eOperandType getType() const = 0; // returns the type of instance
    
    virtual IOperand* operator+( const IOperand& rhs ) const = 0; // sum
    virtual IOperand* operator-( const IOperand& rhs ) const = 0; // difference
    virtual IOperand* operator*( const IOperand& rhs ) const = 0; // product
    virtual IOperand* operatorDiv( const IOperand& rhs ) const = 0; // quotient
    virtual IOperand* operatorMod( const IOperand& rhs ) const = 0; // modulo
};

#endif

