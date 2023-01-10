#include<bits/stdc++.h>
using namespace std;

using ll = long long;
int n,X[100];
vector<vector<int>> ans;

void Try(int sum,int i,int val){
	if(sum == n){
		vector<int> tmp(X + 1,X + i);
		ans.push_back(tmp);
		return;
	}
	for(int j = val; j >= 1; --j){
		if(sum + j <= n){
			X[i] = j;
			Try(sum + j, i + 1, j);
		}
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> n;
    	ans.clear();
    	Try(0,1,n);
    	cout << ans.size() << endl;
    	for(auto it : ans){
    		cout <<  '(';
    		for(int j = 0; j < it.size(); j++){
    			cout << it[j];
    			if(j != it.size() - 1) cout << ' ';
    			else cout << ") ";
    		}
    	}
    	cout << endl;
    }
	return 0;
}