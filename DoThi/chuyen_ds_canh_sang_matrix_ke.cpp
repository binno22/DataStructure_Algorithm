#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m; cin >> n >> m;
	int a[n][n];
	memset(a,0,sizeof a);
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		a[x - 1][y - 1] = 1;
		a[y - 1][x - 1] = 1;
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << a[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}
