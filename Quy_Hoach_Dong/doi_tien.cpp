#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,S; cin >> n >> S;
    vector<long long> dp(1000001,1e9);
    vector<int> a(n);
    for(int &x : a) cin >> x;
    dp[0] = 0;
    for(int i = 1; i <= S; i++){
        for(int x : a){
            if(i >= x) dp[i] = min(dp[i],dp[i - x] + 1);
        }
    }
    cout << dp[S];
    return 0;
}
