/*Task # 8 Write a C++ program to declare and initialize a double variable with some
 value such as 50.25. Then retrieve the integral part and store it in the variable of 
 type long, and the fractional part and store it in a variable of  of type double. 
 Display  actual number, integral part Fractional part.*/
 #include<iostream>
 using namespace std;
 int main()
 {
 	double num;
 	cout<<"Enter any number in points=";
 	cin>>num;
 	long int x=num;
 	float y=num-x;
 	cout<<"Actual number="<<num<<endl;
 	cout<<"Integral part="<<x<<endl;
 	cout<<"Fractional part="<<y<<endl;
 	
 	return 0;
 }
