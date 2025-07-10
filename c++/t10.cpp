//program to generate random number between 1 and 6
//BUJEKO CHAINA
#include <iostream>
#include <ctime>
#include <cstdlib>


int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int num = (rand()%100) + 1;
    std::cout << num;
    return 0;
}
