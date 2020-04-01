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
	Node<T>* TreeMinimum(Node<T>* root1);
	Node<T>* TreeMaximum(Node<T>* root1);
	Node<T>* SearchNode(T key);
	Node<T>* Successor(Node<T>* root1);
	void Transplant(Node<T>*,Node<T>*);
	void deleteNode(Node<T>*);
	
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
	newNode->parent=newNode->left=newNode->right=0;
	
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
	//cout<<"Traversal begin"<<endl;
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

template<typename T>
Node<T>* BinaryTree<T>::TreeMinimum(Node<T>* root1=0)
{
	Node<T>* root=TreeRoot;
	if(root1!=0)
		root=root1;
	while(root->left!=0)
	{
		root=root->left;
	}
	return root;
}

template<typename T>
Node<T>* BinaryTree<T>::TreeMaximum(Node<T>* root1=0)
{
	Node<T>* root=TreeRoot;
	if(root1!=0)
		root=root1;
	while(root->right!=0)
	{
		root=root->right;
	}
	return root;
}

template<typename T>
Node<T>* BinaryTree<T>::SearchNode(T key)
{
	Node<T>* root=TreeRoot;
	
	while(root!=0 and key!=root->key)
	{
		if(key<root->key)
		{
			root=root->left;
		}
		else
			root=root->right;
	}
	return root;
}

template<typename T>
Node<T>* BinaryTree<T>::Successor(Node<T>* root1=0)
{
	Node<T>* root=TreeRoot;
	if(root!=0)
		root=root1;
	
	if(root->right!=0)
		return TreeMinimum(root->right);
	Node<T>* y = root->parent;
	while(y!=0 and root==y->right)
	{
		root = y;
		y = y->parent; 
	}
	return y;
}

template<typename T>
void BinaryTree<T>::Transplant(Node<T>* u,Node<T>* v)
{
	if(u->parent==0)
	{
		this->TreeRoot=v;
	}
	else
	{
		if(u->parent->left==u)
		{
			u->parent->left=v;
		}
		else
			u->parent->right=v;
		
		if(v!=0)
		{
			v->parent=u->parent;
		}
		
	}
	
}

template<typename T>
void BinaryTree<T>::deleteNode(Node<T>* z)
{
	
	
	Node<T>*y=0;	
	if(z->left==0)
	{
		Transplant(z,z->right);
	}
	else if(z->right==0)
	{
		Transplant(z,z->left);
	}
	else
	{
		y = TreeMinimum(z->right);
		if(y->parent!=z)
		{
			Transplant(y,y->right);
			y->right=z->right;
			z->right->parent=y;
		}
		Transplant(z,y);
		y->left=z->left;
		z->left->parent=y;
		
		
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