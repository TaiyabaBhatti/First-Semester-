/*6. On a certain day the British pound was equivalent to $1.487 U.S., the French franc was
$0.172, the German deutschemark was $0.584, and the Japanese yen was $0.00955.
Write a program that allows the user to enter an amount in dollars, and then displays this
value converted to these four other monetary units.*/
#include<iostream>
using namespace std;
int main()
{
	/*british pound=$1.487
	french franc=$0.172
	German deut=$0.584
	japanese yen=0.00955*/
int dollar;
cout<<"Enter amount in dollars:";
cin>>dollar;
cout<<"Amount in british pound:"<<(float)(dollar/1.487)<<endl;	
cout<<"Amount in french franc:"<<(float)(dollar/0.172)<<endl;
cout<<"Amount in german deut:"<< (float)(dollar/0.584 )<<endl;
cout<<"Amount in japanese yen:"<< (float)(dollar/0.00955) <<endl;

	
	return 0;
}
