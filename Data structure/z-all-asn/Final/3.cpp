#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		string word;
		stringstream ss(s);
		map<string, int> mp;
		int maxi = INT_MIN;
		string result;
		while(ss >> word){
			mp[word]++;
			if(mp[word] > maxi){
				maxi = mp[word];
				result = word;
			}
		}
		cout<<result<<" "<<maxi<<endl;
	}
	return 0;
}