/*5. A library function, islower(), takes a single character (a letter) as an argument
 and returns a nonzero integer if the letter is lowercase, or zero if it is uppercase.
This function requires the header file CTYPE.H. Write a program that allows the user
to enter a letter, and then displays either zero or nonzero, depending on whether a 
lowercase or uppercase letter was entered. (See the SQRT program for clues.)*/
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;

	cout<<"Enter any letter:";
	cin>>ch;
    bool status=isupper(ch);
	cout<<"The character is lower case??? "<<(boolalpha)<<status<<endl;
	


	
	
	
	
	
	return 0;
}
