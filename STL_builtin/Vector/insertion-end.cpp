#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>  &V)
{
	//print using simple for loop
	for(int i=0;i<V.size();i++)
	{
		cout<<V[i]<<endl;
	}

}

int main()
{
	//declaring empty vector
	vector<int> V;

	V.push_back(5);
	V.push_back(7);

	print(V);
	
	return 0;
}

