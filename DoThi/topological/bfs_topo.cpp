#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Xoa dan dinh

int n,m;
vector<int> ke[1001];
bool visited[1001];
int bac[1001];

void input(){
	memset(visited,false,sizeof(visited));
	memset(bac,0,sizeof(bac));
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		bac[y]++;
	}
}

void kahn(){
	queue<int> q;
	for(int i = 1; i <= n; i++){
		if(bac[i] == 0) q.push(i);
	}
	while(!q.empty()){
		int u = q.front();
		cout << u << ' ';
		q.pop();
		for(int v: ke[u]){
			--bac[v];
			if(bac[v] == 0) q.push(v);
		}
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	kahn();
	return 0;
}
