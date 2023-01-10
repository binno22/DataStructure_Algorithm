#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;
vector<int> ke[1001];
bool visited[1001];
int color[1001];
int cha[1001];

bool dfs(int u,int cha){
	color[u] = 3 - color[cha];
	for(int v : ke[u]){
		if(color[v] == 0){
			if(!dfs(v,u)) return false;
		}else if(color[v] == color[u]) return false;
	}
	return true;
}

void input(){
	cin >> n >> m;
	for(int i = 0 ; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	memset(color,0,sizeof(color));
	memset(visited,false,sizeof(visited));
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	color[0] = 1;
	for(int i = 1; i <= n; i++){
		if(color[i] == 0){
			if(dfs(i,0) == false){
				cout << 0; return 0;
			}
		}
	}
	cout << 1;
	return 0;
}
