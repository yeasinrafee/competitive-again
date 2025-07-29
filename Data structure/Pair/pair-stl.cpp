#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Declaring Pair
	pair<int, int> p1, p2;

	// Value assign to pair
	// p = make_pair(5, 6);
	p1 = {5, 8};
	p2 = {9, 1};

	// Swapping Pairs
	p1.swap(p2);

	cout<<p1.first<<" ";
	cout<<p1.second<<endl;

	int a, b;

	// Extracting Pair values using tie()
	tie(a, b) = p2;
	cout<<a<<" "<<b<<endl;

	// Pair with vector
	int n;
	cin>>n;
	vector<pair<int, int>> vp(n);
	for(int i = 0; i < n; i++){
		cin>>vp[i].first>>vp[i].second;
	}

	for(int i = 0; i < n; i++){
		cout<<vp[i].first<<" "<<vp[i].second<<endl;
	}

	return 0;
}