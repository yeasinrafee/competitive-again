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

// Input LinkedList at tail optimized
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

// Print LinkedList
void print_linkedList(Node* head){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->val<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

int main(){
	
	Node* head = NULL;
	Node* tail = NULL;

	int val;
	while(true){
		cin>>val;
		if(val == -1){
			break;
		}
		insert_at_tail_optimized(head, tail, val);
	}

	for(Node* i = head; i != NULL; i = i->next){
		Node* temp = i;
		for(Node* j = i->next; j!=NULL; j = temp->next){
			if(j->val == i->val){
				Node* deleteNode = j;
				temp->next = j->next;
				if(deleteNode == tail){
					tail = temp;
				}
				delete deleteNode;
			}else{
				temp = j;
			}
		}
	}

	print_linkedList(head);

	return 0;
}