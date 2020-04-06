#include<iostream>
using namespace std;

struct adjListNode
{
	int id;
	adjListNode *next;
};

struct adjList
{
	adjListNode* start;
};

class Graph
{
	int v;
	adjList *array;
	
public:
	
	Graph()
	{
		this->v=0;
		this->array=0;
	}
	
	void setVertices(int x)
	{
		this->v=x;
	
		this->array=new adjList[this->v];
		
		for(int i=0;i<this->v;i++)
		{
			(*(this->array+i)).start=0;
		}
		
	}
	
	void insertEdge(int sourceVertex,int destinationVertex)
	{
		if(sourceVertex>=v or destinationVertex>=v)
		{
			cout<<"\nEither source or destination vertex is invalid or does not exist"<<endl;
			return;
		}
		
		adjListNode *newNode = new adjListNode;
		newNode->id=destinationVertex;
		newNode->next=this->array[sourceVertex].start;
		this->array[sourceVertex].start=newNode;
	}
	
	void print()
	{
		adjListNode* ptr=0;
		for(int i=0;i<this->v;i++)
		{
			cout<<"Adjacency list for vertex "<<i<<endl;
			ptr=this->array[i].start;
			while(ptr!=0)
			{
				cout<<ptr->id<<" ";
				ptr=ptr->next;
			}
			cout<<endl;
		}
	}
};

int main()
{
	Graph G;
	G.setVertices(5);
	G.insertEdge(0,1);
	G.insertEdge(0,2);
	G.insertEdge(0,4);
	G.insertEdge(2,3);
	G.insertEdge(3,4);
	G.insertEdge(4,0);
	
	G.print();
	
	return 0;
}
