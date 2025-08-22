#include<bits/stdc++.h>
using namespace std;

char grid[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
int n, m;

bool valid(int i, int j){
	if(i < 0 || i >= n || j < 0 || j >= m)
		return false;
	return true;
}

int bfs(int si, int sj){
	int cnt = 0;
	queue<pair<int, int>> q;
	q.push({si, sj});
	vis[si][sj] = true;

	while(!q.empty()){
		pair<int, int> par = q.front();
		q.pop();
		int par_i = par.first;
		int par_j = par.second;
		cnt++;

		for(int i = 0; i < 4; i++){
			int ci = par_i + d[i].first;
			int cj = par_j + d[i].second;

			if(valid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == '.'){
				q.push({ci, cj});
				vis[ci][cj] = true;
			}
		}
	}
	return cnt;
}

int main(){
	
	cin>>n>>m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin>>grid[i][j];
		}
	}
	memset(vis, false, sizeof(vis));
	
	vector<int> rooms;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(!vis[i][j] && grid[i][j] == '.'){
				int result = bfs(i, j);
				rooms.push_back(result);
			}
		}
	}

	sort(rooms.begin(), rooms.end());

	if(rooms.empty()){
		cout<< 0 <<endl;
	}else{
		for(int i = 0; i < rooms.size(); i++){
		if(i > 0)
			cout<<" ";
		cout<<rooms[i];
	}
	cout<<endl;
	}
	return 0;
}