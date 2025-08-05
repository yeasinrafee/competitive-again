#include<bits/stdc++.h>
using namespace std;

int main(){
	
	map<string, int> mp;
	mp["tamim"] = 2;
	mp["rafee"] = 6;
	mp["yeasin"] = 50;

	for(auto it = mp.begin(); it != mp.end(); it++){
		cout<<it->first << " "<< it->second <<endl;
	}

	if(mp.count("hamim")){
		cout<<"Present"<<endl;
	}else{
		cout<<"Absent"<<endl;
	}

	return 0;
}