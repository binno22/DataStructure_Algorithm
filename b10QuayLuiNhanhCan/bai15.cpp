#include<bits/stdc++.h>
using namespace std;

int n,k,a[100],s,ans;
bool visited[100];

void inp(){
	cin >> n >> k;
	s = 0;
	ans = 0;
	for(int i = 1; i <= n; ++i){
		 cin >> a[i];
		 s += a[i];
	}
	sort(a + 1,a + n + 1);
	memset(visited,false,sizeof(visited));
	if(s % k) cout << 0 << endl;
	else s /= k;
}

void Try(int sum,int cnt){
	if(cnt == k){
		ans = 1; return;
	}
	for(int j = 1; j <= n; j++){
		if(visited[j] == false){
			visited[j] = true;
			if(sum == s){
				Try(0,cnt + 1);
			}else if(sum + a[j] <= s){
				Try(sum + a[j],cnt);
			}
		}
		visited[j] = false;
	}

}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	inp();
    	Try(0,0);
    	cout << ans << endl;
    }
	return 0;
}