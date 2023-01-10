#include<bits/stdc++.h>
using namespace std;

using ll = long long;
 ll p[10] = {2,3,5,7,11,13,17,19,23,29};
 int n;

 ll Try(int pos, ll cnt, ll x){
 	if(cnt == n) return x;
 	ll tmp = 1e18 + 5;
 	int i = 1;
 	while(true){
 		x *= p[pos];
 		if(x > tmp) break;
 		if(cnt*(i + 1) > n) break;
 		tmp = min(tmp,Try(pos + 1, cnt*(i + 1),x));
 		++i;
 	}
 	return tmp;
 }

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> n;
    	ll ans = Try(0,1,1);
    	cout << ans << endl;
    }
	return 0;
}