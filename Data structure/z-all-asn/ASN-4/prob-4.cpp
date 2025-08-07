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

void level_nodes(Node* root, int lav){
	vector<int> v;
	if(!root){
		return;
	}

	queue<pair<Node *, int>> q;
	q.push({root, 0});

	while(!q.empty()){
		pair<Node *, int> parent = q.front();
		q.pop();

		Node *node = parent.first;
		int lavel = parent.second;

		if(lavel == lav)
			v.push_back(node->val);
		
		if(node->left)
			q.push({node->left, lavel + 1});			

		if(node->right)
			q.push({node->right, lavel + 1}); 
	}

	if(v.empty())
		cout<<"Invalid"<<endl;
	else{
		for(int x: v)
			cout<<x<<" ";
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
	int lav;
	Node* root = input_tree();
	cin>>lav;
	level_nodes(root, lav);
	cout<<endl;

	return 0;
}