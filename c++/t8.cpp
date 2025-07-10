//program to find Greates among three numbers and also odd or even using conditional operator

#include <iostream>

using namespace std;
 int main(int argc, char const *argv[])
 {
    int a, b, c, greatest;
    cout << "Enter the value of a, b and c resp";
    cin >> a >>b >>c;
   // greatest = ((a>b) ? (a>c):(c>b) ? a: c) :((b>a) ? (b>c):(c>a) ?  b:c);       wrong
    greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "The greatest number is " << greatest;

    return 0;
 }
 









/*
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter a number";
    cin>> num;

    (num % 2 == 0) ? cout << "Even" : cout << "odd";  //Bracket na deda ni chalxa


    return 0;
}
*/