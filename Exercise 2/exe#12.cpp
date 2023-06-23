#include<iostream>
using namespace std;
int main()
{
	float decpound;
	
	
	cout<<"enter decimal pound:";
	cin>>decpound;
	int pound=static_cast<int>(decpound);
	float decfrac=decpound-pound;
    float shilling=decfrac*20;
    
	cout<<"Eqivalent in old notation:"<<pound<<"."<<shilling;
	return 0;
	
}
