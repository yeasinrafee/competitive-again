#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	int mini = INT_MAX;
	int maxi = INT_MIN;
	int minIdx, maxIdx;

	for(int i = 0; i < n; i++){
		mini = min(mini, arr[i]);
		maxi = max(maxi, arr[i]);
	}

	for(int i = 0; i < n ; i++){
		if(arr[i] == mini){
			minIdx = i;
		}
		if(arr[i] == maxi){
			maxIdx = i;
		}
	}

	swap(arr[maxIdx], arr[minIdx]);

	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}