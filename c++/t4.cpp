//using typedef and 'using' keyword to create allias
#include <iostream>

#include <string>

//typedef std::string text;
//typedef int number;

using text = std::string;
using number = int;

int main(int argc, char const *argv[])
{
    text name = "Manav";
    number marks= 59;
    std::cout <<name <<'\n'<<marks;
    return 0;
}
