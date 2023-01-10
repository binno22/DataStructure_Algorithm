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
		int ans = 1;
		for(int i = 1; i < n; i++){
			if(a[i] > a[i + 1]) ++ans;
		}
		cout << ans << endl;
	}
	return 0;
}
