#ifndef __CHIPSET_HPP__
#define __CHIPSET_HPP__

using namespace std;

class Chipset
{
public:
    Chipset();
    ~Chipset();
    static string getWords(string ligne);
    static string getVar(string ligne);

};

#endif