#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
int level[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return false;
	if(grid[i][j] == '#')
		return false;
	return true;
}

void bfs(int si, int sj){
	queue<pair<int, int>> q;
	q.push({si, sj});
	vis[si][sj] = true;

	while(!q.empty()){
		pair<int, int> par = q.front();
		q.pop();
		int par_i = par.first;
		int par_j = par.second;

		for(int i = 0; i < 4; i++){
			int ci = par_i + d[i].first;
			int cj = par_j + d[i].second;

			if(valid(ci, cj) && !vis[ci][cj]){
				vis[ci][cj] = true;
				q.push({ci, cj});
			}
		}
	}

}

int main(){
	
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>grid[i][j];
		}
	}
	memset(vis, false, sizeof(vis));

	int count = 0;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(!vis[i][j] && grid[i][j] == '.'){
				count++;
				bfs(i, j);
			}
		}
	}

	cout<<count<<endl;
	
	return 0;
}