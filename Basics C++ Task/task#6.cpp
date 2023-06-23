/*Task.6 Write three C++ statements to print the asterisk pattern as shown below.

*****
*****
*****     */
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"*****\n*****\n*****\n";
	cout<<"do you want to solve with another method(y/n)";
	ch=getche();
	if(ch=='y'){
		cout<<endl;
		for(int a=1;a<=3;a++){
			for(int b=1;b<=5;b++){
			
			cout<<"*";}
			cout<<endl;
		}
				
		}
	
	
	
	
	
	
	return 0;
}
