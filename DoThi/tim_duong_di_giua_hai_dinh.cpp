#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m,s,e;
vector<int> ke[1001];
vector<int> v;
bool visited[1001];
int cha[1001];
vector<int> ans;

void dfs(int u){
	visited[u] = true;
	for(auto v : ke[u]){
		if(visited[v] == false){
			cha[v] = u;
			dfs(v);
		}
	}
}

void input(){
	cin >> n >> m;
	cin >> s >> e;
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
	dfs(s);
	if(visited[e] == true){
		while(e != s){
			ans.push_back(e);
			e = cha[e];
		}
		ans.push_back(e);
		reverse(begin(ans),end(ans));
		for(int x : ans) cout << x << ' ';
	}else cout << "-1\n";
	return 0;
}
