#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin >> s;
	string pal = s;

	reverse(pal.begin(), pal.end());

	if(s == pal){
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}

	return 0;
}