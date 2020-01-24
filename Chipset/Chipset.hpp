#ifndef __CHIPSET_HPP__
#define __CHIPSET_HPP__
#include <string>
#include <iostream>
#include "../RAM/RAM.hpp"


using namespace std;
class Chipset
{
private:
    RAM myRam;
public:
    Chipset();
    ~Chipset();
    static string getWords(string ligne);
    static string getVar(string ligne);
    static string getVal(string ligne);
    static string getNumber(string ligne);
    void pushFunction(std::string);
    void popFunction(std::string);
    void clearFunction(std::string);
    void dupFunction(std::string);
    void swapFunction(std::string);
    void dumpFunction(std::string);
    void assertFunction(std::string);
    void addFunction(std::string);
    void subFunction(std::string);
    void mulFunction(std::string);
    void divFunction(std::string);
    void modFunction(std::string);
    void loadFunction(std::string);
    void storeFunction(std::string);
    void printFunction(std::string);
    void exitFunction(std::string);
};

#endif