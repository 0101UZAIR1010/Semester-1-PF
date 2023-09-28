#include <iostream>
using namespace std;
void fuel(float a, float b)
		{
                   if (a >= 10)
				{b=a*10;
					}
		    if (a < 10)
				{b=100;
					}
		cout<<"Fuel needed: "<<b;
	}
		  		  		 
int main(){
	float a;
	float b;
	cout<<"Enter the distance: ";
	cin>> a;
	fuel (a,b);
		


	}
	