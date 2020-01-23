#ifndef __INSTRUCTIONS_HPP__
# define __INSTRUCTIONS_HPP__
#include <string>
#include <iostream>
#include "Chipset.hpp"

class Instructions: public Chipset
{
private:
    /* data */
public:
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