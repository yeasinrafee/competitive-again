#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v(n);
		for(int i = 0; i < n; i++){
			cin>>v[i];
		}
		int mx1 = INT_MIN, mx2 = INT_MIN;

		for(int val: v){
			if(val > mx1)
				mx1 = val;
		}
		for(int val: v){
			if(val > mx2 && val != mx1)
				mx2 = val;
		}

		for(int i = 0; i < n; i++){
			if(v[i] == mx1 || v[i] == mx2){
				cout<<i<<" ";
			}
		}
		cout<<"\n";

	}

	return 0;
}