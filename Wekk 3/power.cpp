#include <iostream>
using namespace std;
main()
{
	cout<<"Enter voltage (in volts): ";
	float volt;
	cin>> volt;
	cout<<"Enter current (in amperes): ";
	float current;
	cin>> current;
	float power;
	power = current * volt;
	cout<<"The power is " <<power<<" watts.";


        
}