// Cho 4 số nguyên dương x, y, z, n.
// Tìm số nguyên dương nhỏ nhất có n chữ số chia hết cho cả x, y, và z.

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll lcm(ll a,ll b){
	return a/__gcd(a,b) * b;
}

int main(){
	ll x,y,z,n; cin >> x >> y >> z >> n;
	ll bcnn = lcm(x,lcm(y,z));
	ll res = ((ll)pow(10,n - 1) + bcnn - 1)/bcnn * bcnn;
	if(res < pow(10,n) - 1) cout << res << endl;
	else cout << "-1\n";
	return 0;
}