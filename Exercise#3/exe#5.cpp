/*. Use for loops to construct a program that displays a pyramid of Xs on the screen. The
pyramid */
#include<iostream>
using namespace std;
int main()
{
	for(int row=1;row<=5;row++){
		for(int coul=5;coul>=row;coul--)
			cout<<" ";
			for(int a=1;a<=row*2-1;a++)
				
			cout<<"*";
		    cout<<endl;
		
		
	}
	
	
	
	
	
	
	return 0;
}
