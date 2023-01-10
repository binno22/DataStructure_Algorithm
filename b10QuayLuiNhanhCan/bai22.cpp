#include<bits/stdc++.h>
using namespace std;

string s;
int k;

void init(string s){
	if(s.size() >= k){
		cout << s << endl; return;
	}else{
		string t = s;
		char tmp = t[t.size() - 1];
		t.pop_back();
		reverse(t.begin(),t.end());
		t += tmp;
		reverse(t.begin(),t.end());
		string b = s + t;
		init(b);
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> s >> k;
    	init(s);
    }
	return 0;
}