/*Task # 7 Write a C++ program that demonstrates the working and use of 
Nested Structures.*/
#include<iostream>
using namespace std;
struct book{
	string name;
	string author;
};
struct categray{
	book grammer;
	book Ethics;
};
int main(){
	categray B;
	B.grammer={{"Manage to lead"},{"Cynthia"}};
	B.Ethics={{"Learn to teach"},{"Rose pattle"}};
	cout<<"Author name ="<<B.grammer.author<<endl;
    cout<<"Book name ="<<B.grammer.name<<endl;
    cout<<"Author name ="<<B.Ethics.author<<endl;
    cout<<"Book name ="<<B.Ethics.name<<endl;
    
	
	
	
	return 0;
}







