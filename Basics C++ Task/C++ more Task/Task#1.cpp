/*Task.1 Write a C++ program to print the following lines:
You are 10 years old.
You are too young to play the game (Hint use an int variable for age)*/ 
#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age:";
	cin>>age;
	if(age>=10)
	{cout<<"you are "<<age<<" years old."<<endl;
	cout<<"you are too young to play the game..";}
	else
	cout<<"Not required condition..";
	
	return 0;
}
