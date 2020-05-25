#include<iostream>
#include<map>	//required for using maps
using namespace std;
int main()
{
	//declared an empty map
	map<int,int> mapObject;

	//insertion using insert method of class map
	mapObject.insert(pair<int,int>(0,92));
	mapObject.insert(pair<int,int>(1,94));
	mapObject.insert(pair<int,int>(2,56));

	//copying map values : direct assignment
	map<int,int> mapObject_copy;
	mapObject_copy = mapObject;

	//: using iterators
	map<int,int> mapObject_copy2(mapObject.begin(),mapObject.end());

	return 0;
}