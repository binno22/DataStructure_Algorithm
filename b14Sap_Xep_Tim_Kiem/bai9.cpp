#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Dem so lan xuat hien cua phan tu trong mang da sort
int n,k,ans;

int dem(int a[],int k,int l,int r){
	if(l <= r){
		int mid = (l + r)/2;
		if(a[mid] == k){
			++ans;
			return dem(a,k,mid + 1,r);
			return dem(a,k,l,mid - 1);
		}else if(a[mid] < k) return dem(a,k,mid + 1,r);
		else return dem(a,k,l,mid - 1);
	}else return ans;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		cin >> n >> k; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		ans = 0;
		cout << dem(a,k,0,n - 1) << endl;
	}
	return 0;
}
