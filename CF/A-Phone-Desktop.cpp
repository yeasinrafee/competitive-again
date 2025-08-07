#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int x, y;
		cin>>x>>y;

		int screen = y/2;
		int remaining = screen * 7;
		if( y % 2 != 0){
			screen++;
			remaining += 11;
		}
		if(x > remaining){
			x -= remaining;
			screen += x/15;
			if(x%15 != 0)
				screen++;
		}
		cout<<screen<<endl;
	}

	return 0;
}