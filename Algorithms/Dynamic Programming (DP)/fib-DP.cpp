#include<bits/stdc++.h>
using namespace std;

int dp[1005];
int fib(int n){
	if(n < 2)
		return n;
	dp[n] = fib(n-1) + fib(n-2);
	return dp[n];
}

int main(){
	
	memset(dp, -1, sizeof(dp));
	int n;
	cin>>n;
	cout<<fib(n);

	return 0;
}