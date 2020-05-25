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

	map<int,int>::iterator mapIt;

	mapIt=mapObject.find(1);	//return iterator

	cout<<"Key: "<<mapIt->first<<endl;
	cout<<"Value: "<<mapIt->second<<endl;

return 0;
}