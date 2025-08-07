#include<bits/stdc++.h>
using namespace std;

int main(){
	
	list<int> l;
	while(true){
		int val;
		cin>>val;
		if(val == -1){
			break;
		}
		l.push_back(val);
	}

	list<int> l2;
	l2 = l;

	l2.reverse();

	if(l == l2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}