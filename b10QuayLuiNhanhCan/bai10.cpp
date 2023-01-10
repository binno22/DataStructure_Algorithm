#include<bits/stdc++.h>
using namespace std;

// Di chuyen trong me cung 2

int n,a[101][101],ok;
string s;

void Try(int i,int j){
	if(i == n && j == n){
		cout << s << " "; ok = 1;
	}
	if(i + 1 <= n && a[i + 1][j] == 1){
		s += 'D';
		a[i + 1][j] = 0;// Danh dau la da di roi
		Try(i + 1,j);
		a[i + 1][j] = 1;// Tra lai duong di
		s.pop_back();
	}
	if(j - 1 >= 1 && a[i][j - 1] == 1){
		s += 'L';
		a[i][j - 1] = 0;
		Try(i,j - 1);
		a[i][j - 1] = 1;
		s.pop_back();
	}
	if(j + 1 <= n && a[i][j + 1] == 1){
		s += 'R';
		a[i][j + 1] = 0;
		Try(i,j + 1);
		a[i][j + 1] = 1;
		s.pop_back();
	}
	if(i - 1 >= 1 && a[i - 1][j] == 1){
		s += 'U';
		a[i - 1][j] = 0;
		Try(i - 1,j);
		a[i - 1][j] = 1;
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
    	s = "";
    	ok = 0;
    	if(a[1][1] && a[n][n]){
    		a[1][1] = 0;
    		Try(1,1);
    	}
    	if(!ok) cout << "-1\n";
    	else cout << endl;
    }
	return 0;
}