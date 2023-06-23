#include<iostream>
using namespace std;
int pound;
int shilling;
int main(){
int p1,p2,s1,s2,pen1,pen2;
	char ch,dot='.';	
   cout<<"Enter 1st:";
   cin>>p1>>ch>>s1>>ch>>pen1;
   cout<<"enter 2nd:";
   cin>>p2>>ch>>s2>>ch>>pen2;
   cout<<"Enter operator:";
   cin>>ch;
   if(ch=='+')
   {
   int pound=p1+p2;
   int shilling=s1+s2;
   
   if (shilling>19){
   pound+=(shilling/20);
   shilling=shilling%20;}
   int pence=(pen1+pen2);
   if(pence>11){
   shilling+=pence/12;
   pence=pence%12;}
   cout<<"total:"<<pound<<dot<<shilling<<dot<<pence;}
   
   else if(ch=='-')
   {
   int pound=p1-p2;
   int shilling=s1-s2;
   if(shilling>19){
   
   pound+=(shilling/20);
   shilling=shilling%20;}
   int pence=(pen1-pen2);
   if(pence>11){
   shilling+=pence/12;
   pence=pence%12;}
   cout<<"total:"<<pound<<dot<<1+shilling<<dot<<pence;}
   
   else if(ch=='*')
   {
   int pound=p1*p2;
   int shilling=s1*s2;
   if(shilling>19){
   
   pound+=(shilling/20);
   shilling=shilling%20;}
    int pence=(pen1*pen2);
   if(pence>11){
   shilling+=pence/12;
   pence=pence%12;}
   cout<<"total:"<<pound<<dot<<1+shilling<<dot<<pence;}
else
{
cout<<"Invalid input:";
}
return 0;
}

