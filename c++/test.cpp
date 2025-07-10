#include <iostream>
#include <string> // Include <string> for std::string type

using namespace std;

int plus() {
    int a = 200;
    ++a;  // Increment a
    return a;  // Return incremented value
}

int main(int argc, char const *argv[]) {
    cout << plus();  // Output will be 201
    return 0;
}
