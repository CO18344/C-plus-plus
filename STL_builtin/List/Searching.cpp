#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void display(list<int>);
int main()
{
	list<int> L1;	//List1
	list<int> L2;	//List2

	int element;
	int x;

	cout<<"\nEnter data for list1: \n";
	for(int i=0;i<3;i++)
	{
		cin>>x;
		L1.push_back(x);
	}

	cout<<"List 1 contents: \n";
	display(L1);

	cout<<"\nEnter data for list2: \n";
	for(int i=0;i<3;i++)
	{
		cin>>x;
		L2.push_front(x);
	}
	cout<<"List 2 contents: \n";
	display(L2);


	cout<<"\nEnter element to search in both lists: ";
	cin>>element;

	list<int>::iterator it;
	it = find(L1.begin(),L1.end(),element);
	if(it!=L1.end())
	{
		cout<<" "<<element<<" found at index in list1"<<distance(L1.begin(),it)<<endl;
	}
	else
	{
		cout<<" "<<element<<" not found in list1"<<endl;
	}



	it = find(L2.begin(),L2.end(),element);
	if(it!=L2.end())
	{
		cout<<" "<<element<<" found at index in list2"<<distance(L2.begin(),it)<<endl;
	}
	else
	{
		cout<<" "<<element<<" not found in list2"<<endl;
	}

	return 0;
}

void display(list<int>L)
{
	list<int>::iterator it;
	it=L.begin();
	while(it!=L.end())
	{
		cout<<*it<<" ";
		it++;
	}
	cout<<endl;
}
