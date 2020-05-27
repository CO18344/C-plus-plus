#include<iostream>
#include<vector>
#include<algorithm> 	//required for sort function
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

	V.push_back(100);
	V.push_back(45);
	V.push_back(95);
print(V);

	//sort
	sort(V.begin(),V.end());
print(V);
	return 0;
}