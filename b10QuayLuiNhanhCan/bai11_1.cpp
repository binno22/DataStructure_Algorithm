#include<bits/stdc++.h>
using namespace std;

void doiChoChuSo(string s,int k){
	for(int i = 0; i < s.size(); i++){
		if(k == 0) break;
		char c = s[i];
		int pos = i;
		for(int j = i + 1; j < s.size(); j++){
			if(s[j] > c){
				c = s[j];
				pos = j;
			}
		}
		if(c > s[i]){
			swap(s[i],s[pos]); --k;
		}
	}
	cout << s << endl;
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t; 
    while(t--){
    	int k; string s;
    	cin >> k >> s;
    	doiChoChuSo(s,k);
    }
	return 0;
}