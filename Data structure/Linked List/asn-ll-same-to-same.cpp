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

int main(){
	
	Node* head1 = NULL;
	Node* tail1 = NULL;
	Node* head2 = NULL;
	Node* tail2 = NULL;

	input_linkedList(head1, tail1);
	input_linkedList(head2, tail2);

	bool flag = true;

	Node* temp1 = head1;
	Node* temp2 = head2;

	while(temp1 != NULL && temp2 != NULL){
		if(temp1->val != temp2->val){
			flag = false;
			break;
		}
		temp1 = temp1->next;
		temp2 = temp2->next;
	}
	if(temp1 != NULL || temp2 != NULL){
		flag = false;
	}

	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	

	return 0;
}