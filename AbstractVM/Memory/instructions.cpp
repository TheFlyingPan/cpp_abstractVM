#include <stack> 
#include <iostream> 
#include <map>
#include "instructions.hpp"

using namespace std;

instructions::instructions()
{}

instructions::~instructions()
{
    //do nothing
}

void instructions::commentsFunction()
{
    cout << "bonsoir comment" << endl;
}

void instructions::pushFunction(string m){
    cout << m << endl;
}