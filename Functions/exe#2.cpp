/*Task # 2	Write a function called zeroSmaller() that takes two integer 
arguments by reference and then sets the smaller of the two 			
numbers to 0. Write a main function to exercise this function.*/
#include<iostream>
using namespace std;
void zerosmaller(int& a,int& b){
	if(a<b){
		a=0;
	}
	else
	b=0;
}
int main(){
	int num1,num2;
	cout<<"Enter two numbers:\n";
	//cin>>num1>>num2;
	cout<<"first number ="<<num1<<" "<<"second number ="<<num2<<endl;
	zerosmaller(2,5);
	cout<<"first number ="<<num1<<" "<<"second number ="<<num2;
	
	
	
	
	return 0;
}
