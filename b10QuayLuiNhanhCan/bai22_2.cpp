#include<bits/stdc++.h>
using namespace std;

using ll = long long;

string s;
ll n,len;

// tim ki tu o vi tri thu n trong xau co do dai k
char timkiem(ll n, ll k){
	if(n <= s.size()) return s[n - 1];
	if(n <= k/2){
		return timkiem(n, k/2);
	}else{
		ll tmp = n - k/2;
		if(tmp == 1) return timkiem(k/2,k/2);
		else return timkiem(tmp - 1, k /2);
	}
}

void init(){
	cin >> s >> n;
	len = s.size();
	while(len < n) len *= 2;
	cout << timkiem(n,len) << endl;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	init();
    }
	return 0;
}