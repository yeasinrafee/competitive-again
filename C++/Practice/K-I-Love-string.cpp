#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	cin.ignore();

	for(int i = 0; i < n; i++){
		string s, t;
		cin >> s >> t;
		string r;
		int min_len = min(s.size(), t.size());

		for(int j = 0; j < min_len; j++){
			r += s[j];
			r += t[j];
		}

		if(s.size() > t.size()){
			for(int j = min_len; j < s.size(); j++){
				r += s[j];
			}
		}else if(t.size() > s.size()){
			for(int j = min_len; j < t.size(); j++){
				r += t[j];
			}
		}
		cout<< r <<endl;
	}
	return 0;
}
