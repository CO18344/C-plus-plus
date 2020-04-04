#include<iostream>
#include<limits.h>
using namespace std;

int fib(int n,int *r)
{
	int val=0;
	if(r[n]>=0)
		return r[n];
	else
	{
		val = fib(n-1,r)+fib(n-2,r);
		r[n]=val;
	}
	return val;
}

int main()
{
	
	int n;
	cin>>n;
	
	int *r = new int[n+1];
	
	for(int i=0;i<=n;i++)
	{
		r[i]=INT_MIN;
	}
	r[0]=0;
	r[1]=1;
	cout<<fib(n,r)<<endl;
	
	
	return 0;
}
