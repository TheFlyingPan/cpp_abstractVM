#ifndef __IO_HPP__
#define __IO_HPP__
#include "../Chipset/Chipset.cpp"
using namespace std;

class IO
{
private:
    const map<const string, const string> mDict = {
        {"comments", "commentsFunction"},
        {"push", "pushFunction"},
        {"pop", "popFunction"},
        {"error", "errorFunction"},
        {"clear", "clearFunction"},
        {"dup", "dupFunction"},
        {"swap", "swapFunction"},
        {"dump", "dumpFunction"},
        {"assert", "assertFunction"},
        {"add", "addFunction"},
        {"sub", "subFunction"},
        {"mul", "mulFunction"},
        {"div", "divFunction"},
        {"mod", "modFunction"},
        {"load", "loadFunction"},
        {"store", "storeFunction"},
        {"print", "printFunction"},
        {"exit", "exitFunction"}
        };
public:
    IO();

    void fromFile(const char* argv) const;
    void fromInput() const;

    virtual ~IO();
};

#endif