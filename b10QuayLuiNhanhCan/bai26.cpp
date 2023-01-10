#include<bits/stdc++.h>
using namespace std;

int n,S,a[100],X[100],ans = 1e9;

void nhap(){
	cin >> n >> S;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1,a + n + 1,greater<int>());
}

void Try(int sum,int i,int pos){
	for(int j = pos; j <= n; j++){
		if(sum + a[j] <= S){
			sum += a[j];
			++i;
			if(sum == S) ans = min(ans,i);
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
    nhap();
    Try(0,0,1);
    if(ans == 1e9) cout <<  "-1\n";
    else cout << ans << endl;
	return 0;
}