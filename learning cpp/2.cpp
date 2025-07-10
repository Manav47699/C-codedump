//2 methods of declaring an object
#include <iostream>

using namespace std;

class BCT 
{
    int roll;
    float marks;
    public:
    
    void input() 
    {
        cout << "Enter the roll no and the marks";
        cin >> roll >> marks;
    

    }
    void display()
    {
        cout << roll << marks << endl;

    }
}manav, mausam;

int main(int argc, char const *argv[])
{
   // BCT manav;
   // BCT mausam;
    manav.input();
    mausam.input();
    manav.display();
    mausam.display();
    return 0;
}

