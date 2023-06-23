/*2. Write a program that generates the following table:
1990 135
1991 7290
1992 11300
1993 16200
Use a single cout statement for all output.*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	//using of single cout statement
int a,b,c,d;
a=1990,b=135;
cout<<left<<setw(5)<<a<<right<<setw(3)<<b<<endl;
a=1991,b=7290;
cout<<left<<setw(5)<<a<<right<<setw(3)<<b<<endl;
a=1992,b=11300;
cout<<left<<setw(5)<<a<<right<<setw(3)<<b<<endl;
a=1993,	b=16200;
cout<<left<<setw(5)<<a<<right<<setw(3)<<b<<endl;
	
	
	
	
	return 0;
}
