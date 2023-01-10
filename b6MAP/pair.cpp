#include<bits/stdc++.h>
using namespace std;

#define fi first
#define se second

// make_pair(x,y) => tra ve 1 pair tu cap x,y
// pair<int,int> p = make_pair(100,200);
// pair<data_type1, datatype_2> name_pair;

int main(int argc, char const *argv[])
{
	pair<string,int> p{"nguyen van a",10};
	cout << p.first << " " << p.second << endl;
	cout << endl;
	// Tao mot array gom cac pair
	pair<int,int> a[100];
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i].fi >> a[i].se;
	}
	for(pair<int,int> x : a){
		cout << x.first << ' ' << x.second << endl;
	}

	// Dua pair vao trong vector
	vector< pair<int,int> > v;
	for(int i = 0; i < n; i++){
		int x,y; cin >> x >> y;
		// v.push_back(make_pair(x,y));
		// hoac la
		v.push_back({x,y});
	}
	for(pair<int,int> x : v){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}