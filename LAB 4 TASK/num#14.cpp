/*Task #14: Take three numbers from the user and print the greatest number*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 1st number:";
	cin>>a;
	cout<<"Enter 2nd number:";
	cin>>b;
	cout<<"Enter 3rd number:";
	cin>>c;
	if(a>b && a>c)
	cout<<"The greatest:"<<a;
	else if(b>a && b>c)
	cout<<"The greatest:"<<b;
	else if(c>a && c>b)
	cout<<"The greatest:"<<c;
	
	
	
	
	
	
	return 0;
}
