#include<iostream>
#include<iomanip>
using namespace std;

int main(){

	double num = 3.15646464;

	cout<<"without any precision: "<<num<<endl;

	//5 significant digits total
	//it is important to use cout
	cout<<setprecision(5);
	cout<<"precision 5: "<<num<<endl;

	cout<<setprecision(7);
	cout<<"precision 7: "<<num<<endl;

	return 0;
}