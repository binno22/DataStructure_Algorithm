#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int a[1001][1001];
vector<int> ke[1001];
vector<pair<int,int>> v;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
			if(a[i][j]) ke[i].push_back(j);
		}
	}
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(a[i][j]){
				v.push_back({j, i});
				a[j][i] = 0;
			}
		}
	}
	sort(begin(v),end(v));
	for(auto it : v){
		cout << it.first << ' ' << it.second << endl;
	}
	cout << endl;
	for(int i = 1; i <= n; i++){
		if(ke[i].size()){
			sort(begin(ke[i]),end(ke[i]));
			cout << i << " : ";
			for(int x : ke[i]) cout << x << ' ';
			cout << endl;
		}
	}
	return 0;
}
