//wrong xa
#include <iostream>
using namespace std;

class mdistance
{
    int m, cm;
    public:
    mdistance(int a, int b)
    {
        m=a;
        cm= b;

    }
    friend int add(mdistance, edistance);

};

class edistance
{
    int feet, inches;
    public:
    edistance(int c, int d)
    {
        feet = c;
        inches = d;

    }
    friend int add(mdistance, edistance);

};

friend int add (mdistance x, edistance y)
{
    
}

int main(int argc, char const *argv[])
{
    

    return 0;
}
