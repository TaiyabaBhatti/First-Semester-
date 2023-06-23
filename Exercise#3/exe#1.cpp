/*write a programme to generate table of given number in 10 columns and 20 rows*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num;

	cout<<"Enter any number:";
	cin>>num;
	for(int a=1;a<=200;a++){
	int b=num*a;
	int c=num*10;
	if(b%c==0)
	cout<<setw(5)<<num*a<<endl;
	else
	cout<<setw(5)<<num*a;
}

	
	return 0;
}

