#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s, x;
		cin>>s>>x;

		for(int idx = 0; (idx = s.find(x, idx)) != string::npos; idx+=1){
			s.replace(idx, x.length(), "");
		}

		cout<<s<<endl;
	}

	return 0;
}