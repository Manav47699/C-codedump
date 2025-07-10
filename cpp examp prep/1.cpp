//yesma dynamic memory kasari use garne bhanera xa + assingment operator ie = lai overload ni gareko xa
/*
// Constructor
    Book(const char *t, int p) {
        // Allocate memory for title and copy the string
        title = new char[strlen(t) + 1]; // +1 for the null terminator
        strcpy(title, t);
        price = p;
    }
*/

/*
#include <iostream>

using namespace std;

class Book {
    char *title;
    int price;
    public:
    Book(char t, int p)
    {
        title = t;
        price = p;
    }
    ~Book()
    
   // void input ()
    //{
    //    cin >> title [4];
     //   cin >> price;
   // }
    void display 
    {
        cout << title;
        cout << price;
        
    }
    
};



int main ()
{
    Book b("Manav", 30);
    b.display;
    return 0;
}

*/



#include <iostream>
#include <cstring> // For strlen and strcpy

using namespace std;

class Book {
    char *title; // Pointer to dynamically allocated memory for title
    int price;
public:
    // Constructor
    Book(const char *t, int p) {
        // Allocate memory for title and copy the string
        title = new char[strlen(t) + 1]; // +1 for the null terminator
        strcpy(title, t);
        price = p;
    }
    
    // Destructor
    ~Book() {
        // Free the allocated memory
        delete[] title;
    }
    
    // Copy constructor
    Book(const Book &other) {
        // Allocate new memory and copy the string
        title = new char[strlen(other.title) + 1];
        strcpy(title, other.title);
        price = other.price;
    }
    
    // Assignment operator
    Book& operator=(const Book &other) {
        if (this == &other) {
            return *this; // Self-assignment check
        }
        
        // Free the existing memory
        delete[] title;
        
        // Allocate new memory and copy the string
        title = new char[strlen(other.title) + 1];
        strcpy(title, other.title);
        price = other.price;
        
        return *this;
    }
    
    // Display function
    void display() const {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Create a Book object
    Book b("Manav", 30);
    
    // Call the display method
    b.display();
    
    // Create another Book object using the copy constructor
    Book b2(b);
    b2.display();
    
    // Assign one book to another using the assignment operator
    Book b3("Temp", 0);
    b3 = b;
    b3.display();
    
    return 0;
}