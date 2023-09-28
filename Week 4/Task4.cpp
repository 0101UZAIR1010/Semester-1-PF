#include <iostream>
using namespace std;
void add(int a,int b)
	{
	 int add;
	 add = a+b;
	 cout<<"Addition: "<<add;
}
void subt(int a,int b)
	{
	 int subt;
	 subt = a-b;
	 cout<<"Subtraction: "<<subt;
}
void multi(int a,int b)
	{
	 int multi;
	 multi = a*b;
	 cout<<"Multiplication: "<<multi;
}
void divi(float a,float b)
	{
	 float divi;
	 divi = a/b;
	 cout<<"Division: "<<divi;
}

	  
		  		  		 
main(){
	int n1,n2;
	char op;
	cout<<"Enter 1st number: ";
        cin>> n1;
        cout<<"Enter 2nd number: ";
	cin>> n2;
	cout<<"Enter an operator (+, -, *, /): ";
	cin>> op;
	if (op == '+')
 		 {   
 	           add(n1 , n2);
				}
	if (op == '-')
 		 {   
 	           subt(n1 , n2);
				}

	if (op == '*')
 		 {   
 	           multi(n1 , n2);
				}
	if (op == '/')
 		 {   
 	           divi(n1 , n2);
				}
	

	
	

}