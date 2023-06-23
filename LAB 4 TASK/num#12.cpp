/*Task # 12: Write a program that accepts three numbers from the user and prints
 "increasing" if the numbers are in increasing order, "decreasing" if the numbers are 
 in decreasing order*/
 #include<iostream>
 using namespace std;
 int main()
 {
 	int x,y,z;
 	cout<<"Enter 1st number:";
 	cin>>x;
 	cout<<"Enter 2nd number:";
 	cin>>y;
 	cout<<"Enter 3rd number:";
 	cin>>z;
 	if(x<y && y<z)
 	cout<<"Increasing order.";
 	else if(x>y && y>z)
 	cout<<"Decreasing order.";
 	else
 	cout<<"invalid order..";
 	
 }
