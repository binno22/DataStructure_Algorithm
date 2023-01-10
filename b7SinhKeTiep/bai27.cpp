#include<bits/stdc++.h>
using namespace std;

int n,k;
string s;
bool ok;
char c;
// Ham sinh
void sinh(){
	int i = s.size() - 1;
	while(i >= 0 && s[i] == c){
		--i;
	}
	if(i == -1) ok = false;
	else{
		s[i]++;
		for(int j = i + 1; j < s.size(); j++){
			s[j] = s[i];
		}
	}
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> k;
		cin >> c;
		ok = true;
		s = string(k,'A'); // khoi tao
		while(ok){
			cout << s << endl;
			sinh();
		}
	}
	return 0;
}