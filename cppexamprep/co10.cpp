#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char* str;
    public:
    String()
    {
        str = nullptr;
    }
    String(char *s)
    {
        str = new char[strlen(s)+1];
        strcpy (str, s);

    }
    ~String()
    {
        delete[] str;
    }
    void add(String a, String b)
    {
        strcpy(str, a.str);
        strcat (str, b.str);

    }
    void display ()
    {
        cout << str;
    }

};


int main(int argc, char const *argv[])
{
    String s1("manav");
    String s2("Acharya");
    String s3;
    s3.add(s1, s2);
    s3.display();
    
    return 0;
}

