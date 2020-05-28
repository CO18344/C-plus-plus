#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){

	vector<int> v = {3,5,0,-5,32,12,9};
	sort(v.begin(),v.begin() + v.size());	//-5 0 3 5 9 12 32

	vector<int>::iterator vit;
	vit = lower_bound(v.begin(),v.end(),9);		//greater than or equal to value

	cout<<"Lower bound for element 2: "<<vit - v.begin() + 1<<endl;

	vit = upper_bound(v.begin(),v.end(),9);		//greater than value
	cout<<"Upper bound for element 2: "<<vit - v.begin() + 1<<endl;
	return 0;
}