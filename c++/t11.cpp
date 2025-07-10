//overloaded functions
#include <iostream>

void cricketor (){
    std::cout<< "You are a cricketor";
}

void cricketor (std::string quality1){
    std::cout << "YOu are a "<< quality1 << "cricketor";
}

void cricketor (std::string quality1, std::string quality2){
    std::cout << "YOu are a "<< quality1 << quality2 << "cricketor";
}

int main(int argc, char const *argv[])
{
    cricketor();
    cricketor("excellent");
    cricketor("perfectely good");
    return 0;
}
