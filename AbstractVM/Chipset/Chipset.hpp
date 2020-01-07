#ifndef __CHIPSET_HPP__
#define __CHIPSET_HPP__

using namespace std;

class Chipset
{
public:
    Chipset();
    ~Chipset();
    void getWords(string line) const;
    void fromFile(const char* argv) const;
    void getVar(string line) const;
};

#endif