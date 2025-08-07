#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int q;
	cin>>q;
	queue<string> q1;
	while(q--){
		int x;
		cin>>x;
		if( x == 0){
			string y;
			cin>>y;
			q1.push(y);
		}else if(x == 1){
			if(q1.empty()){
				cout<<"Invalid"<<endl;
			}else{
				cout<<q1.front()<<endl;
				q1.pop();
			}
		}
	}

	return 0;
}