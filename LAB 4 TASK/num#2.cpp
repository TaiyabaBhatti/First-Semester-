/*Task #2: A student will not be allowed to sit in exam if his/her attendance is less 
than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int classes_held,classes_attend;
	char ch;
	do{
	
	cout<<"Number of classes held:";
	cin>>classes_held;
	cout<<"Number of classes attend:";
	cin>>classes_attend;
    float per=	(float)classes_attend/classes_held*100;
	cout<<"\npercentage of class attend:"<<per;
	if(per<75)
	cout<<"\nStudent is not allowed to sit in the exam..";
	else
	cout<<"\nStudent is allowed to sit in the exam..";
	cout<<"\nCheck for another student(y/n):";
	ch=getch();
	system("cls");
}
while(ch=='y');
	
	
	
	
	return 0;
}

