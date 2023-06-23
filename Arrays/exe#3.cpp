/*Task#3  Consider the following interger array of size 10. 
int array[10]={1,2,3,5,8,10,12,23,28,15}; Write a c++  program that takes
an integer value from the user at runtime and finds that value in the 
given array . If the value is found display Message "Number is Found " 
else display Message  "Number does not Found ".*/
#include<iostream>
using namespace std;
int main(){
	const int size=10;
	int count=0;
	int key;
	
	cout<<"Enter number which have to find:";
	cin>>key;
	for(int index=0;index<size;index++){
	if(key==array[index]){
	count=1;
	cout<<"Number is found...";
	break;}
	}
	if(count==0){
		cout<<"number is not found...";
	}
		
		return 0;
	}
