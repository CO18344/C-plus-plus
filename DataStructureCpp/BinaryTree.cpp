#include<iostream>
using namespace std;
#include"stack.h" //This library is required for implementing iterative inorder traversal using stack data structure

template<typename T>
struct Node
{
	T key;
	Node* left;
	Node* right;
	Node* parent;
	
};

template<typename T>
class BinaryTree
{
	Node<T>* TreeRoot;
	
public:
	
	BinaryTree();
	void AddNode(T key);
	void Inorder();
	void InorderTraversal(Node<T>*);
	void Preorder();
	void PreorderTraversal(Node<T>*);
	void Postorder();
	void PostorderTraversal(Node<T>*);
	
	/* Methods for implementing iterative inorder traversal*/
	void FILL_STACK(Node<T>* &,stack<Node<int>*>&);
	void InorderIterative(stack<Node<int>*>&);	
};

/*Constructor*/
template<typename T>
BinaryTree<T>::BinaryTree()
{
	this->TreeRoot=0;
}

/*Insertion*/
template<typename T>
void BinaryTree<T>::AddNode(T key)
{
	
	Node<T> *y;
	Node<T> *x;
	
	/*Code for new node creation*/
	Node<T> *newNode = new Node<T>;
	newNode->key=key;
	newNode->left=newNode->right=0;
	
	y=0;
	x=this->TreeRoot;
	
	while(x!=0)
	{
		y=x;
		if(newNode->key <= x->key)
			x=x->left;
		else
			x=x->right;
	}
	
	newNode->parent=y;
	
	if(y==0)
		this->TreeRoot=newNode;
	else if(newNode->key <= y->key)
		y->left=newNode;
	else
		y->right=newNode;
}

/*Inorder Traversal*/
template<typename T>
void BinaryTree<T>::Inorder()
{
	Node<T>* x= TreeRoot;
	InorderTraversal(x);
	cout<<endl;
}

template<typename T>
void BinaryTree<T>::InorderTraversal(Node<T> *root)
{
	if(root==0)
		return;
	else
	{
		InorderTraversal(root->left);
		cout<<root->key<<" ";
		InorderTraversal(root->right);
	}
}

/*iterative Inorder Traversal*/
template<typename T>
void BinaryTree<T>::InorderIterative(stack<Node<int>*> &S)
{
	Node<T>* x=TreeRoot;
	FILL_STACK(x,S);
	
	while(S.isStackEmpty()==false)
	{
		Node<T>* element = S.pop();
		cout<<element->key<<" ";
		x=element->right;
		FILL_STACK(x,S);
	}
	
	cout<<endl;

}

template<typename T>
void BinaryTree<T>::FILL_STACK(Node<T>* &x,stack<Node<int>*> &S)
{
	while(x!=0)
	{
		S.push(x);
		x=x->left;
	}
}

template<typename T>
void BinaryTree<T>::Preorder()
{
	Node<T>* x=this->TreeRoot;
	PreorderTraversal(x);
	cout<<endl;
}

template<typename T>
void BinaryTree<T>::PreorderTraversal(Node<T>* root)
{
	if(root==0)
		return;
	else
	{
		cout<<root->key<<" ";
		PreorderTraversal(root->left);
		PreorderTraversal(root->right);
	}
}

template<typename T>
void BinaryTree<T>::Postorder()
{
	Node<T>* x=this->TreeRoot;
	PostorderTraversal(x);
	cout<<endl;
}

template<typename T>
void BinaryTree<T>::PostorderTraversal(Node<T>* root)
{
	if(root==0)
		return;
	else
	{
		
		PostorderTraversal(root->left);
		PostorderTraversal(root->right);
		cout<<root->key<<" ";
	}
}

int main()
{

	BinaryTree<int> B;
	B.AddNode(4);
	B.AddNode(26);
	B.AddNode(-9);
	B.AddNode(15);
	
	B.Inorder();
	B.Preorder();
	B.Postorder();

	return 0;
}