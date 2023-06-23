#include<iostream>
#include<conio.h>
using namespace std;
int main(){
     char ch;
     float F,C;
     ch=getch();
     (ch=='1')?cout<<"Enter 1 to convert fahrenheit to celsius."<<ch:cout<<"Enter 2 to convert celsius to fahrenheit:"<<ch;
	if(ch=='1'){
		cout<<"\nenter temperature in fahrenheit:";
		cin>>F;
		float cels=(F-32)*5/9;
		cout<<"In celsius that's :"<<cels;}
	else
	{
			cout<<"\nenter temperature in celcius:";
		cin>>C;
		float fahren=(F+32)*9/5;
		cout<<"In Fahrenheit that's :"<<fahren;
	}
		
	
	
	
	
	
	
	return 0;
}
