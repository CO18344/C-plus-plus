#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int num = 24;

	cout<<"In integer: "<<setbase(10)<<num<<endl;
	//does not work for binary
	cout<<"In octal: "<<setbase(8)<<num<<endl;
	cout<<"In hexadecimal: "<<setbase(16)<<num<<endl;
	return 0;
}