#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w", stdout);
 	#endif
	int n; cin >> n;
	vector<int> v(n);
	for(int &x : v) cin >> x;
	vector<int> f(n,1);
	int ans = 1;
	for(int i = 0; i < n; i++){
		for(int j = i - 1; j >= 0; j--){
			if(v[i] > v[j]) f[i] = max(f[i],f[j] + 1);
		}
		ans = max(ans,f[i]);
	}
	cout << ans;
	return 0;
}
