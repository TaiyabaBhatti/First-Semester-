/*Task#6 Write a C++ program that prompts the user to enter any character and the 
program checks as:
"	the character is a lower case character case or upper case character
"	if it is a lower case then convert it into upper case. 
"	 if it is an upper case then convert it into lower case.*/
#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character:";
	cin>>ch;
	if(islower(ch)){
	
	cout<<"character is lower case.";
	cout<<"\nconvert into upper case:"<<(char)(ch-32);
}
	
	
	else if(isupper(ch)){
	
	cout<<"character is upper case.";
	cout<<"\nconvert into lower case."<<(char)(ch+32);}
	
	
	
	
	
	
	
	return 0;
}

