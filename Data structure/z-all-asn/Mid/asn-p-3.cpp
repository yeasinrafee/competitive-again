#include<bits/stdc++.h>
using namespace std;

int main(){
	
	list<string> l;
	while(true){
		string s;
		cin>>s;
		if(s == "end"){
			break;
		}
		l.push_back(s);
	}
	int q;
	cin>>q;
	auto temp = l.begin();
	while(q--){
		string c, a;
		cin>>c;
		if(c == "visit"){
			cin>>a;
			auto it = find(l.begin(), l.end(), a);
			if(it != l.end()){
				temp = it;
				cout<<*temp<<endl;
			}else{
				cout<<"Not Available"<<endl;
			}
		}else if(c == "prev"){
			if(temp != l.begin()){
				--temp;
				cout<<*temp<<endl;
			}else{
				cout<<"Not Available"<<endl;
			}
		}else if(c == "next"){
			auto temp2 = temp;
			++temp2;
			if(temp2 != l.end()){
				temp = temp2;
				cout<<*temp<<endl;
			}else{
				cout<<"Not Available"<<endl;
			}
		}

	}

	return 0;
}