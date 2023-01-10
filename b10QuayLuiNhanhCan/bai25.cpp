#include<bits/stdc++.h>
using namespace std;

int n,a[100],X[100],cnt;
vector<vector<int>> ans;

void Try(int i,int pos){
	for(int j = pos; j <= n; j++){
		if(X[i - 1] < a[j]){
			X[i] = a[j];
			vector<int> tmp(X + 1,X + i + 1);
			if(tmp.size() >= 2) ans.push_back(tmp);
			Try(i + 1,j + 1);
		}
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Try(1,1);
	sort(ans.begin(),ans.end());
	for(auto it : ans){
		for(int x : it) cout << x << ' ';
		cout << endl;
	}
	return 0;
}