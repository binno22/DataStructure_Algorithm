#include<bits/stdc++.h>
using namespace std;

int n,a[100][100],cnt;

int dx[4] = {1, 0 , 0, -1};
int dy[4] = {0, -1, 1, 0};

void Try(int i,int j){
	a[i][j] = 0;
	for(int k = 0; k < 4; k++){
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
			Try(i1,j1);
		}
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
    	cnt = 0;
    	for(int i = 1; i <= n; i++){
    		for(int j = 1; j <= n; j++){
    			if(a[i][j]){
    				Try(i,j); ++cnt;
    			}
    		}
    	}
    	cout << cnt << endl;
    }
	return 0;
}