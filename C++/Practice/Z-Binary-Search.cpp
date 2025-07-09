#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n, q;
	cin>>n>>q;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	sort(v.begin(), v.end());
	while(q--){
		int val;
		cin>>val;

		int l = 0;
		int r = n - 1;
		bool flag = false;

		while(l <= r){
			int mid = (l+r)/2;
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
			cout<<"found\n";
		}else{
			cout<<"not found\n";
		}

	}

	return 0;
}