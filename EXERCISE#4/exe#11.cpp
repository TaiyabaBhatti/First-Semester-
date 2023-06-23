#include<iostream>
using namespace std;
struct time{
	int hour_v;
	int minute_v;
	int second_v;
};
int main(){
	int h1,m1,s1,h2,m2,s2;
	char ch ;
	int time_value1,time_value2;
	cout<<"Enter 1st value of time:";
	cin>>h1>>ch>>m1>>ch>>s1;
	cout<<"\nEnter 2nd value of time:";
	cin>>h2>>ch>>m2>>ch>>s2;
	
	time t1,t2;
	t1={h1,m1,s1};
	t2={h2,m2,s2};
	
	int sec_v1=t1.hour_v*3600 + t1.minute_v*60 + t1.second_v; 
	int sec_v2=t2.hour_v*3600 + t2.minute_v*60 + t2.second_v;
	
	float total_sec=sec_v1 + sec_v2;
	float f_hou=total_sec/3600;  //5.100
    int i_hou=f_hou;     //5
	float f_minu=(f_hou-i_hou)*60;   //5.100 - 5 =0.100*60=6.0
	int i_minu=f_minu;
	float f_sec=(f_minu-i_minu)*60;
	int i_sec=f_sec;
	
	time t3={i_hou,i_minu,i_sec};
	cout<<"Recuired time is ="<<t3.hour_v<<":"<<t3.minute_v<<":"<<t3.second_v;
	
	
	return 0;
}
