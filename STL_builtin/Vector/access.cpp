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
	
	cout<<"--------------"<<endl;
	//all of the following will give reference of item;
	cout<<V[1]<<endl;

	cout<<V.at(1)<<endl;

	cout<<V.front()<<endl;

	cout<<V.back()<<endl;

	//we can also internal memory of container
	cout<<"--------------"<<endl;
	int * p = V.data();
	cout<<p[0]<<" "<<p[1]<<endl;

	return 0;
}