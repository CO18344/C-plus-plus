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

	//function pointer for value comparision
	set<int,greater<int> >::value_compare comp = myset.value_comp();

	//last element iterator
	set<int,greater<int> >::reverse_iterator last = myset.rbegin();
	//first element iterator
	set<int,greater<int> >::iterator start = myset.begin();
	
	do{
		cout<<*start<<endl;
		
	}while(comp(*(++start),*last));		//last element will not be printed
										//start = last in case of last element

	return 0;
}