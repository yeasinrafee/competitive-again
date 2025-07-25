#include<bits/stdc++.h>
using namespace std;

class Stack{
	list<int> l;

public:
	void push(int val){
		l.push_back(val);
	}

	void pop(){
		l.pop_back();
	}

	int top(){
		return l.back();
	}

	int size(){
		return l.size();
	}

	bool empty(){
		return l.empty();
	}
};

class Queue{
	list<int> l;

public:
	void push(int val){
		l.push_back(val);
	}

	void pop(){
		l.pop_front();
	}

	int front(){
		return l.front();
	}

	int size(){
		return l.size();
	}

	bool empty(){
		return l.empty();
	}
};

int main(){
	
	int n, m;
	Stack s;
	Queue q;
	cin>>n>>m;

	for(int i = 0; i < n; i++){
		int val;
		cin>>val;
		s.push(val);
	}

	for(int i = 0; i < m; i++){
		int val;
		cin>>val;
		q.push(val);
	}

	bool flag = true;
	if(n != m){
		flag = false;
	}
	while(!s.empty() && !q.empty()){
		if(s.top() != q.front()){
			flag = false;
		}
		s.pop();
		q.pop();
	}

	if(flag){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}