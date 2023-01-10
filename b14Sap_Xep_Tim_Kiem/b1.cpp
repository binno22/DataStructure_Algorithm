#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	while(true){
		vector<int> a(12);
		bool all = true;
		for(int& x : a){
			cin >> x;
			all &= x == 0;
		}
		if(all) break;

		sort(a.begin(),a.end());
		
		cout << (((a[0] == a[3]) && (a[4] == a[7]) && (a[8] == a[11])) ? "yes" : "no") << endl;
	}
	return 0;
}
