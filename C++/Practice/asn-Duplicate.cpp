#include<bits/stdc++.h>
using namespace std;

int main(){
	
	long long n;
	cin>>n;
	long long arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	sort(arr, arr+n);
	bool flag = true;

	for(int i = 0; i < n; i++){
			if(arr[i] == arr[i + 1]){
				flag = false;
				break;
			}
	}

	if(flag){
		cout<<"NO\n";
	}else{
		cout<<"YES\n";
	}

	return 0;
}