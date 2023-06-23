/*Task # 6: Write a C++ program that takes two characters as input and display all the characters between these two characters. And also count the number of characters
Test data
Enter first character: d
Enter second character: p
Expected output
Characters between 'd' and 'p' are: e f g h i j k l m n o 
and Characters count : 11
*/
#include<iostream>
using namespace std;
int main()
{
   char x,y;
   int count;
   cout<<"Enter first character:";
   cin>>x;
   cout<<"Enter second character:";
   cin>>y;
   char i;
   cout<<"Character b/w "<<x<<" and "<<y<<":";
   for( i=x;i<y;i++){
   if(i>x)
   {
   cout<<i<<' ';
   count +=1;
}
}
	cout<<"\nsum:"<<count;

	
	
	
	
	
	return 0;
}
