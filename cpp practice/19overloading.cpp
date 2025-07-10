//wrong xa yr
#include <iostream>
using namespace std;
#define pi 3.1425

float volume (float l, float b, float h){
    float volume;
    volume = l * b * h;
    return volume;
}

int volume (int r, float h) {
    float volume;
    volume = pi * r * r *h;
    return volume;
}

int main(int argc, char const *argv[])
{
    float l, b, h;
    int r;
    cout << "Enter the length, breadth, height and radius respectively";
    cin >> l, b, h, r;
    cout << "The volume of a cube is " << volume(l,b,h);
    cout << "The volume of cylinder is " << volume(r,h);

    
    return 0;
}
