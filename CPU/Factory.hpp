#include <iostream>
#include <string>
#include "IOperand.hpp"
#include "Operand.hpp"

using namespace std;

class Factory : public IOperand
{
public:
    static IOperand* createOperand(eOperandType type, const string& value);
private:
    IOperand* createInt8(const string& value);
    IOperand* createInt16(const string& value);
    IOperand* createInt32(const string& value);
    IOperand* createFloat(const string& value);
    IOperand* createDouble(const string& value);
    IOperand* createBigDecimal(const string& value);

    eOperandType _type;
    string _value;
};