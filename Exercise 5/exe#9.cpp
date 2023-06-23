/*Repeat Exercise 8, but instead of two int variables, have the swap() 
function interchange two struct time values (see Exercise 6).*/
#include<iostream>
using namespace std;
struct time{
	int hour;
	int minute;
	int second;
}; 
time time_to_sec(time t1){
	time sec;
	sec.second=t1.hour*3600+t1.minute*60+t1.second;
	return sec;
}                
time sec_to_time(time t2){
	time hms;
	float hour=t2.second/3600;
	int ih=hour;
	float minute=(hour-ih)*60;
	int iminu=minute;
	float second=(minute-iminu)*60;
	int isec=second;
	hms={ih,iminu,isec};
	return hms;
	
}
void swap(time &x,time &y){
	time z= x;
	x=y;
	y=z;

	
	 
	
	
}

int main(){
time t1;
t1={12,0,0};
time sec=time_to_sec(t1);
time hms=sec_to_time(sec);
cout<<"Time values before swaping:"<<endl;
cout<<"Given time in second:"<<sec.second<<endl;
cout<<"Converted second in time :"<<hms.hour<<":"<<hms.minute<<":"<<hms.second<<endl;
swap(sec,hms);
cout<<"Time values after swaping:"<<endl;
cout<<"Given time in second:"<<sec.second<<endl;
cout<<"Converted second in time :"<<hms.hour<<":"<<hms.minute<<":"<<hms.second<<endl;
	
	
	
	return 0;
}
