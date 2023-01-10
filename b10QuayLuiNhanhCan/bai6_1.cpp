#include<bits/stdc++.h>
using namespace std;

int n,k,a[100],b[100],sum = 0;
set<int> s;
vector<set<int>> v;

void Try(int i){
	for(int j = 0; j <= 1; j++){
		b[i] = j;
		if(i == n){
			for(int k = 1;k <= n; k++){
				if(b[k] == 1){
					sum += a[k];
					s.insert(a[k]);
				}
			}
			if(sum == k){
				// ++cnt;
				v.push_back(s);
			}
			sum = 0; s.clear();
		}else Try(i + 1);
	}
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= n; i++) cin >> a[i];
		Try(1); 
		sort(v.begin(),v.end());
		if(v.size() == 0) cout << -1 << endl;
		else{
			for(set<int> x : v){
				cout << "[ ";
				for(int ele : x) cout << ele << ' ';
				cout << "] ";
			}
			cout << endl;
		}
		v.clear();
	}
	return 0;
}