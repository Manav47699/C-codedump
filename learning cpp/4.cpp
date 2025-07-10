//arry of object wala problem NOTE-> do while loop nai chalunu pardo raxa yr


/*
int main(int argc, char const *argv[])
{
    char yesorno;
    int a[100];
    for (int i = 0; i != 'a'; i++)
    {
        cout <<"Enter the marks of student number " << i+1 << endl;
        cin >> a[i++];
        cout << "The marks is = " << a[i++] << endl;
        cout << "Do you want to continue?";
        cin >> yesorno;
        if (yesorno = 'n')
        {
            i=='a';
        }
        
    }
    
    return 0;
}
*/

#include <iostream>

using namespace std;

int main()
{
    char yesorno;
    int a[100];
    int i = 0; // Initialize index variable

    do {
        cout << "Enter the marks of student number " << i + 1 << ": ";
        cin >> a[i];
        cout << "The marks are = " << a[i] << endl;
        
        cout << "Do you want to continue? (y/n): ";
        cin >> yesorno;
        
        i++; // Increment index after input
        
    } while (yesorno == 'y' && i < 100); // Continue if 'y' and index is within bounds

    return 0;
}
