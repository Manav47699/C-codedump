//code to find the hypotenious of any rt. angle triangle 

#include <iostream>
#include <cmath>


using namespace std;


int main(int argc, char const *argv[])
{
    int b, p;
    float h;
    float inside_root;
    cout << "Enter the value of p and b";
    cin >> p >> b;
    inside_root = pow(p, 2) + pow(b, 2);
    h = sqrt (inside_root);
    cout << "The value of hypotenious is " << h;
    return 0;
}
