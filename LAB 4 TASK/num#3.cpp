/*Task#3 Write a C++ program that takes a single character as an input and displays
 whether it is a vowel or a consonant. */
 #include<iostream>
 using namespace std;
 int main()
 {
 	char ch;
 	cout<<"Enter any character:";
 	cin>>ch;
 	switch(ch){
 		
 	case 'a':cout<<"It's a vowel.";break;	
 	case 'e':cout<<"It's a vowel.";break;
 	case 'i':cout<<"It's a vowel.";break;
 	case 'o':cout<<"It's a vowel.";break;
    case 'u':cout<<"It's a vowel.";break;
 	case 'A':cout<<"It's a vowel.";break;
 	case 'E':cout<<"It's a vowel.";break;
 	case 'I':cout<<"It's a vowel.";break;
 	case 'O':cout<<"It's a vowel.";break;
 	case 'U':cout<<"It's a vowel.";break;
 	default:cout<<"it's a consonant";
 	
	 }
 	
 	
 	
 	
 	
 	
 	return 0;
 }
