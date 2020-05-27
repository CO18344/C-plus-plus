#include<iostream>
#include<vector>
#include<algorithm>		//required for find function
using namespace std;

int main()
{
	//declaring empty vector
	vector<int> V;

	V.push_back(5);
	V.push_back(7);
	V.push_back(14);

	vector<int>::iterator vecIt;

	//find is actually std::find
	vecIt = find(V.begin(),V.end(),7);

	if(vecIt != V.end()){
		cout<<"Element found at pos: "<<vecIt - V.begin() + 1<<endl;
	}
	else{
		cout<<"Element not found"<<endl;
	}
	return 0;
}