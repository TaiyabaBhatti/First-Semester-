/*Task # 8: In the following program, explain why the value "6" is printed twice in a
 row:*/
 #include<iostream>
 using namespace std;
int main()
{
      int i = 3;                       //i=3
      i++;                             // i=3
      cout << i<<endl;             //i=4
        ++i;                              //4+1=5,i=5 
        cout<<i <<endl;             //i=5
        cout<<++i<<endl;            //5+1=6,i=6
        cout<<i++<<endl;            //i=6
        cout<<i;    //1+6=7,i=7
		
		    return 0; 
 } 




