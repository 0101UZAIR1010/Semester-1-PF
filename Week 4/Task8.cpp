#include <iostream>
using namespace std;
void payable(string day,float price)
				{		
						 if ( day == "Sunday");
								   {price= price-(price*0.10);
										                }
						 if ( day != "Sunday");
						     			{ price = price;
								       }
    						cout<<"Payable Amount: $"<<price;


	                                         }
		  		  		 
int main(){
	float price;
	string day;
	cout<<"Enter the day of purchase: ";
	cin>> day;
	cout<<"Enter the total purchase amount: $";
	cin>> price;
        payable(day,price);


	}
	