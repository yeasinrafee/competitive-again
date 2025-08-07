#include<bits/stdc++.h>
using namespace std;

int main(){
	
	list<int> l;

	int q;
	cin>>q;

	while(q--){
	int x, v;
	cin>>x>>v;
	if(x == 0){
		l.push_front(v);
	}else if(x == 1){
		l.push_back(v);
	}else if(x == 2){
		if(v >= 0 && v < l.size()){
			l.erase(next(l.begin(), v));
		}
	}

	cout<<"L -> ";
	for(auto it = l.begin(); it != l.end(); it++){
		cout<< *it<<" ";
	}
	cout<<"\n";
	cout<<"R -> ";
	for(auto it = l.rbegin(); it != l.rend(); it++){
		cout<< *it<<" ";
	}
	cout<<"\n";
}
	return 0;
}