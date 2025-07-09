#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){

	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}

	int mini = INT_MAX;

	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			mini = min(mini, arr[i]+arr[j]+(j + 1)-(i + 1));
		}
	}

	cout<<mini<<endl;
		
	}
	return 0;
}