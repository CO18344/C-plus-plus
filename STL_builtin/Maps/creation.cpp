#include<iostream>
#include<map>	//required for using maps
using namespace std;
int main()
{
	//declared an empty map
	map<int,int> mapObject;

	//key-value pairs
	mapObject[0] = 92;
	mapObject[1] = 94;
	mapObject[2] = 56;

	//reading key-value
	for(int i=0;i<=2;i++)
		cout<<mapObject[i]<<endl;

	return 0;
}