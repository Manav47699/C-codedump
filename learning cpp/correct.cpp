#include <iostream>
#include <cstring>  // For strlen, strcpy

using namespace std;

class MyString {
private:
    int length;
    char* name;
public:
    // Default constructor
    MyString() : length(0), name(nullptr) {}

    // Constructor taking a C-style string
    MyString(const char* s) {
        length = strlen(s);
        name = new char[length + 1];
        strcpy(name, s);
    }

    // Copy constructor
    MyString(const MyString& other) {
        length = other.length;
        name = new char[length + 1];
        strcpy(name, other.name);
    }

    // Destructor
    ~MyString() {
        delete[] name;
    }

    // Display method
    void display() const {
        if (name) {
            cout << name << endl;
        } else {
            cout << "Empty string" << endl;
        }
    }

    // Assignment operator
    MyString& operator=(const MyString& other) {
        if (this == &other) return *this; // Self-assignment check
        delete[] name; // Free existing resource

        length = other.length;
        name = new char[length + 1];
        strcpy(name, other.name);

        return *this;
    }
};

int main() {
    MyString S1("Manav");
    MyString S2("Acharya");

    S1.display();
    S2.display();

    return 0;
}
