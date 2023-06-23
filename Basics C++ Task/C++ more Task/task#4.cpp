/*Task # 4
Write a C++ program to print the ascii value of a given character. 
Expected Output
The ASCII value of Z is :90*/
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter any character = ";
	cin>>ch;
	cout<<"The ASCII value of "<<ch<<"is :"<<(int)ch;   //casting from character to numbers
	
	
	return 0;
}
