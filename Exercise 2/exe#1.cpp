3/*#1. Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to
enter a number of gallons, and then displays the equivalent in cubic feet*/
#include<iostream>
using namespace std;
int main()
{
	//1 cufoot=7.481 gallons
	//7.481 gallon=1cufoot
	//for example   cufoot=2gallons  then 2gallons/7.481=cufoot
int gallon,cufeet;
cout<<"Enter number of gallons:";
cin>>gallon;

cout<<"Equivalent in cubic feet:"<<(float)(gallon/7.481);
	
	
	return 0;
}
