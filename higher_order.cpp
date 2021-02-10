#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int size);
int mult(int arr[],int size);
function<int(int arr[],int)> higherOrderFunction(int arr[],int,function<int(int arr[],int)>);

int main(){
	cout<<"Implementing higher Order Function in C++"<<endl;

	int arr[]={1,6,5,2};

	cout<<"Double printing for +: "<<higherOrderFunction(arr,4,sum)(arr,4)<<endl;
	cout<<"Double printing for x: "<<higherOrderFunction(arr,4,mult)(arr,4)<<endl;

	return 0;
}

int sum(int arr[],int size){
	
	int sum = 0;
	for(int i=0;i<size;i++){
		sum = sum + arr[i];
	}
	return sum;
}


int mult(int arr[],int size){
	
	int mult = 1;
	for(int i=0;i<size;i++){
		mult = mult * arr[i];
	}
	return mult;
}

function<int(int arr[],int size)> higherOrderFunction(int arr[],int size,function<int(int arr[],int size)>apply){
	cout<<"\nPrinting arr[] after applying operation = "<<apply(arr,size)<<endl;

	return apply;
}