#include<iostream>
using namespace std;
struct sterling{
	int pounds;
	int shillings;
	int pence;
	
};
int main(){
	sterling old;
	double money;
   cout<<"Enter money amount in new style:";
   cin>>money;	
	int pd=money;
	double fract=money-pd;
	int shil=fract*20;
	int pec=fract*100;
	 old={pd,shil,pec};
	cout<<old.pounds<<"."<<old.shillings<<"."<<old.pence;
	
	
	
	return 0;
}
