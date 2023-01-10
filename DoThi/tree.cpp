#include<bits/stdc++.h>
using namespace std;

// Tim do cao cua cac not trong cay

using ll = long long;

int n;
vector<int> ke[1001];
bool visited[1001];
int cha[1001];
int cao[1001];

void dfs(int u,int cha){
	visited[u] = true;
	for(int v : ke[u]){
		if(!visited[v]){
			cao[v] = cao[u] + 1;
			dfs(v,u);
		}
	}
}

void input(){
	cin >> n;
	for(int i = 1; i < n ; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	dfs(1,-1);
	for(int i = 1; i <= n; i++) cout << cao[i] << ' ';
	return 0;
}
