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

	//erasing multiple elements

	map<int,int>::iterator start,end;
	start = mapObject.begin();
	end = mapObject.find(3);		//3 is key

	mapObject.erase(start,end);		//removes from key at start to key at (end-1)
	printMap(mapObject);

	return 0;
}