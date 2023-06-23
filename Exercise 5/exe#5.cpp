#include<iostream>
using namespace std;
long hms_to_sec(int a,int b,int c){
	long second=a*3600+b*60+c;
	return second;
	
}
int main(){
	int hou,minu,sec;
	char ch;
	cout<<"Enter hours,minutes and seconds:";
	cin>>hou>>ch>>minu>>ch>>sec;
	cout<<"Time in second:"<<hms_to_sec(hou,minu,sec);
	
	
	
	
	
	
	
	return 0;
}
