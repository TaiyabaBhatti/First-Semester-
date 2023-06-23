/*Write a program, based on the sterling structure of Exercise 10 in Chapter
4, that obtains from the user two money amounts in old-style British format
(£9:19:11), adds them, and displays the result, again in old-style format.
Use three functions. The first should obtain a pounds-shillings-pence 
value from the user and return the value as a structure of type sterling.
The second should take two arguments of type sterling and return a value 
of the same type, which is the sum of the arguments. The third should take
a sterling structure as its argument and display its value*/
#include<iostream>
using namespace std;
struct sterling{
	int pound;
	int shilling;
	int pence;
};
sterling obtain(sterling m1){
	int p1,s1,pen1;
	static int count=1;
   	char ch;
   	cout<<"Enter "<<count<<" money amount:";
   	count++;
   	cin>>p1>>ch>>s1>>ch>>pen1;
    sterling x={p1,s1,pen1};
        	 return x;
}
sterling add(sterling m1,sterling m2){
	sterling m3;
	int pound=m1.pound+m2.pound;
	int shilling=m1.shilling+m2.shilling;
	int pence=m1.pence+m2.pence;
    if(pence>11){
    	shilling+=pence/12;
    	pence=pence%12;
	}
	if(shilling>19){
    pound+=shilling/20;
    shilling=shilling%20;}
	m3={pound,shilling,pence};
	return m3;
	
}
void display(sterling m3){
	cout<<"Total amount is ="<<m3.pound<<"."<<m3.shilling<<"."<<m3.pence;
	
	
}

int main(){
	sterling m1=obtain(m1);
	sterling m2=obtain(m2);
	sterling m3=add(m1,m2);
	display(m3);
	return 0;
}


