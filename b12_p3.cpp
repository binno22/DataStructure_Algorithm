#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;

ll f[100];

void fibo(){
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 92; i++){
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main(){
	int t; cin >> t;
	fibo();
	while(t--){
		bool ok = false;
		ll n; cin >> n;
		for(int i = 0; i <= 92; i++){
			if(n == f[i]){
				ok = true;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}