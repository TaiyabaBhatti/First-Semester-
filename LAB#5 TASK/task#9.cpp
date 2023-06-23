/*Task# 9 write a program that takes an inter as an input and prints its factorial
Output
Number :  5
Factorial : 120 */
#include<iostream>
using namespace std;
int main()
{
	int x;
	int fact=1;
	cout<<"Enter any number:";
	cin>>x;
	for(int i=x;i>1;i--){
	
	   fact*=i;  }
	cout<<"Factorial :"<<fact;

	
	
	
	return 0;
}
