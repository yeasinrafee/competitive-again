#include<bits/stdc++.h>
using namespace std;
class Node{
public: 
	int val;
	Node* next;
	Node* prev;
	Node(int val){
		this->val = val;
		this->next = NULL;
		this->prev = NULL;
	}
};

void print_forword(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

void print_backword(Node* tail){
	Node* temp = tail;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->prev;
	}
	cout<<"\n";
}

void insert_at_head(Node* &head, Node* &tail, int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		tail = newNode;
	}
	newNode->next = head;
	head->prev = newNode;
	head = newNode;
}

void insert_at_tail(Node* &head, Node* &tail, int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		tail = newNode;
		return;
	}
	tail->next = newNode;
	newNode->prev = tail;
	tail = newNode;
}

int main(){
	
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* tail = new Node(30);

	head->next = a;

	a->prev = head;
	a->next = tail;

	tail->prev = a;

	insert_at_head(head, tail, 100);
	insert_at_tail(head, tail, 200);

	print_forword(head);
	

	return 0;
}