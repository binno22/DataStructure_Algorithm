#include<bits/stdc++.h>
using namespace std;

using ll = long long;
ll C[1001][1001];
// C[i][j] : to hop chap i cua j

void init(){
	for(int i = 0; i <= 1000; i++){
		for(int  j = 0; j <= 1000; j++){
			if(j == 0 || j == i){
				C[i][j] = 1;
			}else{
				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
				C[i][j] %= (int)(1e9 + 7);
			}
		}
	}
}


int main(int argc, char const *argv[])
{
	int t; cin >> t;
	init();
	while(t--){
		int n,k; cin >> n >> k;
		cout << C[n][k] << endl;
	}
	return 0;
}