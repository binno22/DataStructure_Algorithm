#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m,s; 
vector<int> ke[1001];
bool visited[1001];

void dfs(int u){
	cout << u << ' ';
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]) dfs(v);
	}
}

void input(){
	cin >> m >> n >> s;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_bac(x);
	}
	memset(visited,false,sizeof(visited));
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	dfs(s);
	return 0;
}
