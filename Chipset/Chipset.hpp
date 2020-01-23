#ifndef __CHIPSET_HPP__
#define __CHIPSET_HPP__
#include "../IO/IO.hpp"

using namespace std;

class Chipset: public IO
{
public:
    Chipset();
    ~Chipset();
    static string getWords(string ligne);
    static string getVar(string ligne);
    static string getVal(string ligne);
    static string getNumber(string ligne);
};

#endif