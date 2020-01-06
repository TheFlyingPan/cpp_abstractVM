#ifndef __PARSE_HPP__
#define __PARSE_HPP__

using namespace std;

class Parse
{
public:
    Parse();
    ~Parse();
    void getWords(string line);
    void fromInput();
    void fromFile(const char* argv) const;
};

#endif