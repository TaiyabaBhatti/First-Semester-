#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   string a,b,c,d,e;
a="Last name",b="First name",c="street address",d="Town",e="State";
cout<<left<<setw(11)<<a<<left<<setw(12)<<b<<left<<setw(18)<<c<<left<<setw(14)<<d<<left<<setw(5)<<e<<endl;

a="Jones",b="Bernard",c="109 Pine Lane",d="Littletown",e="MI";
	cout<<left<<setw(11)<<a<<left<<setw(12)<<b<<left<<setw(18)<<c<<left<<setw(14)<<d<<left<<setw(5)<<e<<endl;
	
a="O'Brian",b="Coleen",c="42 E. 99th Ave.",d="Bigcity",e="NY";
	cout<<left<<setw(11)<<a<<left<<setw(12)<<b<<left<<setw(18)<<c<<left<<setw(14)<<d<<left<<setw(5)<<e<<endl;
	
a="Wong",b="Harry",c="121-A Alabama St.",d="Lakeville",e="IL";
	cout<<left<<setw(11)<<a<<left<<setw(12)<<b<<left<<setw(18)<<c<<left<<setw(14)<<d<<left<<setw(5)<<e<<endl;
	
	return 0;
}
