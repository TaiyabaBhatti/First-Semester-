#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	char ch;
	long total=0;
	cout<<"Enter a number:";
	while((ch=getche())!='\r'){
	
	total=total*10 + ch-'0';}
	cout<<"\nnumber is:"<<total;
	
	
	
	
	return 0;
}
