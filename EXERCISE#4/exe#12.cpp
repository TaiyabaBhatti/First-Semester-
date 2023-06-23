/*Revise the four-function fraction calculator program of Exercise 12 in 
Chapter 3 so that each fraction is stored internally as a variable of type 
struct fraction, as discussed in Exercise 8 in this chapter,*/
#include<iostream>
using namespace std;
struct fraction{
	int nume;
	int deno;
};

struct ans{
	fraction result;
	
};
int main(){
	ans f3;
	int a,b,c,d;
	char ch,op;
	fraction f1,f2;
	cout<<"Enter first fraction:";
	cin>>a>>ch>>b;
	cout<<"\nEnter second fraction:";
	cin>>c>>ch>>d;
	f1={a,b};
	f2={c,d};
	cout<<"Enter operator:";
	cin>>op;
	switch(op){
	case '+':
	f3.result.nume=(f1.nume*f2.deno)+(f1.deno*f2.nume);
	f3.result.deno=f1.deno*f2.deno;
	cout<<"\nAnswer is ="<<f3.result.nume<<"/"<<f3.result.deno;break;
	case '-':
	f3.result.nume=(f1.nume*f2.deno)-(f1.deno*f2.nume);
	f3.result.deno=f1.deno*f2.deno;
	cout<<"\nAnswer is ="<<f3.result.nume<<"/"<<f3.result.deno;break;
	case '*':
	f3.result.nume=f1.nume*f2.nume;
	f3.result.deno=f1.deno*f2.deno;	
	cout<<"\nAnswer is ="<<f3.result.nume<<"/"<<f3.result.deno;break;
	case '/':
	f3.result.nume=f1.nume*f2.deno;
	f3.result.deno=f1.deno*f2.nume;
	cout<<"\nAnswer is ="<<f3.result.nume<<"/"<<f3.result.deno;break;
	
}
	
	return 0;
}
