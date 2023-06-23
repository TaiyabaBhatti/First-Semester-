/*Task #: 15 Write a java program that takes a single character as input and tells
 whether it is a vowel or a consonant. (Use Conditional operator)*/
 #include<iostream>
 using namespace std;
 int main()
 {
 	char ch;
 	cout<<"Enter any character:";
 	cin>>ch;
 	(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')?cout<<"Vowel..":cout<<"Consonant..";
 	
 	
 	
 	return 0;
 }
