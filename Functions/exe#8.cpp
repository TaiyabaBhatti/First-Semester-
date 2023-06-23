/*Task # 7    Write a function that takes a user defined structure named 
students having two members of your own choice as an argument, the 
function then prints data of that structure. Write the main program to 
access the function.*/
#include<iostream>
using namespace std;
struct Students{
	int roll_no;
	string name;
};
Students myfunction(int a,string b){
	Students info={a,b};
	return info;	
}
int main(){
	int x=51;
	string  y="Tayyaba";
	Students s1=myfunction(x,y);
	cout<<"Data of student:\n"<<s1.roll_no<<endl<<s1.name<<endl;
	 Students s2=myfunction(15,"shazma");
	cout<<"Data of student:\n"<<s2.roll_no<<endl<<s2.name;
	
	
	
	
	
	
	return 0;
}
