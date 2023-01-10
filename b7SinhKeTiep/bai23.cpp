#include<bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok;

void ktao(){
	for(int i = 1; i <= n; i++) a[i] = 0;
}
// Sinh xau nhi phan
void sinh(int n){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = false;
	else a[i] = 1;
}

bool check(int n){
	int cnt = 0;
	if(a[1] != a[n]) return false;
	for(int i = 2; i<= n -1; i++){
		if(a[i] != a[1]) ++cnt;
	}
	return cnt == 0 || cnt == n - 2;
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(int i = 2; i <= n ; i += 2){
			ktao();
			ok =true;
			while(ok){
				if(check(i)){
				for(int k = 1; k <= i; k++) cout << a[k];
				cout <<" ";
			}
			sinh(i);
			}
		}
		cout << endl;
	}
	return 0;
}