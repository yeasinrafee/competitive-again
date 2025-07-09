#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
	int val;
	Node* next;
	Node(int val){
		this->val = val;
		next = NULL;
	}
};

int main(){
	
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);

	head->next = a;
	a->next = b;

	cout<< head->val << " " << a->val << " " << b->val << " " << endl;
	cout << a->next->val << " " << endl;

	return 0;
}