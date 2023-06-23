/*Task # 6   Write a program that calculates 6^5. 
Declare your own function to do this.*/
#include<iostream>
using namespace std;
int mult;
int power(int num,int pow){
    int multi=1;
	while((pow)>=1){
	multi*=num;
	pow--;}
	return multi;
}

int main(){
	int number,pow;
	cout<<"Enter number:";
	cin>>number;
   cout<<"Enter pow:";
   cin>>pow;
   cout<<"Calculate power raise to a number:"<<power(number,pow);
	
	
	
}
