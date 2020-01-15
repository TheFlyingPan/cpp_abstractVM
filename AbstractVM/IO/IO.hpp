#ifndef __IO_HPP__
#define __IO_HPP__
#include <map>
#include <string>
#include <iostream>

#include "../Chipset/Chipset.hpp"
#include "../Memory/instructions.hpp"

#define PUSH "push"
#define COMMENT "comment"

class IO
{
private:
    std::map<std::string, void (*)(std::string)> mDict;
    // typedef void (*voidfunc)();
    // map<const string, voidfunc> mDict;
    //     mDict["push"] = (voidfunc) &(Instruction);
    //     mDict["comment"] = (voidfunc) &bar;
public:
    IO();
    virtual ~IO();
    void fromFile(const char* argv) const;
    void fromInput() const;
};

#endif