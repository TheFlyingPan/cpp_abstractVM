#ifndef __IO_HPP__
#define __IO_HPP__

using namespace std;

class IO
{
public:
    IO();
    ~IO();
    void fromFile(const char* argv) const;
    void fromInput() const;
};

#endif