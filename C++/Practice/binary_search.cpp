#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin>>a[i];
	}

	int val;
	cin>>val;
	int l = 0;
	int r = n - 1;
	int flag = 0;

	sort(a, a+n);

	while(l <= r){
		int mid = (l+r)/2;
		if(a[mid] == val){
			flag = 1;
			break;
		}else if(a[mid] > val){
			r = mid - 1;
		}else{
			l = mid + 1;
		}
	}

	if(flag == 1){
		cout<<"Found\n";
	}else{
		cout<<"Not Found\n";
	}

	return 0;
}