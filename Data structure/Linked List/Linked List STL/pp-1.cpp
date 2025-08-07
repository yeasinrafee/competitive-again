#include<bits/stdc++.h>
using namespace std;

int main(){
	
	list<int> l1, l2;


	while(true){
		int val;
		if(val == -1){
			break;
		}
		cin>>val;
		l1.push_back(val);
	}
	while(true){
		int val;
		cin>>val;
		if(val == -1){
			break;
		}
		l2.push_back(val);
	}

	if(l1 == l2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}