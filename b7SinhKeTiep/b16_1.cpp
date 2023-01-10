#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		int n,k;
		cin >> n >> k;
		int c[n + 1][n + 1];
		for(int i = 1; i <= n; i++){
			for(int j = 1; j<= n; j++) cin >> c[i][j];
		}
		int a[100];
		for(int i = 1; i<= n; i++) a[i] = i;
		vector<string> res;
		do{
			int sum = 0;
			for(int i = 1;i <= n; i++){
				sum += c[i][a[i]];
			}
			if(sum == k){
				string ans = "";
				for(int i =1; i<= n; i++){
					ans += to_string(a[i]);
					ans += " ";
				}
				res.push_back(ans);
			}
		}while(next_permutation(a + 1, a + n + 1));
		cout << res.size() << endl;
		for(string x : res) cout << x << endl;
	}
	return 0;
}