/*Task#3 Write a function called swap() that interchanges two int values
passed to it by the calling program.*/
#include<iostream>
using namespace std;
void swap(int &x,int &y){
	int temp=x;
	x=y;
	y=temp;
	
}
int main(){
	int num1,num2;
	cout<<"Enter two numbers:\n";
	cin>>num1>>num2;
	cout<<"Numbers before swaping:";
	cout<<"1st number ="<<num1<<" "<<"2nd number ="<<num2<<endl;
	cout<<"Numbers after swaping:";
	swap(num1,num2);
	cout<<"1st number ="<<num1<<" "<<"2nd number ="<<num2;
	
	
	
	return 0;
}

