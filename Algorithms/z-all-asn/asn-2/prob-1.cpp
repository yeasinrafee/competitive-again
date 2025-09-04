#include<bits/stdc++.h>
using namespace std;

class Edge{
public:
	long long int a, b, c;
	Edge(long long int a, long long int b, long long int c){
		this->a = a;
		this->b = b;
		this->c = c;
	}
};

long long  dis[1005];
vector<Edge> edge_list;
int n, e;

bool bellman_ford(int src){
	for(int i = 1; i <= n; i++)
		dis[i] = LLONG_MAX;
	dis[src] = 0;

	for(int i = 1; i <= n - 1; i++){
		for(auto ed: edge_list){
			int a, b, c;
			a = ed.a;
			b = ed.b;
			c = ed.c;

			if(dis[a] != LLONG_MAX && dis[a] + c < dis[b])
				dis[b] = dis[a] + c;
		}
	}


	for(auto ed: edge_list){
		long long int a, b, c;
		a = ed.a;
		b = ed.b;
		c = ed.c;

		if(dis[a] != LLONG_MAX && dis[a] + c < dis[b]){
			return false;
		}
	}

	return true;
}

int main(){
	
	cin>>n>>e;

	while(e--){
		long long int a, b, c;
		cin>>a>>b>>c;
		edge_list.push_back(Edge(a, b, c));
	}

	int src;
	cin>>src;
	int t;
	cin>>t;

	if(!bellman_ford(src)){
		cout<<"Negative Cycle Detected\n";
		return 0;
	}

	while(t--){
		int last;
		cin>>last;
		
		if(dis[last] == LLONG_MAX){
			cout<<"Not Possible\n";
		}
		else
			cout<<dis[last]<<"\n";
	}

	return 0;
}