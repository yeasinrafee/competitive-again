#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
	
	// First we need to sort the array
	sort(v.begin(), v.end());

	// For storing the result we need a 2D vector
	vector<vector<int>> ans;

	for(int i = 0; i < v.size(); i++){
		if(i > 0 && v[i] == v[i-1])
			continue;

		int j = i + 1;
		int k = v.size() - 1;

		while(j < k){
			long sum = v[i] + v[j] + v[k];

			if(sum < 0) j++;
			else if(sum > 0) k--;
			else{
				ans.push_back({v[i], v[j], v[k]});
				j++;
				k--;

				while(j < k && v[j] == v[j - 1]) j++;
				while(j < k && v[k] == v[k + 1]) k--;
			}
		}
	}


	return 0;
}