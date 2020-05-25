#include<iostream>
#include<map>	//required for using maps
using namespace std;

void printMap(map<int,int> & mapObject)
{
	map<int,int>::iterator mapIt;
	mapIt = mapObject.begin();

	while( mapIt != mapObject.end() ){

		cout<<mapIt->first<<" -> "<<mapIt->second<<endl;	//key -> value
		mapIt++;
	}
}

int main()
{
	//declared an empty map
	map<int,int> mapObject;

	//insertion using insert method of class map
	mapObject.insert(pair<int,int>(0,92));
	mapObject.insert(pair<int,int>(1,94));
	mapObject.insert(pair<int,int>(2,56));
	mapObject.insert(pair<int,int>(3,58));
	mapObject.insert(pair<int,int>(4,60));
	mapObject.insert(pair<int,int>(5,62));


	//removing elements : using key
	mapObject.erase(1);						//removes key1 element i,e 94
	printMap(mapObject);

	cout<<"-----------\n";

	//: using iterators
	mapObject.erase(mapObject.begin());		//removes first element
	printMap(mapObject);

	return 0;
}