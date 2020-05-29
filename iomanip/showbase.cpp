#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int num = 24;
	

	cout<<"Setting showbase: "<<endl;

	//hex will print 0x: line will print hexadecimal representation of a number
	cout<<hex<<setiosflags(ios::showbase)<<num<<endl;

	//resetting ios flags: 0x will not be printed this time
	cout<<hex<<resetiosflags(ios::showbase)<<num<<endl;

	cout<<num<<endl;
	return 0;
}