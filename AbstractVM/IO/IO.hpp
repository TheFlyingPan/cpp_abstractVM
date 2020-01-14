#ifndef __IO_HPP__
#define __IO_HPP__
#include "../Chipset/Chipset.cpp"
#include <map>
#include <string>
#include <iostream>
using namespace std;

class IO
{
private:
    // typedef void (*voidfunc)();
    map<const string, voidfunc> mDict;
    //     mDict["push"] = (voidfunc) &(Instruction);
    //     mDict["comment"] = (voidfunc) &bar;
public:
    IO();

    void fromFile(const char* argv) const;
    void fromInput() const;

    virtual ~IO();
};

#endif