#include<bits/stdc++.h>
using namespace std;

string s;


void solve(string s){
	int i = s.size() - 2;
	while(i >= 0 && s[i] >= s[i + 1]){
		--i;
	}
	if(i == -1) cout << "BIGGEST\n";
	else{
		int j = s.size() - 1;
		while(s[i] >= s[j]) --j;
		swap(s[i],s[j]);
		reverse(s.begin() + i + 1,s.end());
		cout << s << endl;
	}
}

// Dung next_permutation()
// while(t--){
// 	int tt; string s;
// 	cin >> t >> s;
// 	cout << tt << ' ';
// 	if(next_permutation(s.begin(),s.end())){
// 		cout << s << endl;
// 	}else cout << "BIGGEST";
// }

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> s;
		solve(s);
	}
	return 0;
}