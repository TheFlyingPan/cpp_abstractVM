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
    return 0;
};

IOperand* operator-( const IOperand& rhs ) // difference
{
    return 0;
};

IOperand* operator*( const IOperand& rhs ) // product
{
    return 0;
};

IOperand* operatorDiv( const IOperand& rhs ) // quotient
{
    return 0;
};

IOperand* operatorMod( const IOperand& rhs ) // modulo
{
    return 0;
};

IOperand* createInt8(const string& value)
{
    
    cout << "je suis dans createInt8" << endl;
    return 0;
}

IOperand* createInt16(const string& value)
{
    cout << "je suis dans createInt16" << endl;
    return 0;
}

IOperand* createInt32(const string& value)
{
    cout << "je suis dans createInt32" << endl;
    return 0;
}

IOperand* createFloat(const string& value)
{
    cout << "je suis dans createFloat" << endl;
    return 0;
}

IOperand* createDouble(const string& value)
{
    cout << "je suis dans createDouble" << endl;
    return 0;
}

IOperand* createBigDecimal(const string& value)
{
    cout << "je suis dans createBigDecimal" << endl;
    return 0;
}

// IOperand::~IOperand() 
// {

// };