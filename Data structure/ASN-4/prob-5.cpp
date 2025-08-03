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

void print_left(Node* root){
	if(root == NULL)
		return;
	if(!root->left)
		print_left(root->right);
	print_left(root->left);
	cout<<root->val <<" ";
}
void print_right(Node* root){
	if(root == NULL)
		return;
	cout<<root->val <<" ";
	if(!root->right)
		print_right(root->left);
	print_right(root->right);
}


Node *input_tree(){
	vector<int> v;
	int x;
	while(cin>>x)
		v.push_back(x);
	if(v.size() == 0 || v[0] == -1)
		return NULL;

	Node *root = new Node(v[0]);

	queue<Node *> q;
	q.push(root);

	int i = 1;
	while(!q.empty() && i < v.size()){
		Node *newNode = q.front();
		q.pop();

		if(i < v.size() && v[i] != -1){
			newNode->left = new Node(v[i]);
			q.push(newNode->left);
		}
		i++;

		if(i < v.size() && v[i] != -1){
			newNode->right = new Node(v[i]);
			q.push(newNode->right);
		}
		i++;
	}

	return root;
}

int main(){
	
	Node* root = input_tree();
	print_left(root->left);
	cout<<root->val<<" ";
	print_right(root->right);
	return 0;
}