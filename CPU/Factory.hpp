#include <iostream>
#include <string>
#include "IOperand.hpp"

using namespace std;

class Factory : public IOperand
{
public:
    Factory();
    ~Factory();
    static IOperand* createOperand(eOperandType type, const string& value);
private:
    IOperand* createInt8(const string& value);
    IOperand* createInt16(const string& value);
    IOperand* createInt32(const string& value);
    IOperand* createFloat(const string& value);
    IOperand* createDouble(const string& value);
    IOperand* createBigDecimal(const string& value);

    eOperandType type;
    string value;
};