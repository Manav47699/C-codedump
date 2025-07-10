//pointer to pointer
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 5;
    int* b = &a;
    int** c = &b;

    cout << " The adress of  b is "<< &b << "\n";
cout << "The address of b is" << c << "\n";
cout << "The value at the address of c is" << *c << "\n";
cout << "The value at the addressvalue of address of cis" << **c<< "\n";
    return 0;
}
