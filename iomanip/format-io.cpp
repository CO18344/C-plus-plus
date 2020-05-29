#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int num = 24;

	//+24 will be printed
	cout.setf(ios::showpos);
	cout<<num<<endl;

	//adjusting width
	cout.width(5);
	cout<<num<<endl;

	cout.fill('*');
	cout.width(5);
	cout<<num<<endl;

	return 0;
}