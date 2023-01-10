#include<bits/stdc++.h>
using namespace std;

using ll = long long;

vector<string> ke[1001];

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n; cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++){
		string s;
		getline(cin,s);
		stringstream ss(s);
		string word;
		while(ss >> word){
			ke[i].push_back(word);
		}
		sort(ke[i].begin(),ke[i].end());
	}
	for(int i = 1; i <= n; i++){
		for(auto x : ke[i]){
			cout << i << ' ' << x << endl;
		}
	}
	return 0;
}
