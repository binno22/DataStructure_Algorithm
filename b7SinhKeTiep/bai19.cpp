#include<bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok;
set<string> s;

void ktao(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}

bool check(){
	int cnt = 0;
	if(a[1] != a[n]) return false;
	for(int i = 2; i <= n - 1; i++){
		if(a[i] != a[1]) ++cnt;
	}
	return cnt == n - 2 || cnt == 0;
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = false;
	else a[i] = 1;
}

int main(int argc, char const *argv[]){
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = true;
		while(ok){
			string t = "";
			if(check()){
				for(int i = 1; i <= n; i++){
					char tmp = a[i] + '0';
					t += tmp;
				}
			}
			s.insert(t);
			sinh();
		}
		for(string x : s) cout << x << ' ';
		cout << endl;
	}
	return 0;
}