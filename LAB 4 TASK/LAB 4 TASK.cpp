/*Task #1: Write a C++ program to ask the user to input his/her age. Then the program will show if the person is eligible to vote. A person who is eligible to vote must be older than or equal to 18 years old.
Expected Output
Enter your age: 18
You are eligible to vote.*/

#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter your age:";
	cin>>age;
	if(age<18)
	cout<<"you are not eligible to vote.";
	else if(age>=18)
	cout<<"you are eligible to vote..";
	
	
	
	
	
	return 0;
}
