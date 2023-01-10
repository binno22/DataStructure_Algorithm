#include<bits/stdc++.h>
using namespace std;

int n,M,a[100],X[100],ans;

void nhap(){
	ans = 1e9;
	cin >> n >> M;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1,a + n + 1);
}

void Try(int sum,int i,int pos){
	for(int j = pos; j <= n; j++){
		if(sum + a[j] <= M){
			sum += a[j];
			++i;
			if(i == 3){
				ans = min(ans,M - sum);
			}
			else Try(sum,i,j + 1);
			sum -= a[j];
			--i;
		}
	}
}

int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	nhap();
    	Try(0,0,1);
    	cout << M - ans << endl;
    }
	return 0;
}