#include<bits/stdc++.h>
using namespace std;

// KIEM TRA DO THI CO CHU TRINH HAY KHONG

using ll = long long;

int n,m;
vector<int> ke[1001];
bool visited[1001];

bool dfs(int u,int cha){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[u]){
			if(dfs(v,u)) return true;
		}else if(v != cha) return true;
	}
	return false;
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
	bool ok = false;
	for(int i = 1; i <= n; i++){
		if(!visited[i] && dfs(i,0)){
			ok = true; break;
		}
	} 
	cout << ok;
	return 0;
}
