#include <iostream>
using namespace std;

class Time {
    


private:
    int hr, min, sec;
public:

Time()
{
    hr = 0;
    min = 0;
    sec = 0;
}
Time (int h, int m, int s)
{
    hr = h;
    min = m;
    sec = s;

}

void add(Time t1, Time t2)
{

    
    sec = t1.sec + t2.sec;
    min = t1.min + t2.min + sec/60;
    sec = sec%60;
    hr = t1.min + t2.min + min/60;
    min = min %60;
    //cout << hr << min << sec << endl;


};

void display()
{
    cout << hr << endl << min << endl << sec;

}


};


int main(int argc, char const *argv[])
{
    Time t1(1,1,1);
    Time t2(2,2,2);
    t1.display();
    cout << endl;
    t2.display();
    cout << endl;
    Time t3;
    t3.add(t1, t2);
    t3.display();


    
    return 0;
}
