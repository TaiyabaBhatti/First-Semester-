/*Task # 3 Enter the marks of 5 students in Chemistry, Mathematics and
Physics (each out of 100) using a structure named Marks having elements 
roll no., name, chem_marks, maths_marks and phy_marks and then display
the percentage of each student*/
#include<iostream>
using namespace std;
struct Marks{
	
	int roll_no;
	string name;
	int chem_marks;
	int maths_marks;
	int phy_marks;
	
};
Marks myfunction(int a,string b,int c,int d,int e){
	Marks info={a,b,c,d,e};
	return info;
}
float percent(Marks info){
	int total_marks=300;
	int obt=info.chem_marks+info.maths_marks+info.phy_marks;
	float p=(float)obt/total_marks*100;
	return p;
}

int main(){
	int v,x,y,z;
	string w;
	Marks s1,s2,s3,s4,s5;
	v=51,w="Tayyaba",x=75,y=98,z=90;
	s1=myfunction(v,w,x,y,z);
	float per=percent(s1);
	cout<<"Roll no"<<s1.roll_no<<'\t'<<"Name ="<<s1.name<<endl;
	cout<<"Percentage ="<<per<<endl;
	v=15,w="Shazma",x=74,y=80,z=88;
	s2=myfunction(v,w,x,y,z);
	per=percent(s2);
	cout<<"Roll no"<<s2.roll_no<<'\t'<<"Name ="<<s2.name<<endl;
	cout<<"Percentage ="<<per<<endl;
	v=24,w="Sarwat",x=80,y=78,z=93;
	s3=myfunction(v,w,x,y,z);
	 per=percent(s3);
	cout<<"Roll no"<<s3.roll_no<<'\t'<<"Name ="<<s3.name<<endl;
	cout<<"Percentage ="<<per<<endl;
	v=03,w="Areej",x=72,y=79,z=95;
	s4=myfunction(v,w,x,y,z);
	 per=percent(s4);
	cout<<"Roll no"<<s4.roll_no<<'\t'<<"Name ="<<s4.name<<endl;
	cout<<"Percentage ="<<per<<endl;
	v=78,w="Urooshm",x=78,y=99,z=82;
	s5=myfunction(v,w,x,y,z);
	 per=percent(s5);
	cout<<"Roll no"<<s5.roll_no<<'\t'<<"Name ="<<s5.name<<endl;
	cout<<"Percentage ="<<per<<endl;
	
	return 0;
}
