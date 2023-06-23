/*. You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying
by 9/5 and adding 32. Write a program that allows the user to enter a floating-point
 number representing degrees Celsius, and then displays the corresponding degrees
Fahrenheit.*/
#include<iostream>
using namespace std;
int main()
{
	//f=(c+32)*(9/5)
float celcius;
cout<<"Enter celcius degrees in points:";
cin>>celcius;
float fehrenheit=(celcius+32)*(9/5);
cout<<"Corresponding value in degrees fehrenheit:"<<fehrenheit;
	
	
	
	
	
	return 0;
}
