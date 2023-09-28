#include <iostream>
using namespace std;
void vote(int num)
       {
	if (num%2==0 )
	          {cout<<"even";
			       }
	if (num%2!=0 )
	        {cout<<"odd";
			       }
	
        }	


	  
		  		  		 
main(){
	int num;
	cout<<"Enter a number: ";
	cin>> num;
	cout<<"Number "<<num;
	cout<<" is ";
	vote(num);	
	
}