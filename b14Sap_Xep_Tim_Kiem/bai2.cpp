#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Thuat toan sap xep chon

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n; int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	for(int i = 1; i < n; i++){
		int j = i;
		int pos = i;
		while(j <= n){
			if(a[pos] > a[j]){
				pos = j;
			}
			++j;
		}
		swap(a[i],a[pos]);
		cout << "Buoc " << i << ": ";
		for(int k = 1; k <= n; k++) cout << a[k] << ' ';
		cout << endl;
	}
	return 0;
}
