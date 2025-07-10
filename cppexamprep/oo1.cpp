//op overload na gare kasari garne bhanera pani lekheko xa hai
#include <iostream>
using namespace std;

class Date
{

    private:
    int day, month, year;
    public:

    Date()
    {
        day=0; month=0; year=0;
    }

    Date (int d, int m, int y)
    {
        day=d;
        month=m;
        year=y;


    }
/*

    Date operator + (Date d)
    {
        Date temp;
        temp.day = day+d.day;
        temp.month = day+d.month;
        temp.year = day+d.year;
        return temp;
    }
*/

    Date add(Date d1, Date d2)
    {
        Date temp;
        temp.day = d1.day+ d2.day;
        temp.month = d1.day+d2.month;
        temp.year = d1.day+d2.year;
        return temp;
    }
    void display()
    {
        cout << day << endl <<month;
    }

};

int main(int argc, char const *argv[])
{
    Date d1(1,2,3);
    Date d2(1,1,1);
    //Date d3 = d1+d2;
    Date d3 = d3.add(d1,d2);
    d3.display();

    
    return 0;
}
