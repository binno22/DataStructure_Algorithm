// Dem so luong chu so 0 cua N!
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
		int n; cin >> n;
		cout << degree(n,5);
	}
	return 0;
}