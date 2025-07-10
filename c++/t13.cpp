//rock paper scissors game (not completed)

#include <iostream>

using namespace std;

char userinput ();
char computerinput();
void winner();
void display_winner();

int main(int argc, char const *argv[])
{
    char playerchoice;
    char computerchoice;

    

    playerchoice = userinput();
    //computerchoice = computerinput();
    return 0;
}

char userinput (){
    char playerchoice;
    cin >> playerchoice;

    do
    {
        cout << "enter r for rock, s for scissors and p for paper.";
    } while (playerchoice != 'r' || playerchoice != 'p' || playerchoice != 's');
    


    return playerchoice;
 
}
char computerinput(){



}
void winner(){

}
void display_winner(){

}