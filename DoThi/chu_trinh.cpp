#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m;
vector<int> ke[1001];
int color[1001];
int cha[1001];
int bac[1001];

bool dfs(int u,int cha){
	color[u] = 1; // da tham
	for(int v : ke[u]){
		if(color[v] == 0){
			if(dfs(v,u)) return true;
		//dinh v da duoc tham nhung v khong la cha truc tiep cua u
		}else if(color[v] == 1) return true; // canh nguocj u,v
	}
	color[u] = 2; // da duyet xong
	return false;
}

bool kahn(){
	queue<int> q;
	for(int i = 1; i <= n; i++){
		if(bac[i] == 0) q.push(i);
	}
	int cnt = 0;
	while(!q.empty()){
		int v = q.front(); q.pop();
		++cnt;
		for(int x : ke[v]){
			--bac[x];
			if(bac[x] == 0){
				q.push(x);
			}
		}
	}
	if(cnt == n) return 1;
	return 0;
}

void input(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
		bac[y]++;
	}
	memset(color,0,sizeof(color));
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	bool ok = false;
	// for(int i = 1; i <= n; i++){
	// 	if(!color[i] && dfs(i,0)){
	// 		ok =  true; break;
	// 	}
	// }
	// cout << ok;

	cout << kahn();
	return 0;
}
