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

void insert_at_tail(Node* &head, int val){
	Node* newnode = new Node(val);

	if(head == NULL){
		head = newnode;
		return;
	}

	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newnode;
}

void insert_at_tail_optimized(Node* &head, Node* &tail, int val){
	Node* newnode = new Node(val);

	if(head == NULL){
		head = newnode;
		tail = newnode;
		return;
	}
	tail->next = newnode;
	tail = newnode;
}

void insert_at_any_pos(Node* &head, int idx, int val){
	Node* newnode = new Node(val);
	Node* temp = head;
	for(int i = 1; i < idx; i++ ){
		temp = temp->next;
	}
	newnode->next = temp->next;
	temp->next = newnode;
}

void print_linkedlist(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<endl;
}

int main(){
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* tail = new Node(30);

	head->next = a;
	a->next = tail;

	insert_at_tail_optimized(head, tail, 40);
	insert_at_tail_optimized(head, tail, 50);
	insert_at_tail_optimized(head, tail, 60);
	print_linkedlist(head);
	cout<<"Tail: "<<tail->val<<endl;
	

	return 0;
}