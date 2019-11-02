#include<iostream>
using namespace std;

template<class T>
class binarytree
{
	T data;	
public:
	binarytree<T>* left;
	binarytree<T>* right;
	/*Constructor*/
	binarytree(T N)
	{
		data=N;
		left = NULL;
		right=NULL;
	}
	/********************/
	
	void preorder()		//preorder traversal
	{
		if(this!=NULL)
		{
		cout<<data<<endl;
		this->left->preorder();
		this->right->preorder();
		}
	}
};




int main()
{
	/*These are inputs for tree*/
	binarytree<int> *root=new binarytree<int>(1);	
	root->left=new binarytree<int>(2);
	root->right=new binarytree<int>(3);
	root->left->left=new binarytree<int>(4);
	root->preorder();
	/***************************/


	/*Releasing the memory space*/
	delete root->left->left;
	delete root->left;
	delete root->right;
	delete root;
	/***************************/

	return 0;
}

