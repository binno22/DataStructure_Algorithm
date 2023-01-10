#include<bits/stdc++.h>
using namespace std;

using ll = long long;

void quickSort(int a[],int n){
	int pivot = a[n];
	int i = 1, j = 1;
	while(j < n){
		if(a[j] <= pivot){
			swap(a[i],a[j]);
			++i;
		}
		++j;
	}
	swap(a[n],a[i]);
	for(int k = 1; k <= n; k++){
		if(k == i) cout << '[' << a[k] << "] ";
		else cout << a[k] << ' ';
	}
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n; int a[n];
	for(int i = 1; i <= n; i++) cin >> a[i];
	quickSort(a,n);
	return 0;
}
