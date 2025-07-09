#include<bits/stdc++.h>
using namespace std;

// Creating Node
class Node{
public:
	int val;
	Node* next;
	Node(int val){
		this->val = val;
		next = NULL;
	}
};
// Insert At Head
void insert_at_head(Node* &head, int val){
	Node* newNode = new Node(val);
	newNode->next = head;
	head = newNode;
}
// Insert At Tail
void insert_at_tail(Node* &head, int val){
	Node* newNode = new Node(val);
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}
// Insert At Tail Optimized
void insert_at_tail_optimized(Node* &head, Node* &tail, int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		tail = newNode;
		return;
	}
	
	tail->next = newNode;
	tail = newNode;
}
// Insert At Any Position
void insert_at_any_pos(Node* &head, int idx, int val){
	Node* newNode = new Node(val);
	Node* temp = head;
	for(int i = 1; i < idx; i++){
		temp = temp->next;
	}
	newNode->next = temp->next;
	temp->next = newNode;
}
// Print LinkedList
void print_linkedList(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
}

int main(){
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* tail = new Node(30);

	head->next = a;
	a->next = tail;
	
	
	// insert_at_head(head, 5);
	// insert_at_tail(head, 40);
	// insert_at_tail_optimized(head,tail, 50);
	insert_at_any_pos(head, 1, 5);
	print_linkedList(head);

	return 0;
}