/*Write a program that encourages the user to enter two fractions, and then displays their
sum in fractional form. (You don�t need to reduce it to lowest terms.) The interaction
with the user might look like this:
Enter first fraction: 1/2
Enter second fraction: 2/5
Sum = 9/10
You can take advantage of the fact that the extraction operator (>>) can be chained to
read in more than one quantity at once:
cin >> a >> dummychar >> b;*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d;
	char ch;
	cout<<"Enter first fraction:";
	cin>>a>>ch>>b;
	cout<<"enter second fraction:";
	cin>>c>>ch>>d;
	int x=a*d;
	int y=b*c;
	int z=b*d;
	cout<<"sum:"<<x+y<<"/"<<z;
	
	
	
	
	
	
	
	return 0;
}
