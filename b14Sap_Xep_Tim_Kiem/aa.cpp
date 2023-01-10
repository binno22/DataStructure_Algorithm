#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	vector<string> ans;
	while(n--){
		ll a[12];
		map<ll,int> m;
		for(int i = 1; i <= 12; i++){
			cin >> a[i];
			m[a[i]]++;
		}
		if(m.size() != 3) ans.push_back("no");
		else{
			bool ok = true;
			for(auto x : m){
				if(m[x.first] != 4) ok = false;
			}
			if(ok) ans.push_back("yes");
			else ans.push_back("no");
		}
	}
	for(auto x : ans){
			cout << x << "\n";
		}
	return 0;
}
