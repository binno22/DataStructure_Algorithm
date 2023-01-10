#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Thuat toan sap xep chen

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n; int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i <= n; i++){
		int j = i;
		while(j >= 2){
			if(a[j] < a[j - 1]) swap(a[j],a[j - 1]);
			--j;
		}
		cout << "Buoc " << i - 1 << ": ";
		for(int k = 1; k <= i; k++) cout << a[k] << ' ';
		cout << endl;
	}
	return 0;
}
