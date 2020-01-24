#ifndef __CHIPSET_HPP__
#define __CHIPSET_HPP__
#include <string>
#include <iostream>

using namespace std;

class Chipset
{
public:
    Chipset();
    ~Chipset();
    static string getWords(string ligne);
    static string getVar(string ligne);
    static string getVal(string ligne);
    static string getNumber(string ligne);
    static void pushFunction(std::string);
    static void popFunction(std::string);
    static void clearFunction(std::string);
    static void dupFunction(std::string);
    static void swapFunction(std::string);
    static void dumpFunction(std::string);
    static void assertFunction(std::string);
    static void addFunction(std::string);
    static void subFunction(std::string);
    static void mulFunction(std::string);
    static void divFunction(std::string);
    static void modFunction(std::string);
    static void loadFunction(std::string);
    static void storeFunction(std::string);
    static void printFunction(std::string);
    static void exitFunction(std::string);
};

#endif