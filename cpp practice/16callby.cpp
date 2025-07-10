//yo diutai wrong
#include <iostream>
using namespace std;
/*
void swap (int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
*/
/*
int swap ( int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    return a,b;
}
*/
int main(int argc, char const *argv[])
{
    int a = 5, b= 4;
    cout << "Before swapping a and b " << a << b <<"\n";
    swap (a,b); 
    cout << "After swapping a and b " << a << b << "\n";

    return 0;
}
