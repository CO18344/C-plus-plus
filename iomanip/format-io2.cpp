#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;

int main(){

	int num = 24;
	float num2  = 15.15785;
	cout.setf(ios::showpoint);
	cout<<num2<<endl;

	cout.unsetf(ios::showpoint);
cout<<"--------------------"<<endl;
	//2 digits after decimal point
	cout.setf(ios::fixed);
	cout.precision(2);
	cout<<num2<<endl;

cout<<"--------------------"<<endl;
	//MATH functions
	cout<<trunc(35.2)<<endl;
	cout<<round(35.2)<<endl;

	return 0;
}