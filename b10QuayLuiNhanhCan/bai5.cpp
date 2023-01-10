#include<bits/stdc++.h>
using namespace std;

// Di chuyen trong me cung 1

int n; 
int a[11][11];
string s = "";
vector<string> v;

void Try(int i, int j){
	if(i == n && j == n) v.push_back(s);
	if(i + 1 <= n && a[i + 1][j] == 1){
		s += 'D';
		a[i + 1][j] = 0; // Danh dau la da di qua
		Try(i + 1,j);
		a[i + 1][j] = 1;
		s.pop_back();
	}
	if(j + 1 <= n && a[i][j + 1] == 1){
		s += 'R';
		a[i][j + 1] = 0; // Danh dau la da di qua
		Try(i,j + 1);
		a[i][j + 1] = 1; 
		s.pop_back();
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> n;
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= n; j++) cin >> a[i][j];
    	}
    	Try(1,1);
    	if(v.size() == 0) cout << -1 << endl;
    	else{
    		for(string x : v) cout << x << ' ';
    	}
    	v.clear();
   		cout << endl;
    }
	return 0;
}