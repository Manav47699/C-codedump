//yo code run garera ra output haru hera ani bujna khoja kasari ca=haldo raxa bhanera
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int marks[]  = { 32, 99, 91, 51};
    int* p = marks;
    cout << *p << endl;
    cout << *(p++) << endl;
    cout << *p << endl;
    cout << *p << endl;
    cout << *(p++) << endl;
    cout << *p << endl;
    return 0;
}
