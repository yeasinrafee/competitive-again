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

int main(){
	Node* head = NULL;
	Node* tail = NULL;

	input_linkedList(head, tail);

	int max = INT_MIN;
	int min = INT_MAX;


	Node* temp = head;
	while(temp != NULL){
		if(temp->val > max){
			max = temp->val;
		}
		if(temp->val < min){
			min = temp->val;
		}

		temp = temp->next;
	}

	cout<<max - min <<endl;

	return 0;
}