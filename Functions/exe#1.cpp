/*Task # 1   Create a function called Largernum()  that receives two integer 		
numbers as arguments and returns the Larger number out of them.*/
 
#include<iostream>
using namespace std;
int largernum(int a,int b){
	if(a>b){
		return a;
	}
	else
	return b;
	
}
int main(){
	int num1,num2;
	cout<<"enter two numbers:";
	cin>>num1>>num2;
	cout<<"larger number is="<<largernum(num1,num2);
	
	
	
	return 0;
}
