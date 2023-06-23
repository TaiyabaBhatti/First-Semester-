/*Task # 4 Write a structure to store the name, account number and balance of
two customers .Write a function to print the data of all the customers.*/
#include<iostream>
using namespace std;
struct Info{
	int A_number;
	string name;
	int balance;
};
Info myfunction(int a,string b,int c){
	Info D={a,b,c};
	return D;
}
void print(Info D){
	cout<<"customer1 name ="<<D.name<<endl;
	cout<<"Customer1 account no  ="<<D.A_number<<endl;
	cout<<"Customer1 balance ="<<D.balance<<endl;
}
int main(){
	
	Info c1,c2;
    c1=myfunction(53745483,"A.ghani",50000);
	print(c1);
	c2=myfunction(94644863,"Aisha",45000);
	print(c2);
	
	return 0;
}

