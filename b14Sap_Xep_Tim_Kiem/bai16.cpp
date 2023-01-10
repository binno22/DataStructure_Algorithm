#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t; 
	while(t--){
		int n; cin >> n; int a[n];
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1,a + n + 1,greater<int>());
		int ans = 0;
		int i = 1;
		while(i <= n){
			if(a[i] > 0) ans += a[i];
			for(int j = i; j <= n; j++){
				--a[j];
			}
			++i;
		}
		cout << ans << endl;
	}
	return 0;
}
