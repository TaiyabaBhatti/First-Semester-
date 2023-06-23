#include<iostream>
#include<conio.h>
using namespace std;
double power(double num,int p=2){
	   if(p>1)
	   return num*power(num,p-1);
	
}
int main(){
	   
	   int a,b;
	   char ch;
	   cout<<"value of number:";
	   cin>>a;
	   cout<<"do you want to take power:";
	   ch=getche();
	   if(ch=='y'){
	   cout<<endl;
	   cout<<"enter power:";
	   cin>>b;
	   cout<<power(a,b);}
	   else
	   cout<<endl;
	   cout<<power(a);
	   
	   
	
	
	
	
	return 0;
}
