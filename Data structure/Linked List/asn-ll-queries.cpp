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

// Insert At Head
void insert_at_head(Node* &head, Node* &tail, int val){
	Node* newNode = new Node(val);
	if(head == NULL){
		head = newNode;
		tail = newNode;
		return;
	}
	newNode->next = head;
	head = newNode;
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

// Delete From Head
void delete_from_head(Node* &head, Node* &tail){
	Node* deleteNode = head;
	head = head->next;
	delete deleteNode;
	if(head == NULL){
		tail = NULL;
	}
}


// Delete From any Position
void delete_from_any_pos(Node* &head, Node* &tail, int idx){
	Node* temp = head;
	for(int i = 1; i < idx; i++){
		temp = temp->next;
	}
	Node* deleteNode = temp->next;
	temp->next = temp->next->next;

	if(deleteNode == tail){
		tail = temp;
	}
	delete deleteNode;
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

// Size LinkList
int size_of_linkList(Node* &head){
	int count = 0;
	Node* temp = head;
	while(temp != NULL){
		count++;
		temp = temp->next;
	}
	return count;
}

int main(){
	int q;
	cin>>q;
	Node* head = NULL;
	Node* tail = NULL;
	while(q--){
		int x, v;
		cin>>x>>v;

		if(x == 0){
			insert_at_head(head, tail, v);
			print_linkedList(head);
		}else if(x == 1){
			insert_at_tail_optimized(head, tail, v);
			print_linkedList(head);
		}else if(x == 2){
			int sz = size_of_linkList(head);

			if(sz == 0 || v < 0 || v >= sz){
                print_linkedList(head);
				continue;
			}

			if(v == 0){
				delete_from_head(head, tail);
			}else{
				delete_from_any_pos(head, tail, v);
			}

			print_linkedList(head);
		}
	}
	

	return 0;
}