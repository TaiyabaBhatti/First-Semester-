#include<iostream>
using namespace std;
struct volume{
	int length;
	int height;
	int width;
};
volume myfunction(int w,int x,int y){
	volume v={w,x,y};
	return v;
}
int measure(volume v){
	return v.length*v.height*v.width;
}
int main(){
	int a,b,c;
	cout<<"Enter the values:";
	cin>>a>>b>>c;
	volume abc=myfunction(a,b,c);
	int compute=measure(abc);
	cout<<"Volume ="<<compute;
	
	
	
	
	return 0;
}
