#include<bits/stdc++.h>
using namespace std;

// Quy hoach so cach co the bieu dien 1 to tien

using ll = long long;

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
       freopen("input.txt", "r", stdin);
       freopen("output.txt", "w", stdout);
     #endif
    int n,S; cin >> n >> S;
    vector<long long> dp(1000001,0);
    vector<int> a(n);
    for(int &x : a) cin >> x;
    dp[0] = 1;
    for(int i = 1; i <= S; i++){
        for(int x : a){
            if(i >= x) dp[i] = dp[i] + dp[i - x];
        }
    }
    cout << dp[S];
    return 0;
}
