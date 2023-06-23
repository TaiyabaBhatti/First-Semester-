/*Revise the four-function fraction calculator from Exercise 12, Chapter 4,
so that it uses functions for each of the four arithmetic operations.
They can be called fadd(), fsub(),fmul(), and fdiv().Each of these 
functions should take two arguments of type struct fraction, and return an
argument of the same typ*/
#include<iostream>
using namespace std;
struct fraction{
	int nume;
	int deno;
};
fraction fadd(int x,int y){
	fraction ans={x,y};
	return ans;
	
}
int main(){
	fraction f1,f2;
	int a,b,c,d;
	char ch;
	cout<<"Enter first fraction:";
	cin>>a>>ch>>b;
	cout<<"Enter second fraction:";
	cin>>c>>ch>>d;
	f1=fadd(a,b);
	f2=fadd(c,d);
	cout<<f1.nume*f2.deno+f1.nume*f2.nume*f1.deno<<"/"<<f1.deno*f2.deno;
	return 0;
}
