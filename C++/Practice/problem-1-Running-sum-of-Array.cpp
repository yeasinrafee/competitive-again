#include<bits/stdc++.h>
using namespace std;

vector<int> running_sum(vector<int> &v){
	vector<int> prefix(v.size());
	if(v.empty()){
		return prefix;
	}
	prefix[0] = v[0];
	for(int i = 1; i < v.size(); i++){
		prefix[i] = prefix[i - 1] + v[i];
	}
	return prefix;
}

int main(){
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	vector<int> result = running_sum(v);
	for(int num : result){
		cout<<num<<" ";
	}

	return 0;
}