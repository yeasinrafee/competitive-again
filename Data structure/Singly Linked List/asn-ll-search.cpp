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
	
	int t, x;
	cin>>t;
	while(t--){
		Node* head = NULL;
		Node* tail = NULL;

		input_linkedList(head, tail);
		cin>>x;

		int count = 0;
		bool flag = false;
		Node* temp = head;
		while(temp != NULL){
			if(temp->val == x){
				flag = true;
				break;
			}
			count++;
			temp = temp->next;
		}

		
		if(flag){
			cout<<count;
		}else{
			cout<<"-1";
		}
		

		cout<<endl;
	}

	return 0;
}