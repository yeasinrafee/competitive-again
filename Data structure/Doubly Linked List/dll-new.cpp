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

int main(){
	
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* tail = new Node(30);

	head->next = a;

	a->prev = head;
	a->next = tail;

	tail->prev = a;

	print_forword(head);
	print_backword(tail);
	

	return 0;
}