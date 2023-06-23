/*Task #8 : Write a C++ program that passes an array (of your choice) as an
argument to  a function.*/
#include<iostream>
using namespace std;
void myfunction(int b[],int n)
{
	for(int index=0;index<n;index++){
	cout<<b[index]<<" ";
			
	}

}
int main(){
   int size=10;
   int array[size]={1,2,3,4,5,6,6,7,8,9};
   myfunction(array,size);	
	
	
	
	return 0;
}
