#include<iostream>
using namespace std;
struct node
{
	int info;
	int priority;
	struct node * next;
};


struct Queue
{
	node* rear=0;
	node* front=0;	
	node* temp;
	node* ptr;
	node* preptr;
	void insert_node(int,int);
	void delete_node();
	void show_queue();
};

void Queue::insert_node(int P,int I)
{
	temp=new node;

	if(temp==NULL)
	{
		cout<<"Memory Allocation failed"<<endl;
	}
	else
	{
		temp->info=I;
		temp->priority=P;
		temp->next=0;

		if(front==0)
		{
			temp->next=front;
			front=temp;
		}
		else if(P< front->priority)
		{
			temp->next=front;
			front=temp;
		}
		else
		{
		ptr=preptr=front;	
		while(ptr->next!=NULL && ptr->priority<= P)
		{
			preptr=ptr;
			ptr=ptr->next; 
		}

		if(ptr->next==NULL)
		{
			ptr->next=temp;
			return;
		}
		
		preptr->next=temp;
		temp->next=ptr;
		}

		return;
		

	}
}
void Queue::delete_node()
{
	if(front==0)
	{
		cout<<"Queue UNDERFLOW"<<endl;
	}
	else
	{
		ptr=front;
		cout<<"Deleting node containing Info: "<<ptr->info<<"\n Priority: "<<ptr->priority<<endl;
		front=front->next;
		delete ptr;
	}
	return;
}

void Queue::show_queue()
{
	ptr=front;
	cout<<"    Front"<<endl;
	cout<<"   /"<<endl;
	cout<<"  /"<<endl;
	cout<<" /"<<endl;
	while(ptr!=NULL)
	{
		cout<<ptr->info<<endl;
		ptr=ptr->next;
	}
	cout<<" \\"<<endl;
	cout<<"  \\"<<endl;
	cout<<"   \\"<<endl;
	cout<<"    NULL"<<endl;
}
int main()
{
	cout<<"Priority Queue"<<endl<<endl;
	Queue Q;
	Q.insert_node(1,2);
	Q.insert_node(3,3);
	Q.insert_node(3,4);
	Q.insert_node(4,5);
	Q.insert_node(-5,1);
	Q.insert_node(12,6);

	Q.delete_node();
	Q.delete_node();

	Q.show_queue();

	return 0;

}
