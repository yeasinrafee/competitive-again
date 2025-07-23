#include<bits/stdc++.h>
using namespace std;

int main(){
	
	stack<int> s;
	queue<int> q;

	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int val;
		cin>>val;
		s.push(val);
	}

	int m;
	cin>>m;
	for(int i = 0; i < m; i++){
		int val; 
		cin>>val;
		q.push(val);
	}

	bool flag = false;

	while(!s.empty() && !q.empty()){
		if(s.top() == q.front()){
			flag = true;
		}else{
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