#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, q;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());

	cin>>q;
	while(q--){
		bool flag = false;
		int l = 0, r = n -1;
		int val;
		cin>>val;
		while(l <= r){
			int mid = (l + r) / 2;
			if(v[mid] == val){
				flag = true;
				break;
			}else if(v[mid] > val){
				r = mid - 1;
			}else{
				l = mid + 1;
			}
		}

		if(flag){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}

	return 0;
}