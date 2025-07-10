//multiple inheritance (insight ko 2 no.)
//sabai class ko function saru ko name same rakhna man lagema pani mailxa
// Student::input(); bhanera aru class ma call garna milo nita
#include <iostream>

using namespace std;

class Student
{
    char name[30];
    int age;
    public:
    void inputs ()
    {
        cout << "Enter name and age of student" << endl;
        cin >> name >> age;
    }
    
    void displays ()
    {
        cout << name << age;
    }
    
};

class Employee
{
    char name[30];
    int age;
    public:
    void inpute ()
    {
        cout << "Enter name and age of employee" << endl;
        cin >> name >> age;
    }
    
    void displaye ()
    {
        cout << name << age;
    }
    
};

class Manager : public Student, public Employee
{
    char manager[10];
    public:
    void input ()
    {
        inputs();
        inpute();
        cout << "Who is the manager?"<< endl;
        cin >> manager;
    }
    void display ()
    {
        displays();
        displaye();
        cout << manager;
        
    }
    
};

int main ()
{
    Manager obj;
    obj.input();
    obj.display();
    return 0;

    
}