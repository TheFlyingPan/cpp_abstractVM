#include "IOperand.hpp"

 string IOperand::toString() const // string that represents the instance
 {
    return _value;
 };

eOperandType IOperand::getType() const
{   
    return _type;
};

IOperand* operator+( const IOperand& rhs ) // sum
{

};

IOperand* operator-( const IOperand& rhs ) // difference
{

};

IOperand* operator*( const IOperand& rhs ) // product
{

};

IOperand* operatorDiv( const IOperand& rhs ) // quotient
{

};

IOperand* operatorMod( const IOperand& rhs ) // modulo
{

};

IOperand* createInt8(const string& value)
{

}

IOperand* createInt16(const string& value)
{

}

IOperand* createInt32(const string& value)
{

}

IOperand* createFloat(const string& value)
{

}

IOperand* createDouble(const string& value)
{

}

IOperand* createBigDecimal(const string& value)
{

}

IOperand::~IOperand() 
{

};