#include<bits/stdc++.h>
using namespace std;

int main(){
	
	string s;
	cin>>s;

	int e = 0, g = 0, y = 0, p = 0, t = 0;
	for(int i = 0; s[i] != '\0'; i++){
		char c = tolower(s[i]);
		switch(c){
		case 'e':
			e++;
			break;
		case 'g':
			g++;
			break;
		case 'y':
			y++;
			break;
		case 'p':
			p++;
			break;
		case 't':
			t++;
			break;
		}
	}

	int count = e;
	if(g < count){
		count = g;
	}
	if(y < count){
		count = y;
	}
	if(p < count){
		count = p;
	}
	if(t < count){
		count = t;
	}

	cout<<count<<endl;

	return 0;
}