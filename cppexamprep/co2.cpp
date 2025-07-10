#include <iostream>
#include <cstring>
using namespace std;


class Book 
{
    private:
    char* title;
    int price;
    public:
    Book (char *t, int p)
    {
        title = new char[strlen(t+1)];
        strcpy(title, t);
        price = p;
    }

    Book(Book &b)
    {
        title = b.title;
        price = b.price;
    }

    ~Book()
    {
        delete[] title;
    }

    /*
    Book (char t, int p)
    {
        title = t;
        price = p;
        
    }
    */
   /*
   Book(const char* t, int p)
    {
        strncpy(title, t, sizeof(title) - 1); // Copy the string safely
        title[sizeof(title) - 1] = '\0'; // Ensure null termination
        price = p;
    }
    */

    void display()
    {
        cout << title << price;

    }

};




int main(int argc, char const *argv[])
{
    Book b1("Manav", 10000);
    b1.display();
    cout << endl;
    Book b2(b1);
    b2.display();
    return 0;
}















































//this is without dynamic memory 
/*
class Book 
{
    private:
    char title[30];
    int price;
    public:
    /*
    Book (char t, int p)
    {
        title = t;
        price = p;
        
    }
    
   Book(const char* t, int p)
    {
        strncpy(title, t, sizeof(title) - 1); // Copy the string safely
        title[sizeof(title) - 1] = '\0'; // Ensure null termination
        price = p;
    }

    void display()
    {
        cout << title << price;

    }

};




int main(int argc, char const *argv[])
{
    Book b1("Manav", 10000);
    b1.display();
    return 0;
}
*/