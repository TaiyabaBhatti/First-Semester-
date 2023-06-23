/*Task # 7: Write a program called SumAndAverage to produce the sum of 1, 2, 3, ..., to
 100. Also compute and display the average. The output shall look like:
The sum is 5050
The average is 50.0*/
#include<iostream>
using namespace std;
int main()
{
	int sum=0;
    
    for(int x=1;x<=100;x++){
	sum+=x;}
	cout<<"The sum is :"<<sum<<endl;
	cout<<"The average is:"<<(float)sum/100;
	
	
	
	
	return 0;
}

