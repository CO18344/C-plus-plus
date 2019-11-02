/*
This program shows an example
of how to find height of a binarytree
using C++ program.

Additionally it also shows how to make
copy of a binary tree
*/



/*
Note: height of a tree has been taken as the number of nodes on the longest path from the root to a leaf. 
(Some of the authors consider number of edges instead of number of nodes in this definition)
*/
#include<iostream>
using namespace std;

template<class T>
class binarytree
{
	T data;

public:
	
	binarytree<T>* left;
	binarytree<T>* right;


	binarytree(T N)
	{
		data=N;
		left=NULL;
		right=NULL;
	}
  
/*Disp;ay method*/
  void inorder()
	{
		if(this!=NULL)
		{
			this->left->inorder();
			cout<<data;
			this->right->inorder();
		}
	}
/****************/

/*Height calculation*/
	int height()
	{
		if(this==NULL)
			return 0;
		else
		{
			return 1 + max((this->left)->height(),(this->right)->height());
		}
	}
/********************/


	friend void copytree(binarytree<T>* (&po1),binarytree<T>* po2)
	{
		if(po2==NULL)
			po1=NULL;
		else
		{
			po1=new binarytree<T>(po2->data);
			copytree(po1->left,po2->left);
			copytree(po1->right,po2->right);
		}
	}	

};


int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}


int main()
{

	binarytree<int> * root =new binarytree<int>(1);
	root->left=new binarytree<int>(2);
	root->right=new binarytree<int>(3);
	root->left->left=new binarytree<int>(4);
	
	root->inorder();
	cout<<"\n";
	cout<<root->height();
	cout<<"\n";

	binarytree<int> * rootcopy;
	copytree(rootcopy,root);

	rootcopy->inorder();

	delete root->left->left;
	delete root->right;
	delete root->left;
	delete root; 

	delete rootcopy->left->left;
	delete rootcopy->right;
	delete rootcopy->left;
	delete rootcopy; 

	return 0;
}
