/*Task # 4(a): Write a program that will ask the user to enter any number and the 
program checks whether the entered number is  a positive number or negative number. */
#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter any number:";
	cin>>num;
	if((num>0)&&(num!=0))
	cout<<"Entered number is positive.";
	else if(num<0)
	cout<<"Entered number is negative.";
	else
	cout<<"entered number is null.";
	
	
	return 0;
	
	
   }   
