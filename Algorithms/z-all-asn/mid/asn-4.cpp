#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
pair<int, int> level[1005][1005];
vector<pair<int, int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}};
int n, m;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return false;
	return true;
}

bool bfs(int si, int sj, int &di, int &dj){
	queue<pair<int, int>> q;
	q.push({si, sj});
	vis[si][sj] = true;

	while(!q.empty()){
		pair<int, int> par = q.front();
		q.pop();
		int par_i = par.first;
		int par_j = par.second;

		if(grid[par_i][par_j] == 'D'){
			di = par_i;
			dj = par_j;
			return true;
		}

		for(int i = 0; i < 4; i++){
			int ci = par_i + d[i].first;
			int cj = par_j + d[i].second;

			if(valid(ci, cj) && !vis[ci][cj] && (grid[ci][cj] == '.' || grid[ci][cj] == 'D')){
				vis[ci][cj] = true;
				level[ci][cj] = {par_i, par_j};
				q.push({ci, cj});
			}
		}
	}
	return false;
}

int main(){
	
	cin>>n>>m;
	int si = -1, sj = -1, di = -1, dj = -1;

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>grid[i][j];
			if(grid[i][j] == 'R'){
				si = i;
				sj = j;
			}
			if(grid[i][j] == 'D'){
				di = i;
				dj = j;
			}
		}
	}

	memset(vis, false, sizeof(vis));
	memset(level, -1, sizeof(level));

	if(bfs(si, sj, di, dj)){
		int x = di;
		int y = dj;
		while(!(x == si && y == sj)){
			pair<int, int> p = level[x][y];
			int px = p.first;
			int py = p.second;

			if(px == -1 && py == -1)
				break;

			if(grid[x][y] != 'D')
				grid[x][y] = 'X';

			x = px;
			y = py;
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout<<grid[i][j];
		}
		cout<<endl;
	}

	return 0;
}