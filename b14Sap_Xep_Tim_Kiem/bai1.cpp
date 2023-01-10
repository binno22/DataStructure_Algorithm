#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Thuat toan doi cho truc tiep

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n; int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	int cnt = 1;
	while(cnt != n){
		int j = n;
		while(a[j] < a[j - 1] && j >= 2){
			swap(a[j],a[j -  1]);
			--j;
		}
		cout << "Buoc " << cnt++ << ": ";
		for(int k = 1; k <= n; k++){
			cout << a[k] << ' ';
		}
		cout << endl;
	}
	return 0;
}
