#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int num = 24;
	char str[]="Hello";
	
	cout<<"without setting width: "<<endl;
	cout<<num<<endl;

	//setting width to 15
	cout<<setw(15)<<str<<num<<endl;
	//effect will work only upto str


	return 0;
}