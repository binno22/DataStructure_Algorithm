#include<bits/stdc++.h>
using namespace std;

using ll = long long;

vector<int> ke[1001];

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m; cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x,y; cin >> x >> y;
		ke[x].push_back(y);
	}
	for(int i = 1; i <= n; i++){
		if(ke[i].size()){
			cout << i << " : ";
			sort(ke[i].begin(),ke[i].end());
			for(int x : ke[i]) cout << x <<  ' ';
			cout << endl;
		}
	}
	return 0;
}
