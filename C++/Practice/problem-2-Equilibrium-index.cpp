#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}

	vector<int> prefix(n);
	prefix[0] = v[0];

	for(int i = 1; i < n; i++){
		prefix[i] = prefix[i - 1] + v[i];
	}

	for(int i = 0; i < n; i++){
		int leftSum = 0, rightSum = 0;
		if(i == 0){
			leftSum = 0;
		}else{
			leftSum = prefix[i - 1];
		}

		rightSum = prefix[n - 1] - prefix[i];

		if(leftSum == rightSum){
			cout<<i<<endl;
			return 0;
		}
	}

	cout<<"-1"<<endl;

	return 0;
}