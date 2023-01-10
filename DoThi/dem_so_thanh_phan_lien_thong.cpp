#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;
vector<int> ke[1001];
bool visited[1001];
vector<int> v;
vector<vector<int>> ans;

void dfs(int u){
	v.push_back(u);
	visited[u] = true;
	for(auto v : ke[u]){
		if(!visited[v]){
			dfs(v);
		}
	}
}

void input(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
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
			ans.push_back(v);
			v.clear();
		}
	}
	int cnt = 1;
	for(auto x : ans){
		sort(begin(x),end(x));
		cout << "Connected Component " << cnt++ << ":\n";
		for(int e : x) cout << e << ' ';
		cout << endl;
	}
	return 0;
}
