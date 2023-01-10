#include<bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = l; i <= r; i++)

int k,m,n;
set<string> dic;
char a[100][100];
vector<string> v;
string s;
int visited[100][100];

void input(){
	v.clear(); dic.clear();
	cin >> k >> m >> n;
	for(int i = 1; i <= k; i++){
		string w; cin >> w; dic.insert(w);
	}
	for(int i = 1; i <= m; i++){
		for(int j = 1; j <= n; j++) cin >> a[i][j];
	}
	memset(visited, 0, sizeof(visited));
}


int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

void Try(int i,int j){
	s += a[i][j];
	if(dic.count(s)) v.push_back(s);
	FOR(k,0,7){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= m && j1 >= 1 && j1 <= m && visited[i1][j1] == 0){
			visited[i1][j1] = 1; // danh dau la da tham roi
			Try(i1,j1);
			visited[i1][j1] = 0;
		}
	}
	s.pop_back();
}
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	input();
    	s = "";
    	FOR(i,1,m){
    		FOR(j,1,n){
    			if(visited[i][j] == 0){
    				Try(i,j);
    			}
    		}
    	}
    	sort(v.begin(),v.end());
    	for(string x : v) cout << x <<  " ";
    }
	return 0;
}