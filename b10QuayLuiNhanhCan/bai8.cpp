#include<bits/stdc++.h>
using namespace std;

int m,n,cnt;
int a[101][101];
string s;

void Try(int i,int j){
	if(i == m && j == n){
		++cnt;
	}
	if(i + 1 <= m){
		s += to_string(a[i + 1][j]);
		Try(i + 1,j);
		s.pop_back();
	}
	if(j + 1 <= n){
		s += to_string(a[i][j + 1]);
		Try(i,j + 1);
		s.pop_back();
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> m >> n;
    	for(int i = 1; i <= m; i++){
    		for(int j = 1; j <= n; j++) cin >> a[i][j];
    	}
    	cnt = 0;
    	s = "";
    	Try(1,1);
    	cout << cnt << endl;
    }
	return 0;
}