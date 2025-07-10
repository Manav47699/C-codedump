//with normal variable

#include <iostream>
#include <string> // Include <string> for std::string type

using namespace std;

int adda() {
    int a = 200;
    ++a;  // Increment a
    return a;  // Return incremented value
}
int addb() {
    static int b=200;
    b++;
    return b;
}

int main(int argc, char const *argv[]) {
    //int a;
    cout << adda() << endl;
    cout << adda() << endl;
    cout << adda() << endl;  // Output will be 201

    cout << addb() << endl;  //201
    cout << addb() << endl;  //202
    cout << addb() << endl;  //203
    
    return 0;

    
}

