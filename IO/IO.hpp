#ifndef __IO_HPP__
#define __IO_HPP__
#include <map>
#include <string>
#include <iostream>

#include "../Chipset/Chipset.hpp"
#include "../Chipset/instructions.hpp"

#define PUSH "push"
#define POP "pop"
#define CLEAR "clear"
#define DUP "dup"
#define SWAP "swap"
#define DUMP "dump"
#define ASSERT "assert"
#define ADD "add"
#define SUB "sub"
#define MUL "mul"
#define DIV "div"
#define MOD "mod"
#define LOAD "load"
#define STORE "store"
#define PRINT "print"
#define EXIT "exit"

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