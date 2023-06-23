//Loop 3

#include<iostream>
using namespace std;
int main()
{
	
	int mysteryInt = 100;
	for(int i = 5; i > 0;i-- ){           
	mysteryInt -= i;                 //100-5=95
	                                 //95-4=91                    
		cout<<(mysteryInt);          //91-3=88
}                                    //88-2=86
                                     //86-1=85
return 0;
}
