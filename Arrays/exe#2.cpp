/*Task #2 Consider the array in  Taskno.2 . Write a C++ program that print 
the all elements of the array in reverse order, As 25,20, …5.*/  
#include<iostream>
using namespace std;
int main(){
	const int size=5;
	int array[]={5,10,15,20,25};
	for(int index=4;index>=0;index--){
        cout<<array[index]<<",";		
	}
	
	
	
	
	
	return 0;
}
