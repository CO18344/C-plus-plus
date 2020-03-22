#include<iostream>
using namespace std;

int compare(const void *a,const void *b)
{
	return *(int*)a-*(int*)b;
}

int compare2(const void *a,const void *b)
{
	return *(int*)b - *(int*)a;
}
int main()
{
	int arr[]={6,2,12,65,22};
	int n=5;

	qsort(arr,n,sizeof(int),compare);

	cout<<"Ascending order: \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	cout<<"Descending order: ";
	qsort(arr,n,sizeof(int),compare2);

	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}