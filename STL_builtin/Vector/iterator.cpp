#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//declaring empty vector
	vector<int> V;

	V.push_back(5);
	V.push_back(7);
	
	//declaring iterator
	vector<int>::iterator vecIt;

	//display using iterator
	vecIt = V.begin();
	while(vecIt != V.end()){
		cout<<*vecIt<<endl;
		vecIt++;
	}
	
	return 0;
}