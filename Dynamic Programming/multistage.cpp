#include<iostream>
#include<climits>
using namespace std;
int main()
{
		int cost[12]={0,0,0,0};
		int d[12]={0,0,0,0};
		int path[12];
		int min=INT_MAX;
		int stage=5;
		int maxVertexIndex=11;
		d[11]=11;
		int C[12][12]={	{0,9,7,3,2,0,0,0,0,0,0,0},
						{0,0,0,0,0,4,2,1,0,0,0,0},
						{0,0,0,0,0,2,7,0,0,0,0,0},
						{0,0,0,0,0,0,0,11,0,0,0,0},
						{0,0,0,0,0,0,11,8,0,0,0,0},
						{0,0,0,0,0,0,0,0,6,5,0,0},
						{0,0,0,0,0,0,0,0,4,3,0,0},
						{0,0,0,0,0,0,0,0,0,5,6,0},
						{0,0,0,0,0,0,0,0,0,0,0,4},
						{0,0,0,0,0,0,0,0,0,0,0,2},
						{0,0,0,0,0,0,0,0,0,0,0,5},
						{0,0,0,0,0,0,0,0,0,0,0,0},
					  };

	for(int i=maxVertexIndex-1;i>=0;i--)
	{
		min=INT_MAX;
		for(int k=i+1;k<=maxVertexIndex;k++)
		{
			if(C[i][k]!=0 && C[i][k]+cost[k]<min)
			{
				min=C[i][k]+cost[k];
				d[i]=k;
			}
		}
		cost[i]=min;
	}
	
	path[0]=0;
	int j=path[0];
	path[stage-1]=maxVertexIndex;
	for(int i=1;i<stage-1;i++)
	{	
		path[i]=d[j];
		j=path[i];
	}

	for(int i=0;i<=4;i++)
	{
		cout<<path[i]+1<<" ";
	}
	cout<<endl;



	return 0;
}