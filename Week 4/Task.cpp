#include<iostream>
using namespace std;
void name(string a)
	{
	  cout<<"Enter your name: ";
	  cin>>a;
	  cout<<"Your name is: "<<a<<" ."<<endl;;
	  }
main(){
	string a;
	while (true)
	name(a);


}