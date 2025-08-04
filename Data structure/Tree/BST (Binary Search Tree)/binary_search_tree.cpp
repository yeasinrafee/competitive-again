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

bool search(Node *root, int val){
	if(root == NULL)
		return false;
	if(root->val == val)
		return true;
	if(root->val > val)
		return search(root->left, val);
	else
		return search(root->right, val);
}

void level_order(Node *root){
	queue<Node *> q;
	q.push(root);
	while(!q.empty()){
		Node* f = q.front();
		q.pop();

		cout<<f->val<<" ";

		if(f->left)
			q.push(f->left);
		if(f->right)
			q.push(f->right);
	}
}

void insert(Node* &root, int val){
	if(root == NULL)
		root = new Node(val);

	if(root->val > val){
		if(root->left == NULL)
			root->left = new Node(val);
		else
			insert(root->left, val);
	}else{
		if(root->right == NULL)
			root->right = new Node(val);
		else
			insert(root->right, val);
	}
}

Node* convert(int arr[], int n, int l, int r){
	if(l > r)
		return NULL;
	int mid = (l+r) / 2;
	Node* root = new Node(arr[mid]);

	Node* leftroot = convert(arr, n, l, mid-1);
	Node* rightroot = convert(arr, n, mid+1, r);

	root->left = leftroot;
	root->right = rightroot;

	return root;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	Node* root = convert(arr, n, 0, n-1);
	level_order(root);
	
	return 0;
}