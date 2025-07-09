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
	for(int i = 0; i < n; i++){
		mini = min(mini, arr[i]);
	}

	int count = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] == mini){
			count++;
		}
	}

	if(count % 2 == 0){
		cout<<"Unlucky"<<endl;
	}else{
		cout<<"Lucky"<<endl;
	}

	return 0;
}