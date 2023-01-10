#include<bits/stdc++.h>
using namespace std;

int n,k,a[100];
bool ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 0;
	}
}

bool check1(int a[],int k){
	int ans = 0;
	for(int i = 1; i <= n - k + 1; i++){
		int cnt = 0;
		for(int j = i + 1; j <= i + k - 1; j++){
			if(a[j] ==  a[i] && a[i] == 0) ++cnt;
		}
		if(cnt == k - 1) ++ans;
		
	}
	return ans == 1;
}

bool check2(){
	int ans = 0,dem = 0;
	for(int i = 1; i <= n; i++){
		if(a[i] == 0){
			++dem;
		}else dem = 0;
		if(dem > k) return false;
		if(dem == k) ++ans;
	}
	return ans == 1;
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
		vector<string> v;
		while(ok){
			if(check2()){
				string ans =  "";
				for(int i = 1; i <= n; i++){
					if(a[i] == 0) ans += 'A';
					else ans += 'B';
				}
				v.push_back(ans);
			}
			sinh();
		}
		cout << v.size() << endl;
		for(string x : v) cout << x << endl;
	}
	return 0;
}