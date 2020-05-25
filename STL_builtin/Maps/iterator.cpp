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


	//iterator is used to read access items from map
	//iterator is a nested class
	map<int,int>::iterator mapIt;
	mapIt = mapObject.begin();

	while( mapIt != mapObject.end() ){

		cout<<mapIt->first<<" -> "<<mapIt->second<<endl;	//key -> value
		mapIt++;
	}

	return 0;
}