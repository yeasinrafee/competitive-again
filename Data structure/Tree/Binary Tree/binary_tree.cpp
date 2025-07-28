#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
	int val;
	Node* left;
	Node* right;
	Node(int val){
		this->val = val;
		this->left = NULL;
		this->right = NULL;
	}
};

void preorder(Node* root){
	if(root == NULL)
		return;
	cout<<root->val <<" ";
	preorder(root->left);
	preorder(root->right);
}

void inorder(Node* root){
	if(root == NULL)
		return;
	inorder(root->left);
	cout<<root->val <<" ";
	inorder(root->right);
}

void postorder(Node* root){
	if(root == NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->val <<" ";
}

void level_order(Node* root){
	if(!root){
		cout<<"No Tree"<<endl;
		return;
	}

	queue<Node *> q;
	q.push(root);

	while(!q.empty()){
		Node* f = q.front();
		q.pop();

		cout<< f->val <<" ";

		if(f->left)
			q.push(f->left);			

		if(f->right)
			q.push(f->right); 
	}
}

Node *input_tree(){
	int val;
	cin>>val;

	Node* root;

	if(val == -1) root = NULL;
	else root = new Node(val);

	queue<Node *> q;
	if(root) q.push(root);

	while(!q.empty()){
		Node* p = q.front();
		q.pop();

		int l, r;
		cin>>l>>r;

		Node *myleft, *myright;

		if(l == -1) myleft = NULL;
		else myleft = new Node(l);

		if(r == -1) myright = NULL;
		else myright = new Node(r);

		p->left = myleft;
		p->right = myright;

		if(p->left) q.push(p->left);
		if(p->right) q.push(p->right);
	}

	return root;
}


int main(){
	
	Node* root = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(40);
	Node* d = new Node(50);
	Node* e = new Node(60);

	root->left = a;
	root->right = b;
	a->left = c;
	b->left = d;
	b->right = e;
	

	return 0;
}