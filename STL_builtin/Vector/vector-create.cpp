#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> V){
cout<<"----------------"<<endl;
	vector<int>::iterator vecIt = V.begin();
	while(vecIt != V.end()){
		cout<<*vecIt<<endl;
		vecIt++;
	}
}

int main()
{
	//declaring empty vector
	vector<int> V;

	//declaration with initialisation ; works with C++11
	vector<int> V1 { 2, 4 ,5 ,5 };
print(V1);

	//initialization via normal array in C++
	int arr[]={3 , 1 , 23, 21, 11,33,3};
	vector<int> V2(arr,arr + sizeof(arr)/sizeof(int));	//equivalent to arr,arr + 7
print(V2);

	return 0;
}