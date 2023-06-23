/*Task # 5  Write a program to print the table of characters that are equivalent
 to the Ascii codes from 97 to 122.
The program will print 10 characters per line*/
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	
	for(char ch='a';ch<='z';ch++){
		int x=ch;
	if(ch=='j'	|| ch=='t')
	cout<<ch<<"="<<x<<endl;
	else	
	cout<<ch<<"="<<x<<'\t';
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
