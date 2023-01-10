#include<bits/stdc++.h>
using namespace std;

using ll = long long;


int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n,k; cin >> n >> k;
	ll a[n];
	queue<ll> q;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1,a + n + 1,greater<int>());
	ll ans = a[1];
	q.push(a[1]);
    for(int i = 2; i <= n; i++){
    	if(a[i] + k <= q.front()){
    		q.pop();
    		q.push(a[i]);
    	}else{
    		q.push(a[i]);
    		ans += a[i];
    	}
    }
    cout << ans;
	return 0;
}
