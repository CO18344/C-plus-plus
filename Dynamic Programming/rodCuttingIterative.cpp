#include<iostream>
#include<limits.h>
using namespace std;

void rodCutting(int *price,int n,int *r)
{
	int q;
	r[0]=0;
	for(int i=1;i<=n;i++)
	{
		q=INT_MIN;
		for(int j=1;j<=i;j++)
		{
			q=max(q,price[j-1]+r[i-j]);
		}
		r[i]=q;
		cout<<r[i]<<endl;
	}
	

}
int main()
{
	//cout<<"Let's duel";
	
	int price[]={1,5,8,9,10,17,17,20,24,30};
	int length=sizeof(price)/sizeof(int);
	int *r= new int[length];
	for(int i=0;i<=length;i++)
	{
		*(r+i)=INT_MIN;

		//cout<<r[i]<<endl;
	}
	int n=10;
	rodCutting(price,n,r);
	return 0;
}
