// Cho so tu nhien N va so nguyen to P.Tim x lon nhat de N!
// chia het cho p^x
#include<bits/stdc++.h>
using namespace std;

int degree(int n,int p){
	int ans = 0;
	for(int i = p; i <= n; i *= p){
		ans += n/i;
	}
	return ans;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n,p; cin >> n >> p;
		cout << degree(n,p) << endl;
	}
	return 0;
}
