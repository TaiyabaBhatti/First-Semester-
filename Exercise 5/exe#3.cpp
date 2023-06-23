#include<iostream>
using namespace std;
void zerosmaller(int& a,int& b)
{    
      if(a<b)
      a=0;
      else
      b=0;
      
      
      
      
      
}
int main(){
	int num1,num2;
	cout<<"Enter four numbers:";
	cin>>num1>>num2;
	cout<<"num1="<<num1<<"num2="<<num2<<endl;
	zerosmaller(num1,num2);
	cout<<"num1="<<num1<<"num2="<<num2;
	
	
	
	
	
	return 0;
}
