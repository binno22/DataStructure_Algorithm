#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,m; cin >> n >> m;
	int a[n],b[m];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= m; i++) cin >> b[i];
	sort(a + 1,a + n + 1,greater<int>());
 	sort(b + 1,b + m + 1,greater<int>());
 	int ans = 0;
 	int i = 1,j = 1;
 	while(i <= n && j <= m){
 		if(a[i] > b[j]){
 			++ans;
 			++i;
 			++j;
 		}else ++j;
 	}
 	cout << ans << endl;
	
	return 0;
}