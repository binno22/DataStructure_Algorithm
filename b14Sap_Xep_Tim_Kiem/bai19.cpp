#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int n,k,ans;

int solve(){
	cin >> n >> k;
	int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1,a + n + 1);
	ans = 1;
	for(int i = 1; i < n; i++){
		if(a[i + 1] - a[i] > k) ++ans;
	}
	return ans;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	for(int i = 1; i <= t; i++){
		cout << "Case #" << i << ": " << solve() << endl;
	}
	return 0;
}
