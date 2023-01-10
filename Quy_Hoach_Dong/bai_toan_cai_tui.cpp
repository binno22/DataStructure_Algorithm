#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int dp[1001][1001];

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
     #endif
    int n,v; cin >> n >> v;
    int w[n + 1],c[n + 1];
    for(int i = 1; i <= n; i++) cin >> w[i];
    for(int i = 1; i <= n; i++) cin >> c[i];
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= v; j++){
            dp[i][j] = dp[i - 1][j];
            if(j >= w[i]) dp[i][j] = max(dp[i][j],dp[i - 1][j - w[i]] + c[i]);
        }
    }
    cout << dp[n][v]; 
    return 0;
}
