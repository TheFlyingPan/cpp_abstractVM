#include "Parse.cpp"
#include <iostream>

int main(int argc, char** argv)
{
    Parse swag;
    swag.fromFile(argv[1]);
    return 0;
}