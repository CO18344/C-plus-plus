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

	return 0;
}