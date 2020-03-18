#include<iostream>
#include<vector>
using namespace std;
int main()
{

//For First Matrix
int row1=2;
int column1=3;

//For 2nd Matrix
int row2=3;
int column2=1;

//Decalaration of matrix A
vector<vector<int>> A(row1);
for(int i=0;i<row1;i++)
{
	A[i]=vector<int>(column1);
}

//Decalaration of matrix B
vector<vector<int>> B(row2);
for(int i=0;i<row2;i++)
{
	B[i]=vector<int>(column2);
}

//Input matrix A
for(int i=0;i<row1;i++)
{
	for(int j=0;j<column1;j++)
	{
		cin>>A[i][j];
	}
}

//Input matrix B
for(int i=0;i<row2;i++)
{
	for(int j=0;j<column2;j++)
	{
		cin>>B[i][j];
	}
}

//Decalaration of matrix C
vector<vector<int>> C(row1);
for(int i=0;i<row1;i++)
{
	C[i]=vector<int>(column2);
}


//Core Code for multiplication
for(int i=0;i<row1;i++)
{
	for(int j=0;j<column2;j++)
	{
		C[i][j]=0;
		for(int k=0;k<column1;k++)
		{
			C[i][j] = C[i][j] + A[i][k]*B[k][j];
		}
	}
}

cout<<endl;

//Output Matrix C
for(int i=0;i<row1;i++)
{
	for(int j=0;j<column2;j++)
	{
		cout<<C[i][j]<<" ";
	}
	cout<<endl;
}

	return 0;
}