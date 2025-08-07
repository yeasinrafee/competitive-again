#include<bits/stdc++.h>
using namespace std;

int main(){
	
	priority_queue<int, vector<int>, greater<int>> pq;
	int n;
	cin>>n;
	for(int i = 0; i < n; i++){
		int val;
		cin>>val;
		pq.push(val);
	}

	int t;
	cin>>t;
	while(t--){
		int op;
		cin>>op;
		if(op == 0){
			int x;
			cin>>x;
			pq.push(x);
			cout<<pq.top()<<endl;
		}else if(op == 1){
			if(pq.empty()){
				cout<<"Empty"<<endl;
			}else{
				cout<<pq.top()<<endl;
			}		
		}else if(op == 2){
			if(pq.empty()){
				cout<<"Empty"<<endl;
			}else{
				pq.pop();
				if(pq.empty()){
					cout<<"Empty"<<endl;
				}else{
					cout<<pq.top()<<endl;
				}
			}
		}
	}

	return 0;
}