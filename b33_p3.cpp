// Dem so luong uoc cua n!
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

bool nt(int n){
	for(int i = 2; i <= sqrt(n); i++){
		if(n %i == 0) return false;
	}
	return true;
}
// Kiem tra bac cua mot so nguyen to
int degree(int n,int p){
	int ans = 0;
	for(int i = p; i <= n; i *= p){
		ans += n/i;
	}
	return ans;
}


int main(){
	int n; cin >> n;
	ll ans = 1;
	for(int i = 2; i <= n; i++){
		if(nt(i)){
			ans *= (degree(n,i) + 1);
		}
	}
	cout << ans << endl;
	return 0;
}