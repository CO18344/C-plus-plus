#include<iostream>
#include<vector>
using namespace std;
int main()
{
	//declaring empty vector
	vector<int> V;

	V.push_back(5);
	V.push_back(7);
	
	//size
	cout<<"Size: "<<V.size()<<endl;
	
	//check if it is empty
	cout<<"Vector is "<<(V.empty()?"empty":"not empty")<<endl;

	//max size
	cout<<"Max size: "<<V.max_size()<<endl;

	//capacity
	cout<<"Capacity: "<<V.capacity()<<endl;
	return 0;
}