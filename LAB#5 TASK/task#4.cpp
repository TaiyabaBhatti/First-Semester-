/*Task # 4: Consider Task=#1 and separate vowels and consonants.*/

#include<iostream>
using namespace std;
int main()
{       
    cout<<"Vowel\tConsonant\n";
     for(char ch='A';ch<='Z';ch++){
     switch(ch){
    case 'A':cout<<ch;break;	
    case 'E':cout<<ch;break;
    case 'I':cout<<ch;break;
    case 'O':cout<<ch;break;
    case 'U':cout<<ch;break;
    default:cout<<'\t'<<ch<<endl;
}
	 }	
     	
     	
     	
     	
     	
     	
	 
	
	
	
	
	


	return 0;
}

