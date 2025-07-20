#include<bits/stdc++.h>
using namespace std;

class Stack{
public:
	vector<int> v;

	void push(int val){
		v.push_back(val);
	}
	void pop(){
		v.pop_back();
	}
	int top(){
		return v.back();
	}
	int size(){
		return v.size();
	}
	bool empty(){
		return v.empty();
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