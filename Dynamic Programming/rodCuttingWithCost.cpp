#include<iostream>
#include<limits.h>
using namespace std;

int RodCutting(int *price,int n,int *r)
{
	int c=0;
	int q=INT_MIN;
	int t;
	int i;
	if(r[n]>=0)
		return r[n];
	if(n==0)
		q= 0;
	else
	{
		
		for(i=1;i<=n;i++)
		{
			t=price[i-1]+RodCutting(price,n-i,r);
			if(n-i==0)
				c=0;
			else
				c=2;
			if(q<t-c)
			{
				q=t-c;
			}
		}
			
		
	}
	r[n]=q;
	return q;
}
int main()
{
	int price[]={1,5,8,9,10,17,17,20,24,30};
	int length=sizeof(price)/sizeof(int);
	int *r= new int[length+1];
	for(int i=0;i<=length;i++)
	{
		*(r+i)=INT_MIN;

		//cout<<r[i]<<endl;
	}
	int n=10;
	
	for(int i=1;i<=n;i++)
		cout<<RodCutting(price,i,r)<<endl;
	
	return 0;
}
