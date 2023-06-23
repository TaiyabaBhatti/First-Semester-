/*Task.4 Write a C++ program to declare an integer variable Hours and assign it a value
 of your choice and Convert Hours in terms of minutes.*/
#include<iostream>
using namespace std;
int main ()
{
	int hours;
	cout<<"Time in hours:";
	cin>>hours;
	int minutes=hours*60;
	cout<<"Convert hours into minutes:"<<minutes;
	
	return 0;
}
