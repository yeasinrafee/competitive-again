#include<bits/stdc++.h>
using namespace std;

int main(){
	
	stack<int> s1, s2;
	int n1, n2;
	cin>>n1;
	for(int i = 0; i < n1; i++){
		int m1;
		cin>>m1;
		s1.push(m1);
	}

	cin>>n2;
	for(int i = 0; i < n2; i++){
		int m2;
		cin>>m2;
		s2.push(m2);
	}

	if(s1 == s2){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}