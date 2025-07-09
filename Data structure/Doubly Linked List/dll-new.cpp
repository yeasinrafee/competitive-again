#include<bits/stdc++.h>
using namespace std;

// Node class for doubly linked list
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

// Print linked list forword
void print_forword(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

// Print linked list backword
void print_backword(Node* tail){
	Node* temp = tail;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->prev;
	}
	cout<<"\n";
}

// Insert at head
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

// Insert at tail
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

// Insert at any position
void insert_at_any_pos(Node* &head, int idx, int val){
	Node* newNode = new Node(val);
	Node* temp = head;
	for(int i = 1; i < idx; i++){
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next->prev = newNode;
	temp->next = newNode;
	newNode->prev = temp;
}

// Delete From head
void delete_at_head(Node* &head, Node* tail){
	Node* deleteNode = head;
	head = head->next;
	delete deleteNode;
	if(head == NULL){
		tail = NULL;
		return;
	}
	head->prev = NULL;
}

// Delete From tail
void delete_at_tail(Node* &head, Node* &tail){
	Node* deleteNode = tail;
	tail = tail->prev;
	delete deleteNode;
	if(tail == NULL){
		head = NULL;
		return;
	}
	tail->next = NULL;
}

int main(){
	
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* tail = new Node(30);

	head->next = a;

	a->prev = head;
	a->next = tail;

	tail->prev = a;

	delete_at_tail(head, tail);

	print_forword(head);
	
	return 0;
}