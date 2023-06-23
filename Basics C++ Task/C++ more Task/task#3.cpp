/*Task # 3 Write a C++ program to swap two variables*/
#include<iostream>
using namespace std ;
int main()
{
	int x=3;
	int y=5;
	cout<<"Before swapping:"<<endl;
	cout<<"X="<<x<<"\t"<<"Y="<<y<<endl;
	cout<<"After swapping :"<<endl;
	int temp=x;
	x=y;
	y=temp;
	cout<<"X="<<x<<"\t"<<"Y="<<y;
		
	return 0;
}
