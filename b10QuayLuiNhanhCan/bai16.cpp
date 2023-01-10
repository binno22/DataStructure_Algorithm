#include<bits/stdc++.h>
using namespace std;

int n,S,a[100],X[100],k,ok;


// Sinh to hop
void Try(int i){
	if(ok) return;
	for(int j = X[i - 1] + 1; j <= n - k + i; j++){
		X[i] = j;
		if(i == k){
			int sum = 0;
			for(int j = 1; j <= k; j++){
				sum += a[X[j]];
			}
			if(sum == S) ok = true;
		}
		else Try(i + 1);
	}
}

void inp(){
	cin >> n >> S;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1,a + n + 1,greater<int>());
	for(int i = 1; i <= n; i++){
		k = i;
		Try(1);
		if(ok) cout << i << endl; return;
	}
	cout << "-1\n";
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	inp();
    }
	return 0;
}