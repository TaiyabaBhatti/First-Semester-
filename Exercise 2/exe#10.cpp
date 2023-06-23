#include<iostream>
using namespace std;
int main()
{
	/*  old unit
	1 pound =20 shillings
	1 shilling=12 pence
	new system
	1 pound=100pence
	*/
	int pounds,shillings,pence;
	
	cout<<"Enter pounds:";
	cin>>pounds;
	cout<<"Enter shillings:";
	cin>>shillings;
	cout<<"Enter pence:";
	cin>>pence;
	float x=(float)shillings/20;
	float y=(float)pence/100;
	float decimal_pounds=pounds+x+y;
	cout<<"Decimal pounds:"<<decimal_pounds;
	
	
	
	
	
	
	
	
	
	return 0;
}
