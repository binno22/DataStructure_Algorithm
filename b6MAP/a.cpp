#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> x, pair<int,int> y){
	return x.second > y.second;
}

// Khai bao pair long pair : pair< pair<int,int>, int> p;

int main(int argc, char const *argv[])
{
	// pair<int,int> a[5];
	// a[0] = {1,2};
	// a[1] = {3,4};
	// a[2] = {2,5};
	// a[3] = {3,5};
	// a[4] = {1,1};
	// sort(a, a + 5, comp);
	// for(auto x : a){
	// 	cout << x.first << " " << x.second << endl;
	// }
// Luu lai chi so cua mang sau khi sap xep
	int n; cin >> n;
	pair<int,int> a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i].first;
		a[i].second = i;
	}
	for(auto x : a){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}