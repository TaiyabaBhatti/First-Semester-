/*Task # 5   C++ write a function that takes numbers as arguments and Swap two numbers .
Use call by reference.*/
#include<iostream>
using namespace std;
void swapcall_ref(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int num1;
	int num2;
	cout<<"Enter two numbers:\n";
	cin>>num1>>num2;
	cout<<"Num1="<<num1<<'\t'<<"num2="<<num2<<endl;
	cout<<"Numbers after swaping:\n";
	swapcall_ref(&num1,&num2);
	cout<<"Num1="<<num1<<'\t'<<"num2="<<num2<<endl;
	
	
	
	
	
	
	return 0;
}
