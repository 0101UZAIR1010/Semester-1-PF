#include <iostream>
using namespace std;
main()
{
	cout<<"Enter the name of the cricket team: ";
	string name;
	cin>> name;
	cout<<"Enter the number of wins: ";
	float wins;
	cin>> wins;
	cout<<"Enter the number of draws: ";
	float draws;
	cin>> draws;
	cout<<"Enter the number of losses: ";
	float losses;
	cin>> losses;
	float points;
	points = (wins)*3 + (draws)*1 + (losses)*0;
	cout<<name<<" has obtained "<<points<<" points in the Asia Cup tournament.";
	
	


        
}