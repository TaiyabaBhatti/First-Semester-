#include<iostream>
using namespace std;
int main()
{
	int fact=1;
	int num;
	cout<<"enter any number:";
	cin>>num;
	while(num>=1)
	{
		fact*=num;
		num--;
		
	}
	cout<<"factorial is:"<<fact;
	
	
	
	
	
	
	
	
	return 0;
}
