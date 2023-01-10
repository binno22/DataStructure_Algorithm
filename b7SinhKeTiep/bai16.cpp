#include<bits/stdc++.h>
using namespace std;

int n,k,c[100][100],a[100];
bool ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = n - 1;
	while(i >= 0 && a[i] > a[i + 1]) --i;
	if(i == 0) ok = false;
	else{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i],a[j]);
		reverse(a + i + 1,a + n + 1);
	}
}

bool check(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += c[i][a[i]];
	}
	return sum == k;
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		ktao();
		ok = true;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> c[i][j];
			}
		}
		while(ok){
			if(check()){
				for(int i = 1; i <= n; i++) cout << a[i] << ' ';
				cout << endl;
			}
			sinh();
		}
	}
	return 0;
}