#include <iostream>
using namespace std;
main(){
	float l;
	float stick;
	cout<<"Enter the side length of the Rubik's Cube: ";
	cin>> l;
	stick = l*(6*l);
	cout<<"Number of stickers needed: "<<stick;

}