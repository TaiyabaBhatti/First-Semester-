//Loop 5:
#include<iostream>
using namespace std;
int main()
{

 int mysteryInt = 1;
 int counter=1;
 while(mysteryInt <3 ) {        //until the value of mysteryint is less than 3
                                   //loop continue 
	mysteryInt = mysteryInt* counter;    //mysteryint store the value
	counter++;}
		cout<<(mysteryInt);      //after while condition becomes false cursor
		                       //move from loop to following statement
return 0;
}

