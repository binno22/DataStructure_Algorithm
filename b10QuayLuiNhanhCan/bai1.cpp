#include<bits/stdc++.h>
using namespace std;

int n,k,s,a[100],sum,cnt = 0;
// Quay lui sinh to hop
void Try(int i){
	for(int j = a[i - 1] + 1; j <= n - k + i; j++){
		a[i] = j;
		if(i == k){
			sum = 0;
			for(int l = 1; l <= k; l++) sum += a[l];
			if(sum == s) ++cnt;
		}else Try(i + 1);
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    bool ok = true;
    while(ok){
    	cin >> n >> k >> s;
    	if(n == 0 && k == 0 && s == 0) ok = false;
    	else{
    		Try(1);
    		cout << cnt << endl;
    		cnt = 0;
    	}
    }
	return 0;
}