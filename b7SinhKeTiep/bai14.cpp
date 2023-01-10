#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
set<int> s;

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		--i;
	}
	if(i == 0)
		cout << k << endl;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
		int cnt = 0;
		for(int i = 1;i<= k; i++){
			if(s.count(a[i])){
				++cnt;
			}
		}
		cout << k - cnt << endl;
	}
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			s.insert(a[i]);
		}
		sinh();
		s.clear();
	}
	return 0;
}