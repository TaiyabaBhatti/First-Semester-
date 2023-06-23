/*Task #6 : Write a C++ program that finds the smallest element in the 
array and also its index.*/
#include<iostream>
using namespace std;
int main(){
	const int size=10; 
	
	int array[size];
 	for(int index=0;index<size;index++){
 		cin>>array[index];
	 }
	int minno=array[0];
 	for(int index=0;index<size;index++){
 		if(array[index]<minno){
		 
 		minno=array[index];}
	 }
 	cout<<"minimun is="<<minno;
 	
 	
 	return 0;
 }
