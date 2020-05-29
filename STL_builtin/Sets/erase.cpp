#include<iostream>
#include<set>	//req for set
using namespace std;

void print(set<int, greater<int> > &myset){
	cout<<"--------------------"<<endl;
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
	 myset.insert(26);
	 myset.insert(95);

print(myset);

	//erase one: first element or largest element (using iterators)
	myset.erase(myset.begin());
print(myset);

	//erasing multiple: first and second elements (using iterators)
	myset.erase(myset.begin(),myset.find(19));
print(myset);

	//erase with value
	myset.erase(19);
print(myset);

	return 0;
}