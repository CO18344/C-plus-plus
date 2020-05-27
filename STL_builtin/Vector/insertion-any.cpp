#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> V){
cout<<"----------------"<<endl;
	vector<int>::iterator vecIt = V.begin();
	while(vecIt != V.end()){
		cout<<*vecIt<<endl;
		vecIt++;
	}
}
int main()
{
	//declaring empty vector
	vector<int> V;

	V.push_back(5);
	V.push_back(7);
print(V);
	//insertion takes place before specified element

	//as first element
	V.insert(V.begin(),3);
print(V);
	return 0;
}