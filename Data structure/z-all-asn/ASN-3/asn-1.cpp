#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, m;
	stack<int> s;
	queue<int> q;
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