/*Task # 5(a): Consider an integer value give:
int num=5;
display the square of the number given when the spacebar key on the keyboard will 
pressed.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num;
	char space;
	cout<<"Enter any number:";
	cin>>num;
     space=getch();
     (space==' ')?cout<<num*num:cout<<"invalid input.";
	
	
	return 0;
	
	
}

