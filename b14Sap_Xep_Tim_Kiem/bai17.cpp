#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n; 
	int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int l = 1, r = n;
	while(l < r){
		if(a[l] > a[r]){
			cout << l << ' ' << r << endl;
			++l; --r;
		}else --r;
	}
	return 0;
}