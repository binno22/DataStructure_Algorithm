#include<bits/stdc++.h>
using namespace std;

// X[i]  = j : con hau nam o hang i va cot j

int n,X[100],cot[100],d1[100],d2[100],cnt = 0;

// cot[j] : danh dau cot j 
// d1[] : danh dau duong cheo xuoi
// d2[] : danh dau duong cheo nguoc

void ktao(){
	memset(cot,0,sizeof(cot));
	memset(d1,0,sizeof(d1));
	memset(d2,0,sizeof(d2));
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j -1] == 0){ //con hau chua bi chiem cho
			cot[j] = 1;
			d1[i - j + n] = 1;
			d2[i + j - 1] = 1;
			if(i == n){
				++cnt;
			}
			Try(i + 1);
			cot[j] = 0;
			d1[i - j + n] = 0;
			d2[i + j - 1] = 0;
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
	    ktao();
	    Try(1);
	    cout << cnt << endl;
	    cnt  = 0;
	}
	return 0;
}