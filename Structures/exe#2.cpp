/*Task # 2 Create a Structure called Students that contains two members: 
student's obtained marks type(int). total marks (type int) Ask the user  
for obtained marks and total marks, store it in a variable of type struct 
student, and then display the percentage*/
#include<iostream>
using namespace std;
struct Students{
	int obt_marks;
	int total_marks;
	
};
int main(){
	Students student;
	cout<<"Enter obtain marks:";
	cin>>student.obt_marks;
	cout<<"Enter total marks:";
	cin>>student.total_marks;
	float percent=(float)student.obt_marks/student.total_marks*100;
	cout<<"Percentage of student ="<<percent;
	
	
	
	
	
	return 0;
}
