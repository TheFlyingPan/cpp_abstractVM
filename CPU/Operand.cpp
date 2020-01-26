#include "Operand.hpp"
#include "IOperand.hpp"
#include "Int8.hpp"
#include <memory>

IOperand::eOperandType Operand::createTypeViaString(std::string str)
{
    if(str.compare("int8")==0)
        return _type = IOperand::eOperandType::INT8;
    if(str.compare("int16")==0)
        return _type = IOperand::eOperandType::INT16;
    if(str.compare("int32")==0)
        return _type = IOperand::eOperandType::INT32;    
}
string Operand::toString() const // string that represents the instance
{
    return _value;
};

IOperand::eOperandType Operand::getType() const
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
    // IOperand *ptr = new std::unique_ptr>
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
    std::stof(value);
    return 0;
}

IOperand* createDouble(const string& value)
{
    cout << "je suis dans createDouble" << endl;
    std::stod(value);
    return 0;
}

IOperand* createBigDecimal(const string& value)
{
    cout << "je suis dans createBigDecimal" << endl;
    std::stold(value);
    return 0;
}