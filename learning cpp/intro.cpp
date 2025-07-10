// A car game with graphics

// All the globbal variable
#include<iostream>
#include<cmath>
#include<conio.h>
#include<cstdlib>
#include<windows.h>
#include<string>

using namespace std;

// All the header files

// All the classes used

// All the functions useds
void intro(){
	cout<<endl<<endl<<endl<<"\t\t\t\t\t";
	string welcomeMessage = "Welcome to Velocity Rush";
	for(int i = 0; i < welcomeMessage.length() ; i++){
		Sleep(150);
		cout<<welcomeMessage[i];
	}
	cout<<endl<<endl<<endl<<endl;
	string p = "Project By:",n1 = "Mausam Parajuli",n2 = "Himal Bhandari",n3 = "Manav Acharya",n4 = "Mahesh Kapadi";
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < p.length() ; i++){
		Sleep(150);
		cout<<p[i];
	}
	cout<<endl<<endl;
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < n1.length() ; i++){
Sleep(150);
		cout<<n1[i];
	}
	cout<<endl;
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < n2.length() ; i++){
		Sleep(150);
		cout<<n2[i];
	}
	cout<<endl;
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < n3.length() ; i++){
		Sleep(150);
		cout<<n3[i];
	}
	cout<<endl;
	cout<<"\t\t\t\t\t";
	for(int i = 0; i < n4.length() ; i++){
		Sleep(150);
		cout<<n4[i];
	}
	cout<<endl<<endl<<"\t\t\t\t\t"<<"Press enter to move forward :";
	cin.get();
}
void home(){
	cout<<endl<<endl<<endl<<endl;
	cout<<"\t\t\t\t\t\t";
	cout<<"1. Play"<<endl;
	cout<<"\t\t\t\t\t\t";
	cout<<"2. History"<<endl;
	cout<<"\t\t\t\t\t\t";
	cout<<"3. Back"<<endl;
	cout<<"\t\t\t\t\t\t";
	cout<<"3. Tutorial"<<endl;
}

// Main function
int main(){
intro();
	system("cls");
	home();
	
	return 0;
}
lab