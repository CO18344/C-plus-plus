#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int size;
	int elementToBeSearched;
	cin>>size;
	vector<int> V(size);
	for(int i=0;i<size;i++)
	{
		cin>>V[i];
	}
	cout<<endl;
	vector<int>::iterator it;
	cin>>elementToBeSearched;

	//Using simple for loop
	for(it=V.begin();it!=V.end();it++)
	{
		if(*it==elementToBeSearched)
		{
			cout<<"Element found at position "<< distance(V.begin(),it) + 1;
		}
	}


	// Another way is to use stl builtin
	it = find(V.begin(),V.end(),elementToBeSearched);
	if(it!=V.end())
	{
		cout<<"Element found at position "<< it-V.begin() + 1;//ANother way to find index; +1 is for getting position
	}
	return 0;
}
