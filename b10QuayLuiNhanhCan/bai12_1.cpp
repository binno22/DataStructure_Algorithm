#include<bits/stdc++.h>
using namespace std;

int n,p,s,X[100];
vector<int> v;
vector<vector<int>> res;

bool check(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0) return false;
	}
	return true;
}

void inp(){
	cin >> n >> p >> s;
	v.clear();
	res.clear();
	for(int i = p; i <= s; i++){
		if(check(i)){
			v.push_back(i);
		}
	}
}

void Try(int i,int sum,int pos){
	if(i == n && sum == s){
		vector<int> tmp(X,X + n);
		res.push_back(tmp);
	}
	for(int j = pos; j < v.size(); j++){
		if(sum + v[j] <= s){
			X[i] = v[j];
			Try(i + 1,sum + v[j],j + 1);
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
    	Try(0,0,0);
    	for(auto x : res){
    		for(int ele : x) cout << ele << " ";
    		cout << endl;
    	}
    }
	return 0;
}