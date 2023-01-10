#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		for(int i = 1; i <= n; i++) cin >> a[i];
		int x[100001];
		memset(x,0,sizeof(x));
		int ans = 0;
		for(int i = 1; i <= n; i++){
			x[a[i]]++;
		}
		for(int i = 1; i <= 100000; i++){
			if(x[i] >= 2){
				ans += x[i] * (x[i] - 1) / 2;
			}
		}
		cout << ans << endl;
	}
	return 0;
}
