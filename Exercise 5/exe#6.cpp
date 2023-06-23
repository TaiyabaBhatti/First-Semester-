/*Start with the program from Exercise 11 in Chapter 4, “Structures,” which
adds two struct time values. Keep the same functionality, but modify the
program so that it uses two functions. The first, time_to_secs(), takes as
its only argument a structure of type time, and returns the equivalent in
seconds (type long). The second function,secs_to_time(), takes as its only
argument a time in seconds (type long), and returns a structure of type
time.*/
#include<iostream>
using namespace std;
struct time{
	int hour;
	int minute;
	int second;
};
time time_to_secs(time x){
	time a;
	a.second=x.hour*3600+x.minute*60+x.second;
	return a;	
}
time secs_to_time(time y){
	time b;
	float hour=y.second/3600;
	int ih=hour;
	float minute=(hour-ih)*60;
	int iminu=minute;
	float second=(minute-iminu)*60;
	int isec=second;
	b={ih,iminu,isec};
	return b;
	
	
}
int main(){
time t1;
t1={12,0,0};
time sec=time_to_secs(t1);
time hms=secs_to_time(sec);
cout<<"Given time in seconds ="<<sec.second<<endl;	
cout<<"Converted seconds in time ="<<hms.hour<<":"<<hms.minute<<":"<<hms.second;	
	
	
	return 0;
}
