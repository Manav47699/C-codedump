#include <iostream>
using namespace std;

class A
{
    
    int val1;
    public:
    A(int a)
    {
        val1 = a;
    }
    friend int sum (A,B);

};
class B
{
    
    int val2;
    public:
    B(int b)
    {
        val2 = b;

    }
    friend int sum (A, B);


};

int sum (A x, B y)
{
    return (x.val1 + y.val2);
}



int main(int argc, char const *argv[])
{
    A a(5);
    B b(10);
    cout << sum(a,b);
    
    return 0;
}
