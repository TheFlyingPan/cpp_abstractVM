#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>
#include <iterator>
#include "Parse.hpp"

using namespace std;

Parse::Parse()
{

};

Parse::~Parse()
{
    
};

void Parse::getWords()
{
    string line = "test un deux trois";
    string arr[4];
    int i = 0;
    
};

// void Parse::getSplit(const std::string& str, Container& cont, char delim = ' ')
// {
//     size_t current, previous = 0;
//     current = str.find(delim);
//     while (current != string::npos) {
//         cont.push_back(str.substr(previous, current - previous));
//         previous = current + 1;
//         current = str.find(delim, previous);
//     }
//     cont.push_back(substr(previous, current - previous));
// };