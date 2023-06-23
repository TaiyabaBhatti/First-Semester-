#include<iostream>
#include<conio.h>
using namespace std;

enum etype{laborer,secretary,manager,accountant,executive,researcher};

int main(){
	char ch;
	string x;
	etype e;
	cout<<"Enter employee type:";
	ch=getch();
	switch(ch){
	case 'l':
	e=laborer;	
	cout<<ch<<endl;break;
	case 's':
	e=secretary;	
	cout<<ch<<endl;break;
	case 'm':
	e=manager;	
	cout<<ch<<endl;break;
	case 'a':
	e=accountant;	
	cout<<ch<<endl;break;
	case 'e':
	e=executive;	
	cout<<ch<<endl;break;
	case 'r':
	e=researcher;	
	cout<<ch<<endl;break;
	}
	switch(e){
	case 0:cout<<"Employee type is laborer";break;
    case 1:cout<<"Employee type is secretery.";break;
    case 2:cout<<"Employee type is manager.";break;
    case 3:cout<<"Employee type is accountant.";break;
    case 4:cout<<"Employee type is researcher.";break;
    
}
	
	
	
	return 0;
}
 
