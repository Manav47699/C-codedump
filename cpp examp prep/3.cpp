//inhertance qn 4

#include <iostream>
using namespace std;

class Student
{
   protected: 
  char name[30];
  public:
  void input ()
  {
      cout <<"Enter the name of the student" << endl;
      cin>> name;
  }
  void display ()
  {
      cout << name;
  }
};

class Test: public Student
{
    protected:
   int marks[5];                                                                          //
   public:
   void inmarks()                                                                         //yo function
   {
       cout <<"enter the marks" << endl;                                           
       for (int i=0; i<5; i++)
       {
           cin >> marks[i];
       }
   }
   void dismarks()
   {
       for (int i=0; i<5; i++)
       {
           cout << marks[i];
       }
   }
    
};
class Result: public Test
{
    float calculate;
    public:
    
    float incal()                                                              //yo function
    {
        int sum=0;
    for (int i = 0; i < 5; i++) {
            sum += marks[i];
        }
        calculate = (float)sum/5;
        return calculate;
    }
    void discal()
    {
        cout << calculate;
    }
    
};


int main()
{
    Result r;
    r.input();       // Input student name
    r.inmarks();     // Input marks
    r.incal();       // Calculate average
    r.display();     // Display student name
    r.dismarks();    // Display marks
    r.discal();      // Display average

    return 0;
}


