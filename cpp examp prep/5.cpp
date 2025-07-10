//Same program as 4.cpp but without using operator overloading

// WAP with class date that will add two dates without using operator overloading
#include <iostream>
using namespace std;

class Date 
{
    int day, month, year;
    public:
    void input()
    {
        cout << "Enter the day month and year"<< endl;
        cin >> day >> month >> year;
    }
    void display ()
    {
        cout << year << month << day<< endl;
    }
    void add(Date d1, Date d2)
    {
        day = d1.day + d2.day;
        month = d1.month + d2.month;
        year = d1.year + d2.year;
    }
};
int main ()
{
    Date d1, d2, d3;
    d1.input();
    d1.display();
    d2.input();
    d2.display();
    d3.add(d1, d2);
    d3.display();
    return 0;
    
}












