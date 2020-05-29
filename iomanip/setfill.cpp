#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	int num = 24;

	
	cout<<"without set fill: "<<endl;
	cout<<setw(10)<<num<<endl;

	// with set fill 
	cout<<setfill('*')<<setw(10)<<num<<endl;
	//effect will work only upto str


	return 0;
}