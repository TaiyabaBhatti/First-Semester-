#include<iostream>
using namespace std;
struct phone{
	int area_code;
	int exchange;
	int number;
};
int main(){
	phone p1,p2;
	p1={92,7,2360542};
	p2=p1;
	cout<<"My number is ="<<"("<<p1.area_code<<")"<<p1.exchange<<"-"<<p1.number<<endl;
	cout<<"Enter area code,exchange and number:";
	cin>>p2.area_code>>p2.exchange>>p2.number;
	cout<<"Your number is ="<<"("<<p2.area_code<<")"<<p2.exchange<<"-"<<p2.number;
	
	
	return 0;
}
