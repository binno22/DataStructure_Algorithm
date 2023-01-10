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
	int n,S; cin >> n >> S;
	vector<int> a(n);
	for(int &x : a) cin >> x;
	vector<bool> dp(S + 1,false);
	dp[0] = true;
	for(int i = 0; i < n; i++){
		for(int j = S; j >= a[i]; j--){
			if(dp[j - a[i]]) dp[j] = true;
		}
	}
	cout << dp[S];
	return 0;
}
