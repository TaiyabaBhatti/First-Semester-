/*Task # 6 Consider given structure Cars.  Using this structure represent two cars:
struct Cars{
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma
// here*/
#include<iostream>
using namespace std;
struct Cars{
  string brand;
  string model;
  int year;
} myCar1, myCar2;

int main(){
Cars mycar1={"Mercedes","A-class",2002};
Cars mycar2={"Audi","A3",2023};
cout<<"Old Car :\n"<<"Brand name:"<<mycar1.brand<<'\n'<<"Model name:"<<mycar1.model<<'\n'<<"Year ="<<mycar1.year;
cout<<"\nOld Car :\n"<<"Brand name:"<<mycar2.brand<<'\n'<<"Model name:"<<mycar2.model<<'\n'<<"Year ="<<mycar2.year;
	
	
	
	
	
	return 0;
}
