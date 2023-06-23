/*Write a function called hms_to_secs() that takes three int values—for
 hours, minutes,and seconds—as arguments, and returns the equivalent time
in seconds (type long).Create a program that exercises this function by
repeatedly obtaining a time value in hours, minutes, and seconds from the
 user (format 12:59:59), calling the function, and displaying the value 
 of seconds it returns.*/
 #include<iostream>
 using namespace std;
 long hms_to_sec(int a,int b,int c){
 	long second=a*3600+b*60+c;
 	return second;
 }
 int main(){
 	int hou,min,sec;
 	char ch;
 	cout<<"Enter hour ,minutes and second:";
 	cin>>hou>>ch>>min>>ch>>sec;
 	cout<<"Given time in seconds:"<<hms_to_sec(hou,min,sec);
 	return 0;
 }
