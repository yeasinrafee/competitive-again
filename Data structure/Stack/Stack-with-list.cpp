#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
	list<int> l;

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

int main(){
	
	// Input stack
	Stack st;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int x;
		cin>>x;
		st.push(x);
	}

	// Output stack using for loop
	for(int i = 0; i < n; i++){
		cout<<st.top()<<" ";
		st.pop();
	}

	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	return 0;
}