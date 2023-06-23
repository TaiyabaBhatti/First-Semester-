/*Write a function called swap() that interchanges two int values passed to
it by the calling program. (Note that this function swaps the values of the
variables in the calling program, not those in the function.) You’ll need
to decide how to pass the arguments. Create a main() program to exercise
the function.*/
#include<iostream>
using namespace std;
void swap(int &a,int &b){
	int key=a;
      a=b;
	  b=key;	
	
	
}

int main(){
	int num1,num2;
	cout<<"Enter 1st number and 2nd number:";
	cin>>num1>>num2;
	cout<<"Numbers before calling function:"<<endl;
	cout<<"1st number ="<<num1<<'\t'<<"2nd number ="<<num2<<endl;
	swap(num1,num2);
	cout<<"Numbers after calling function:"<<endl;
	cout<<"1st number ="<<num1<<'\t'<<"2nd number ="<<num2<<endl;
	
	
	
	
	return 0;
}









