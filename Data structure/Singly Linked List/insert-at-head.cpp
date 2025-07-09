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

void insert_at_head(Node* &head, int val){
	Node* newnode = new Node(val);
	newnode->next = head;
	head = newnode;
}

void print_linkedlist(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
}

int main(){
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);

	head->next = a;
	a->next = b;

	insert_at_head(head, 100);
	print_linkedlist(head);
	

	return 0;
}