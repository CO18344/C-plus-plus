#include<iostream>
#include<deque>
#include<vector>
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

	deque<int> dq;

	//at end
	dq.push_back(1);
	dq.push_back(2);

	//at front
	dq.push_front(4);
	dq.push_front(3);
print(dq);

	//using insert method in three formats
	deque<int>::iterator dqit;
	dqit = dq.begin();
	dqit++;

	dq.insert(dqit,15);			//at 2nd position
print(dq); 

	dq.insert(dqit,3,17);			//from 3rd position; 3 times with value 17
print(dq); 

	
	vector<int>v = {25,50};
	dq.insert(dqit,v.begin(),v.end());			//from 3rd position; object v
print(dq); 
	return 0;
}
