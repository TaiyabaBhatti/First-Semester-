#include<iostream>
using namespace std;
struct employee{
	int emp_no;
	float comp;
};

int main(){
	employee e1,e2,e3;
	e1={1,45.4};
	e2={2,70.76};
	e3={3,50.890};
	cout<<"Employee no ="<<e1.emp_no<<endl;
	cout<<"Employee compensation ="<<e1.comp<<endl;
	cout<<"Employee no ="<<e2.emp_no<<endl;
	cout<<"Employee compensation ="<<e2.comp<<endl;
	cout<<"Employee no ="<<e3.emp_no<<endl;
	cout<<"Employee compensation ="<<e3.comp<<endl;
	
	
}
