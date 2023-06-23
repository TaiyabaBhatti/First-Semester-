#include<iostream>
using namespace std;     //area of circle=pi*r^2
float circarea(float r){
	float pi=3.14;
	float area=(pi*r*r);
	return area;

}



int main(){
	float radius;
	cout<<"Enter radius value:";
	cin>>radius;
	cout<<"Area of the circle is ="<<circarea(radius);
	 
	
	
	return 0;
}
