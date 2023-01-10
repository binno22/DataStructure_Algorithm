#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int cnt = n / 7;
		string s = "";
		for(int i = cnt; i >= 0; --i){
			int tmp = n - i * 7;
			if(tmp % 4 == 0){
				s += string(tmp,'4');
				s += string(i,'7');
				break;
			}
		}
		if(s == "") cout << "-1\n";
		else cout << s << endl;
	}
	return 0;
}
