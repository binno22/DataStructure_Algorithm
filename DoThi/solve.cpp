#include<bits/stdc++.h>
using namespace std;

int n,m;
int is,js,ie,je;
char a[1001][1001];

int dx[4] = {0 , 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};
string path = "LRUD";

string s;
string ans = "";
bool ok = false;

void Try(int i,int j){
	if(i == ie && j == je){
		if(ans == "") ans = s;
		else if(ans.length() > s.length()) ans = s;
		ok = true;
	}
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == '.'){
			s += path[k];
			a[i1][j1] = '#';
			Try(i1,j1);
			a[i1][j1] = '.';
			s.pop_back();
		}
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    	cin >> n >> m;
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= m; j++){
    			cin >> a[i][j];
    			if(a[i][j] == 'A'){
    				a[i][j] == '.';
    				is = i; js = j;
    			}
    			if(a[i][j] == 'B'){
    				a[i][j] = '.';
    				ie = i; je = j;
    			}
    		}
    	}
    	s = "";
    	a[is][js] = '#';
    	Try(is,js);
    	if(ok){
    		cout << "YES\n";
			cout << ans.length() << endl;
			cout << ans;
    	}else cout << "NO";
   
	return 0;
}