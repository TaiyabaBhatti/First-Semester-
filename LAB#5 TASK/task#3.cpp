/*Task # 3: Write a program that prints all Roll numbers of your class using
 for loop*/
#include<iostream>
using namespace std;
int main()
{
	cout<<"******Roll numbers of section 3:******\n";
	for(int x=3;x<=150;x+=3){
	
	if(x<=9)
	cout<<"22SW00"<<x<<endl;
	if(x>9&&x<=99)
	cout<<"22SW0"<<x<<endl;
	if(x>99&&x<=150)
	cout<<"22SW"<<x<<endl;
}
	
	
	return 0;
}
