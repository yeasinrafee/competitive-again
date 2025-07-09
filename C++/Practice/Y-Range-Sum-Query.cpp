#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, q, l, r;
	cin>>n>>q;
	
	vector<long long> a(n+1); // using 1-based indexing
	vector<long long> prefix(n+1, 0);

	for(int i = 1; i <= n; i++){
		cin>>a[i];
		prefix[i] = prefix[i - 1] + a[i];
	}

	while(q--){
		cin>>l>>r;
		cout<<prefix[r] - prefix[l-1]<<"\n";
	}
	return 0;
}