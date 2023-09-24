#include <iostream>
using namespace std;
main ()
{
	cout<<"Enter Working Days Per Month: ";
	float days;
	cin>> days;
	cout<<"Enter Earning In Dollars: ";
	float earn;
	cin>> earn;
	cout<<"Enter Exchange Rate USD to PKR: ";
	float xrate;
	cin>> xrate;
	float permonth;
	permonth = days * earn;
	float peryear;
	peryear = permonth * 12;
	float bonus;
	bonus = (permonth * 2.5);
	float tax;
	tax = bonus - (bonus*0.25);
	float pkr;
	pkr = tax * xrate;
	float annual;
	annual = pkr/365;
	cout << "Your per day salary is: "<<annual ;
}	
	
	