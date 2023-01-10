#include<bits/stdc++.h>
using namespace std;

int n,k,a[100],X[100];
vector<vector<int>> res;

void inp(){
    cin >> n >> k;
    res.clear();
    for(int i = 1; i <= n; i++) cin >> a[i];
    sort(a + 1,a + n + 1);
}

void Try(int i,int sum,int pos){
	if(sum == k){
        vector<int> tmp(X + 1,X + i);
        res.push_back(tmp);
    }
    for(int j = pos; j <= n; j++){
        if(sum + a[j] <= k){
            X[i] = a[j];
            Try(i + 1,sum + a[j],j);
        }
    }
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	inp();
        Try(1,0,1);
        if(res.size() == 0) cout << "-1\n";
        else{
            for(auto x : res){
                for(int ele : x) cout << ele << " ";
                cout << endl;
            }
        }
    }
	return 0;
}