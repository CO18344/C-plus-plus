#include<iostream>
#include<deque>
using namespace std;

void print(deque<int> & dq){
cout<<"-----------------------"<<endl;
	deque<int>::iterator dqit;
	dqit = dq.begin();

	while(dqit != dq.end()){
		cout<<*dqit<<endl;
		dqit++;
	}
}
int main(){

	deque<int> dq  = {2,3,4,5,232,23};
print(dq);

	//elemnt at 3rd index (reference);
	cout<<"3rd index: "<<dq.at(3)<<endl;

	//element at front (reference)
	cout<<"Front: "<<dq.front()<<endl;

	//element at back (refernce)
	cout<<"Back: "<<dq.back()<<endl;

	//element at back (refernce)
	cout<<"Back: "<<dq[5]<<endl;
	return 0;
}