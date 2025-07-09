#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	cin.ignore();
	for(int i = 0; i < n; i++){

		string s;
		cin>>s;
		cin.ignore();
		int count = 0;
		int len = s.length();
		if(s.length() > 10){
			for(int i = 0; i < s.length() - 2; i++){
				count++;
			}
			cout<<s[0]<<count<<s[s.length()-1]<<endl;
		}else{
			cout<<s<<endl;
		}
	}

	return 0;
}