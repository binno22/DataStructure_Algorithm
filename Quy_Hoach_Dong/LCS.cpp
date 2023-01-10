#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// dp[i][j] : ket thuc o chi so i cua s va chi so j cua t

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
   	freopen("output.txt", "w", stdout);
 	#endif
	string s,t;
	cin >> s; cin >> t;
	int dp[n][m];
	memset(dp,0,sizeof dp);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(s[i] == t[j]) dp[i][j] = dp[i - 1][j - 1] + 1;
			else dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);

		}
	}
	cout << dp[n][m];
	return 0;
}
