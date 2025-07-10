#include<iostream>
#include<string>
using namespace std;

class String{
private:
int length;
char* name;
public:

string ()
{
    length=0;
    name = new char [length = 1];

}
/*
string (char*s)
{
    length = strlen(s);
    name = new char [length=1];
    strcpy(name,s);
}
*/
string (char s)
{
    length = s;
    name = new char[length];
}

~string() 
{
    delete[] name;
}


void display()
{
    cout << "name" << name;
}

};

int main(int argc, char const *argv[])
{
    String S1("Manav");
    String S2("Acharya");
    S1.display();
    S2.display();
    return 0;
}
