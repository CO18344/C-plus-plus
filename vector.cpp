#include<iostream>
#include<vector>
using namespace std;


int main()
{
	int row,c,query;
	// row=no of rows
	// c=no of columns
	// query=no of queries
	cin>>row>>q;
	
	
	vector<  vector<int> > arr(row);


	for(int i=0;i<row;i++)
	{
		cin>>c;
		arr[i]=vector<int>(c);
		for(int j=0;j<c;j++)
		{
			cin>>arr[i][j];
		}
	}

	int I[100000],J[100000];

	for(int i=0;i<q;i++)
	{
		
		cin>>I[i]>>J[i];
	}

	for(int i=0;i<q;i++)
	{
		
		cout<<arr[I[i]][J[i]]<<endl;
	}






	return 0;
}
