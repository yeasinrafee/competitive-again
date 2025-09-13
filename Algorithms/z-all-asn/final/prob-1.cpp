#include<bits/stdc++.h>
using namespace std;

int dp[1005];
int tet(int n){
	if(n == 0)
		return 0;
	if(n == 1)
		return 1;
	if(n == 2)
		return 1;
	if(n == 3)
		return 2;
	if(dp[n] != -1)
		return dp[n];
	dp[n] = tet(n-1) + tet(n-2) + tet(n-3) + tet(n-4);
	return dp[n];
}

int main(){
	
	memset(dp, -1, sizeof(dp));
	int n;
	cin>>n;
	cout<<tet(n);

	return 0;
}