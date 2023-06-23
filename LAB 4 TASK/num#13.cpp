/*Task # 13 Implement a C++ program with name  Address.cpp. An address has
"	a house number,
"	a street,
"	an optional apartment number,
"	a city,
"	a state and a
"	postal code.
Supply values at run time  and  print the address with the street on one line and
 the city, state, and postal code on the next line.*/
 #include<iostream>
 using namespace std;
 int main()
 {
 	int house_no,apar_no,postal_code;
 	string street,city,state;
 	cout<<"House no:";
 	cin>>house_no;
 	
 	cout<<"Street:";
 	cin.ignore();
 	getline(cin,street);
 	
 	cout<<"Apartment no:";
 	cin>>apar_no;
 	
 	cout<<"City:";
 	cin.ignore();
	getline(cin,city);
 	
 	cout<<"State:";
 	getline(cin,state);
 	
 	cout<<"Postal code:";
 	cin>>postal_code;
 	
 	cout<<"House no:"<<house_no<<'\t'<<"Street:"<<street<<endl;
 	cout<<"Apartment no:"<<apar_no<<'\t'<<"City:"<<city<<'\t'<<"State:"<<state<<'\t'<<"Postal code:"<<postal_code;
 	
 	
 	
 	
 	
 	return 0;
 }


