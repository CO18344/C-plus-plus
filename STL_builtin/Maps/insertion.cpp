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

	//reading key-value
	for(int i=0;i<=2;i++)
		cout<<mapObject[i]<<endl;

	return 0;
}