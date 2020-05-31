#include<iostream>
#include<deque>
using namespace std;

void print(deque<int>&dq){
cout<<"------------------"<<endl;
	deque<int>::iterator dqit = dq.begin();
	while(dqit != dq.end() ){
		cout<<*dqit<<endl;
		dqit++;
	}
}
int main(){

	deque<int> dq = {1,2,3,4,5,6,7,8,9};

	dq.pop_front();
	dq.pop_back();
	

print(dq);

	//using erase 
	deque<int>::iterator dqit;
	dqit = dq.begin();

	//removing first element
	dq.erase(dqit);
print(dq);

	//removing 6 7 8 9
	dq.erase(dq.begin()+3,dq.end());
print(dq);

	return 0;
}
