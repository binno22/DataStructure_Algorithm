#include<bits/stdc++.h>
using namespace std;

int n;
string s;
bool ok;
vector<string> v;

void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == '1'){
		s[i] = '0';
		--i;
	}
	if(i == -1) ok = false;
	else s[i] = '1';
}

void init(){
	for(int i = 1; i <= 15; i++){
		ok = true;
		s = string(i,'0');
		while(ok){
			string tmp = s;
			reverse(tmp.begin(),tmp.end());
			v.push_back(s + tmp);
			sinh();
		}
	}
}

int main(int argc, char const *argv[])
{
	init();
	int t; cin >> t;
	while(t--){
		cin >> n;
		for(string x : v){
			if(x.size() <= n) cout << x << ' ';
			else break;
		}
		cout << endl;
	}
	return 0;
}