#include<iostream>
#include<set>	//req for set
using namespace std;

void print(set<int, greater<int> > &myset){
	set<int, greater<int> >::iterator setit;
	setit = myset.begin();

	while( setit != myset.end() ){
		cout<<*setit<<endl;
		setit++;
	}
}
int main(){

	//empty set; values will be stored in descending order
	 set <int, greater <int> > myset;

	 myset.insert(12);
	 myset.insert(65);
	 myset.insert(19);

print(myset);

	cout<<"Size: "<<myset.size()<<endl;
	cout<<"Max Size: "<<myset.max_size()<<endl;
	cout<<"Set is "<<(myset.empty()?"empty":"not empty")<<endl;

	return 0;
}