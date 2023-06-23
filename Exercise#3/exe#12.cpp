#include<iostream>
using namespace std;
int main()
{
	float decpound;
	
	
	cout<<"enter decimal pound:";
	cin>>decpound;
	int pound=static_cast<int>(decpound);
	float decfrac=decpound-pound;

	cout<<"Eqivalent in old notation:"<<pound<<(decfrac*20)<<(decfrac*100);
	
	
}
