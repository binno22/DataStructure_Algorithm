#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Vi tri cuoi cung xuat hien cua ptu trong sort array
int n,k,ans;

int timkiem(int a[],int k,int l,int r){
	if(l <= r){
		int mid = (l + r)/2;
		if(a[mid] == k){
			ans = mid + 1;
			return timkiem(a,k,mid + 1,r);
		}else if(a[mid] < k) return timkiem(a,k,mid + 1,r);
		else return timkiem(a,k,l,mid - 1);
	}else return ans;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		cin >> n >> k; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		ans = -1;
		cout << timkiem(a,k,0,n - 1) << endl;
	}
	return 0;
}
