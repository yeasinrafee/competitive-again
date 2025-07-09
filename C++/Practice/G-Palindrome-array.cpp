#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	int arr1[n];
	for(int i = 0; i < n; i++){
		cin>>arr1[i];
	}
	int arr2[n];
	copy(arr1, arr1 + n, arr2);
	reverse(arr2, arr2 + n);
	bool isEqual = true;
	for(int i = 0; i < n; i++){
		if(arr1[i] != arr2[i]){
			isEqual = false;
			break;
		}
	}

	isEqual ? cout<<"YES"<<endl : cout<<"NO"<<endl;



	return 0;
}