#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int first_three_digit = 0, last_three_digit = 0;
		string first_half = s.substr(0, 3);
		string last_half = s.substr(3);

		for(int i = 0; first_half[i] != '\0'; i++){
			int digit = first_half[i] - '0';
			first_three_digit += digit;
		}
		
		for(int i = 0; last_half[i] != '\0'; i++){
			int digit = last_half[i] - '0';
			last_three_digit += digit;
		}

		if(first_three_digit == last_three_digit){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}

	}

	return 0;
}