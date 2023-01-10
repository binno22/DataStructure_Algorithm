#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// ap dung cho do thi co huong

vector<int> ke[1001];
bool visited[1001];
int n,m;
vector<int> topo;

void dfs(int u){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
	topo.push_back(u);
}


void input(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
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
		if(!visited[i]){
			dfs(i);
		}
	}
	reverse(topo.begin(),topo.end());
	for(int x : topo) cout << x << ' ';
	return 0;
}
