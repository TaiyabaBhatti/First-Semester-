#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	char ch;
	do
	{
	cout<<"Enter 1st number,operator,2nd number:";
	cin>>a>>ch>>b;
	switch (ch){
	
	case '+':cout<<"sum:"<<a+b;break;
	case '-':cout<<"subtraction:"<<a-b;break;
	case '*':cout<<"product:"<<a*b;break;
	case '/':cout<<"Qutient:"<<(float)a/b;break;}
    
    cout<<"\nDo again(y/n):";
    ch=getch();
    system("cls");
    
}
    while(ch=='y');
	
	return 0;
}
