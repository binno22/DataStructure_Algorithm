#include<bits/stdc++.h>
using namespace std;

using ll = long long;

// Binary Search
int n,k; 

int binarySearch(int a[],int k,int l,int r){
	if(l < r){
		int mid = (l + r)/2;
		if(a[mid] == k) return 1;
		if(a[mid] > k) return binarySearch(a,k,mid + 1,r);
		else return binarySearch(a,k,l,mid - 1);
	}else return 0;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n >> k; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	cout << binarySearch(a,k,0,n - 1);
	return 0;
}
