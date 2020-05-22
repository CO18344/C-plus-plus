#include<iostream>
using namespace std;

class Test
{
	int test;

public:

	Test()
	{
		this->test  = 0;
	}

	int gettest() const{
		cout<<"Const";
	return this->test;

	//gettest2(); this line will raise error
	}	

	int gettest()
	{
		cout<<"Nonconst";
		return this->test;
	}

	int gettest2()
	{
		cout<<"Nonconst2 ";
		return this->test;
	}
};


int main()
{
	const Test T;
	cout<<T.gettest()<<endl;	//Ok invokes Const

	Test U;
	cout<<U.gettest()<<endl;	//Ok invokes Nonconst


	// const Test V;				
	// cout<<V.gettest2()<<endl;	//Error const object trying to invoke non-const function

	return 0;
}