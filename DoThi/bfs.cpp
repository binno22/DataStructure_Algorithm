#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,m,s;
queue<int> q;
vector<int> ke[1001];
bool visited[1001];

void bfs(int u){
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		cout << q.front() << ' ';
		int v = q.front();
		q.pop();
		for(auto x : ke[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

void input(){
	cin >> n >> m >> s;
	memset(visited,false,sizeof(visited));
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
		ke[y].push_back(x);
	}
	for(int i = 1; i <= n; i++) sort(begin(ke[i]),end(ke[i]));
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	input();
	bfs(s);
	return 0;
}
