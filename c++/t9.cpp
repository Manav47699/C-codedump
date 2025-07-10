//using while loop

#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    std::string name;
    while (name.empty())
    {
        cout << "Enter a name to continue the program";
       //cin >> name;
        getline (cin , name);  //'cin' garo bhane hamile space pachadi deko input lai display gardaina tara getline le chai garcha
    }

cout << "You have succesfully continued the program " << name;
    
    return 0;
}
