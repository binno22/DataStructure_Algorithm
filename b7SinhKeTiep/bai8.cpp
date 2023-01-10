#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
bool ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

bool check(int a[],int k){
	int cnt = 0;
	for(int i = 1; i <= n; i++) cnt += a[i];
	return cnt == k;
}

void sinh(){
	int i = n;
	while(i >= 1 && a[i] == 1){
		a[i] = 0;
		--i;
	}
	if(i == 0) ok = false;
	else
		a[i] = 1;
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ktao();
		ok = true;
		while(ok){
			if(check(a,k)){
			for(int i = 1; i <= n; i++) cout << a[i];
			cout << endl;
			}
			sinh();
		}
		cout << endl;
	}
	return 0;
}