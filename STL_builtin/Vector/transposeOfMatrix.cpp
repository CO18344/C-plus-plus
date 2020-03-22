#include<iostream>
#include<vector>
using namespace std;

int main()
{

	int row;
	int column;
	int element;

	cout<<"Enter Rows: ";
	cin>>row;
	cout<<"Enter Column: ";
	cin>>column;

	vector<vector<int>> V(row);

	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			cin>>element;
			V[i].push_back(element);
		}
	}

	vector<vector<int>>::iterator it;
	vector<int>::iterator it2;

	cout<<"\nMatrix you just entered: \n";
	for(it=V.begin();it!=V.end();it++)
	{
		for(it2=it->begin();it2!=it->end();it2++)
		{
			cout<<*it2<<" ";
		}
		cout<<endl;
	}

	cout<<"\nTranspose Of Matrix: "<<endl;
	vector<vector<int>> T(column,vector<int>(row));
	for(int i=0;i<V.size();i++)
	{
		for(int j=0;j<V[i].size();j++)
		{
			T[j][i]=V[i][j];
		}
	}


	for(it=T.begin();it!=T.end();it++)
	{
		for(it2=it->begin();it2!=it->end();it2++)
		{
			cout<<*it2<<" ";
		}
		cout<<endl;
	}
	return 0;
}