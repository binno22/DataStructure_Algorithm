#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;

vector<int> ke[1001];
bool visited[1001];

void dfs(int u){
	visited[u] = true;
	for(auto v : ke[u]){
		if(!visited[v]) dfs(v);
	}
}

void input(){
	cin >> n >> m;
	for(int i = 0l; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
	}
	memset(visited,false,sizeof(visited));
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	for(int i = 1; i <= n; i++){
		memset(visited,false,sizeof(visited));
		dfs(i);
		for(int j = 1; j <= n; j++){
			if(visited[j] == false){
				cout << "NO";
				return 0;
			}
		}
	}
	cout << "YES";
}
