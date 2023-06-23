#include<iostream>
using namespace std;
struct point{
	int x_axis;
	int y_axis;
};



int main(){
	
	point p1,p2,p3;
	cout<<"Enter coordinates for point one:";
	cin>>p1.x_axis>>p1.y_axis;
	cout<<"Enter coordinates for point two:";
	cin>>p2.x_axis>>p2.y_axis;
	int x_sum=p1.x_axis+p2.x_axis;
	int y_sum=p1.y_axis+p2.y_axis;
	cout<<"Coordinates of p1 + p2:"<<x_sum<<","<<y_sum;
	
	return 0;
} 
