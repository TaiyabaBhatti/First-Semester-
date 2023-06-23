/*Task # 8 Write a program that prints the table of number 5 up to 15
 (i.e 1*5=5 ……… 15*5=75)*/
 #include<iostream>
 #include<iomanip>
 using namespace std;
 int main()
 {
 	int x=5;
 	int n=1;
 	while(n<=15){
	 
 	cout<<setw(2)<<n<<"*"<<x<<"="<<n*x<<endl;
 	n++;
 }
 	
 	
 	
 	
 	return 0;
 }
