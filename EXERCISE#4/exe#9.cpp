#include<iostream>
using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
	
};
int main(){
	int a,b,c;
	time t1;
	cout<<"Enter hours:";
	cin>>a;
	cout<<"Enter minutes:";
	cin>>b;
	cout<<"Enter seconds:";
	cin>>c;
	t1={a,b,c};
	cout<<"\nTime is ="<<t1.hours<<":"<<t1.minutes<<":"<<t1.seconds;	
	long totalsecs=t1.hours*3600 + t1.minutes*60 + t1.seconds;
	cout<<"Corresponding time in seconds:"<<totalsecs;
	
	
	return 0;
}
