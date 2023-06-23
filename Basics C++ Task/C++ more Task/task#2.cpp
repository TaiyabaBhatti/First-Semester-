/*Task # 2 Write a C++ program in which declare some variables with valid identifiers 
and conventions rule, to hold your name, your total marks in previous semester, 
percentage, your grade, your status of pass or fail etc, assign them explicitly and 
print them. Try to declare variables of all (8) data types and assign the appropriate 
values.*/
#include<iostream>
using namespace std;
int main()
{
	string name,x,y,z;
	long int total_marks=850;
	int obt_marks;
	char grade;
	bool status=true;
cout<<"*******************STUDENT'S DATA*********************\n";
cout<<"Student name = ";
getline(cin,name);
cout<<"Roll number = ";
getline(cin,x);
cout<<"Department name = ";
getline(cin,y);
cout<<"Examination conducted of:";
getline(cin,z);
cout<<endl;
cout<<"****************MARKSHEET*****************\n";
cout<<"Student name = "<<name<<endl;
cout<<"Roll number = "<<x<<endl;
cout<<"Department name = "<<y<<endl;
cout<<"Examination conducted of :"<<z<<endl;
cout<<"Total marks = "<<total_marks<<endl;
cout<<"Obtain marks = ";
cin>>obt_marks;
float per=obt_marks*100/total_marks;
cout<<"Percentage = "<<(float)per<<endl;
cout<<"Grade = ";
cin>>grade;
cout<<"Pass=1 or fail=0:";
cin>>status;

	return 0;
}
