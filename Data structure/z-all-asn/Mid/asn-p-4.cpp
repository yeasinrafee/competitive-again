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
	cout<<"L -> ";
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

// Print linked list backword
void print_backword(Node* tail){
	Node* temp = tail;
	cout<<"R -> ";
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
		return;
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

// Delete From any position
void delete_at_any_pos(Node* head, int idx){
	Node* temp = head;
	for(int i = 1; i < idx; i++){
		temp = temp->next;
	}
	Node* deleteNode = temp->next;
	temp->next = temp->next->next;
	temp->next->prev = temp;
	delete deleteNode;
}

// Input Doubly Linked List
void input_DLinkedList(Node* &head, Node* &tail){
	int val;
	while(true){
		cin>>val;
		if(val == -1){
			break;
		}
		insert_at_tail(head, tail, val);
	}
}

// Reverse Doubly Linked List
void reverse_DoublyLinkedList(Node* head, Node* tail){
	for(Node *i = head, *j = tail; i != j && i->prev != j ; i = i->next, j = j->next){
		swap(i->val, j->val);
	}
}

// Return the size of the Doubly Linked List
int size(Node* head){
	int count = 0;
	Node* temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}


int main(){
	
	Node* head = NULL;
	Node* tail = NULL;

	int q;
	cin>>q;
	while(q--){
		int x, v;
		cin>>x>>v;

		int sz = size(head);

		if(x < 0 || x >sz){
			cout<<"Invalid"<<endl;
		}else if(x == 0){
			insert_at_head(head, tail, v);
			print_forword(head);
			print_backword(tail);
		}else if(x == sz){
			insert_at_tail(head, tail, v);
			print_forword(head);
			print_backword(tail);
		}else{
			insert_at_any_pos(head, x, v);
			print_forword(head);
			print_backword(tail);
		}
	}
	
	return 0;
}