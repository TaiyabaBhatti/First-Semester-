/*Task # 4   Define two functions to print the maximum and the minimum number
 respectively among three numbers entered by user.*/
 #include<iostream>
 using namespace std;
 int  max(int a,int b,int c){
   int maxno=a;
   if(b>maxno)
   	maxno=b;
   	if(c>maxno)
   	maxno=c;
   	return maxno;
   }
   

int min(int a,int b,int c){
  int minno=a;
  if(b<minno)
  minno=b;
  if(c>minno)
  minno=c;
  return minno;	


	
}
 int main(){
 	int num1,num2,num3;
 	cout<<"Enter 1st number:";
 	cin>>num1;
 	cout<<"Enter 2nd number:";
 	cin>>num2;
 	cout<<"Enter 3rd number:";
 	cin>>num3;
 	cout<<"Maxinum number is:"<<max(num1,num2,num3)<<endl;
    cout<<"Mininum number is:"<<min(num1,num2,num3)<<endl;
 	return 0;
 }
