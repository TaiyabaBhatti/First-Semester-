/*Start with the fraction-adding program of Exercise 9 in Chapter 2, “C++ 
Programming Basics.” This program stores the numerator and denominator of
two fractions before adding them, and may also store the answer, which 
is also a fraction. Modify the program so that all fractions are stored 
in variables of type struct fraction, whose two members are the fraction
numerator and denominator (both type int). All fractionrelated data should
 be stored in structures of this type.*/

#include<iostream>
using namespace std;
struct fraction{
	int nume;
	int deno;
};
struct Ans{
	fraction result;
};

int main(){
	Ans f3;
	int a,b,c,d;
	char ch;
	fraction f1,f2;
	cout<<"Enter first fraction:";
	cin>>a>>ch>>b;
	cout<<"\nEnter second fraction:";
	cin>>c>>ch>>d;
	f1={a,b};
	f2={c,d};
	f3.result.nume=(f1.nume*f2.deno)+(f1.deno*f2.nume);
	f3.result.deno=f1.deno*f2.deno;
	cout<<"\nAnswer is ="<<f3.result.nume<<"/"<<f3.result.deno;
	return 0;
}
