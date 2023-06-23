#include<iostream>
using namespace std;
struct date{
	int day;
	int month;
	int year;
};
int main(){
	int d,m,y;
	cout<<"Enter the values:";
	cin>>d>>m>>y;
	date D={d,m,y};
	cout<<D.day<<"/"<<D.month<<"/"<<D.year;
	
	
	
}
