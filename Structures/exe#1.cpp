/*Task # 1 Create a Structure called employee that contains two members: 			
an employee number (type int) and the employee's salary (type float). Ask 
the user to fill this data for two employees, store it in two variables 
of type struct employee, and then display the information for each 
employee.*/	
#include<iostream>
using namespace std;
struct employee{
	int emp_no;
	float emp_salry;
};
int main(){
  employee e2, e1={,300.5};
  e2.emp_no=2;
  e2.emp_salry=209.5;
  cout<<"Employ no ="<<e1.emp_no<<'\t'<<"salary ="<<e1.emp_salry<<endl;
  cout<<"Employ no ="<<e2.emp_no<<'\t'<<"salary ="<<e2.emp_salry;	
	
	
	
	
	
	
	return 0;
}
