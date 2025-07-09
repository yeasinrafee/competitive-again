#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;
	cin>>n;
	string s;
	cin>>s;
	int anton = 0, danik = 0;
	for(int i = 0; i < n; i++){
		if(s[i] == 'A'){
			anton++;
		}
		if(s[i] == 'D'){
			danik++;
		}
	}

	if(anton > danik){
		cout<<"Anton"<<endl;
	}else if(anton == danik){
		cout<<"Friendship"<<endl;
	}else if(anton<danik){
		cout<<"Danik"<<endl;
	}

	return 0;
}