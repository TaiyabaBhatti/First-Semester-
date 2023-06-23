/*Task #4 Consider the array in  Taskno.3 . Write a C++ program that finds 
and prints all odd   numbers in the given array.*/
#include<iostream>
using namespace std;
void odd(int s,int array[]){
	
	for(int index=0;index<s;index++){
		if(array[index]%2!=0){
		cout<<array[index]<<" ";	
		}
	}
	
	
	
}
int main(){
	const int size=10; 
	int array[]={1,2,3,5,8,10,12,23,28,15};
	cout<<"Print all odd number in a given array:\n";
	odd(size,array);
	
	
	return 0;
}
