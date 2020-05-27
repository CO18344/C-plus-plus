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
	V.push_back(2);
print(V);
	
	//delete by iterator
	V.erase( V.begin() );
print(V);

	//deleting last element
	V.pop_back();
print(V);

	return 0;
}