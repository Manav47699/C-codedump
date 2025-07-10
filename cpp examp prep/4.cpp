//simple operator overloading gareko xa tara mathi ko code ko login chai mileko chaina
// WAP with class date that will add two dates using operator overloading
/*
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
    Date operator+(Date d)
    {
        Date temp;
        temp.day= day + d.day;
        temp.month = month + d.month;
        temp.year = year + d.year;
        return temp;
    }
};

int main ()
{
    Date d1, d2, d3;
    d1.input();
    d1.display();
    d2.input();
    d2.display();
    d3 = d1+d2;
    d3.display();
    return 0;
    
}
*/

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
    Date operator+(Date d)
    {
        Date temp;
        temp.day= day + d.day;
        temp.month = month + d.month+temp.day/30;
        temp.day = temp.day%30;
        temp.year = year + d.year + temp.month/12;
        temp.month = temp.month%12;
        return temp;
    }
};

int main ()
{
    Date d1, d2, d3;
    d1.input();
    d1.display();
    d2.input();
    d2.display();
    d3 = d1+d2;
    d3.display();
    return 0;
}