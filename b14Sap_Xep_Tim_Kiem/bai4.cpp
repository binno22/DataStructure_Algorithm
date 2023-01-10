#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Bubble Sort

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n; int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i < n; i++){
		for(int j = 1; j < n; j++){
			if(a[j] > a[j + 1]) swap(a[j + 1],a[j]);
		}
		cout << "Buoc " << i << ": ";
		for(int k = 1; k <= n; k++) cout << a[k] << ' ';
		cout << endl;
	}
	return 0;
}
