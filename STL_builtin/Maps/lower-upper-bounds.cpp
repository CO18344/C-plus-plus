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
	mapObject.insert(pair<int,int>(2,96));

	map<int,int>::iterator mapIt;

	mapIt=mapObject.lower_bound(1);	//return iterator
	cout<<"Key: "<<mapIt->first<<endl;
	cout<<"Value: "<<mapIt->second<<endl;

	mapIt=mapObject.upper_bound(1);	//return iterator
	cout<<"Key: "<<mapIt->first<<endl;
	cout<<"Value: "<<mapIt->second<<endl;

		mapIt = mapObject.begin();

	while( mapIt != mapObject.end() ){

		cout<<mapIt->first<<" -> "<<mapIt->second<<endl;	//key -> value
		mapIt++;
	}

return 0;
}