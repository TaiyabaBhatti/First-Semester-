#include<iostream>
using namespace std;
int main(){
	int guest;
	int chair;
	int fact=1;
	cout<<"Enter number of chairs:";
	cin>>chair;
	cout<<"\nEnter number of guest:";
	cin>>guest;
	for(int n=guest;n>(guest-chair);n--){
		
		fact*=n;
	}
	cout<<"\nAns:"<<fact;
	return 0;
}                                                                                                                                                                                                                                                                                                                       
