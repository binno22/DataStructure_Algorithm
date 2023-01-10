// Neu p la so nguyen to va pow(2,p) - 1 cung la nguyen to
// thi ta co la pow(2,p-1)*(pow(2,p)) - 1) la so hoan hao

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// ham kiem tra so nguyen to
bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}

ll hh[10];
int cnt = 0;

void init(){
	for(int i = 1; i <= 32; i++){
		if(nt(i)){
			int tmp = pow(2,i) - 1;
			if(nt(tmp)){
				hh[cnt] = 1ll * pow(2,i - 1)* tmp;
				++cnt;
			}
		}
	}
}

int main(){
	int t; cin >> t;
	init();
	while(t--){
		bool ok = false;
		ll n; cin >> n;
		for(int i = 0; i < cnt; i++){
			if(n == hh[i]){
				ok = true;
				break;
			}
		}
		if(ok) cout << "YES\n";
		else cout << "NO\n";

	}
	return 0;
}