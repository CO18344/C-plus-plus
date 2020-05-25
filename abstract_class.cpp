#include<iostream>
using namespace std;
class base
{
	int x;
public:
	base(int arg){
		this->x=arg;

	}

	//pure virtual function
	virtual void show()=0;
	
	int getx(){
		return x;
	}
	
};

class derived: public base
{
int y;
public:
	derived(int p,int q):base(q){
		this->y = p;
	}

//) If we do not override the pure virtual function in derived class,
// then derived class also becomes abstract class.
	void show()
	{
		cout<<"derived: "<<this->y<<endl;
	}

};
int main()
{
	base *b;
	b = new derived(2,3);
	b->show();

	//base
	cout<<b->getx()<<endl;
	
	return 0;
}