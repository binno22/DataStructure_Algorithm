#include<bits/stdc++.h>
using namespace std;

string s;
char a[100];
bool ok[100];

// Sinh hoan vi

void Try(int i){
	for(int j = 0; j < s.size(); j++){
		if(ok[s[j]] == false){
			a[i] = s[j];
			ok[s[j]] = true;
			if(i == s.size()){
			for(int l = 1; l <= s.size(); l++) cout << a[l];
			cout << " ";
			}else Try(i + 1);
			ok[s[j]] = false;
		}
	}
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> s;
    	memset(ok,false,s.size());
    	Try(1);
    	cout << endl;
    }
	return 0;
}