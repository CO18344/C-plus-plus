#include<iostream>
using namespace std;


class Complex
{
	float real;
	float img;

public:
	Complex(){
		this->img=this->real = 0;
	}
	Complex(float,float);
	Complex operator + (Complex const &);
	friend ostream & operator << (ostream &,Complex &);
	friend istream & operator >> (istream &,Complex &);
};

Complex::Complex(float real , float img){
	this->real = real;
	this->img = img;
}

Complex Complex::operator + (Complex const & obj){
return Complex(this->real + obj.real,this->img + obj.img); 
}

ostream & operator << (ostream &cout,Complex & obj){
cout<<obj.real<<" + "<<obj.img<<"i"<<endl;
return cout;
}

istream & operator >> (istream &cin,Complex & obj){
cin>>obj.real;
cin>>obj.img;
return cin;
}

int main(int argc, char const *argv[])
{
	//Complex C1(2.5,2),C2(1.5,3);
	Complex C1,C2;
	cin>>C1>>C2;

	cout<<C1<<C2;

	Complex C3 = C1 + C2;
	cout<<C3;
	
	return 0;
}