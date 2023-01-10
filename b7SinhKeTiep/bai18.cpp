#include<bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok;

void ktao(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}

bool check(){
	if(a[1] == 0 || a[n] == 1) return false;
	for(int i = 1; i < n; i++){
		if(a[i] == 1 && a[i + 1] == 1) return false;
	}
	return true;
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

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = true;
		while(ok){
			if(check()){
				for(int i = 1; i <= n; i++){
					if(a[i]) cout << 'H';
					else cout << 'A';
				}
				cout << endl;
			}
			sinh();
		}
	}
	return 0;
}