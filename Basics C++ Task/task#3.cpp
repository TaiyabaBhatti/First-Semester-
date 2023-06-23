/*Task.3 Write a program in C++ to find Size of fundamental data types.*/
#include<iostream>
#include<conio.h>
#include<climits>
using namespace std;
int main()
{
	char ch;
	
	cout<<"Size of int:"<<sizeof(int)<<endl;
	cout<<"Size of short:"<<sizeof(short)<<endl;
	cout<<"Size of long:"<<sizeof(long)<<endl;
	cout<<"Size of char:"<<sizeof(char)<<endl;
	cout<<"Size of float:"<<sizeof(float)<<endl;
	cout<<"Size of double:"<<sizeof(double)<<endl;
	cout<<"Size of bool:"<<sizeof(bool)<<endl;
	cout<<"do you want to find ranges(max-min)(y/n)\n";
	ch=getch();
	if(ch=='y')
	{
		cout<<"max range of int:"<<INT_MAX<<endl;
		cout<<"min range of int:"<<INT_MIN<<endl;
	    cout<<"max range of char:"<<CHAR_MAX<<endl;
	    cout<<"min range of char:"<<CHAR_MIN<<endl;
		cout<<"max range of long:"<<LONG_MAX<<endl;
	    cout<<"min range of long:"<<LONG_MIN<<endl;
	    
}
	
	return 0;
}
