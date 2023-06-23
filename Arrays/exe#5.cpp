/*Task #5 :  Write a C++ program that prints the second last element in the
array created in Taskno. 2. And also displays the sum and product of last
two elements of the array. int array[]={1,2,3,5,8,10,12,23,28,15};*/
#include<iostream>
using namespace std;
int main(){
	const int size=10;
	int array[]={1,2,3,5,8,10,12,23,28,15};
	cout<<"Second last element ="<<array[8]<<endl;
	cout<<"Sum of the last two elements:"<<array[8]+array[9]<<endl;
	cout<<"Product of last two elements:"<<array[8]*array[9];
	
	
	
	
	return 0;
}
