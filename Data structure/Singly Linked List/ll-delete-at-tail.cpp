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

// Delete From Head
void delete_from_head(Node* &head){
	Node* deleteNode = head;
	head = head->next;
	delete deleteNode;
}

// Delete From any Position
void delete_from_any_pos(Node* &head,  int idx){
	Node* temp = head;
	for(int i = 1; i < idx; i++){
		temp = temp->next;
	}
	Node* deleteNode = temp->next;
	temp->next = temp->next->next;
	delete deleteNode;
}

// Delete at Tail
void delete_at_tail(Node* &head, Node* &tail, int idx){
	Node* temp = head;
	for(int i = 1; i < idx; i++){
		temp = temp->next;
	}
	Node* deleteNode = temp->next;
	temp->next = temp->next->next;
	delete deleteNode;
	tail = temp;
}

// Print LinkedList
void print_linkedList(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
}

// Reverse Print LinkedList
void reverse_print_linkedList(Node* temp){
	if(temp == NULL){
		return;
	}
	reverse_print_linkedList(temp->next);
	cout<<temp->val<<" ";
}

// Input LinkedList
void input_linkedList(Node* &head, Node* &tail){
	int val;
	while(true){
		cin >> val;

		if(val == -1){
			break;
		}
		insert_at_tail_optimized(head, tail, val);
	}
}

// Main Function
int main(){
	Node* head = NULL;
	Node* tail = NULL;

	input_linkedList(head, tail);
	// delete_from_head(head);
	delete_from_any_pos(head, 2);
	print_linkedList(head);
	cout<<endl;
	reverse_print_linkedList(head);
	return 0;
}