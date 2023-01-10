#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t; cin >> t;
	while(t--){
		int k; string s; int a[256];
		int ans = 0;
		memset(a,0,sizeof a);
		cin >> k;
		cin >> s;
		priority_queue<int> q;
		for(int i = 0; i < s.size(); i++){
			a[s[i]]++;
		}
		for(int i = 0; i <= 255; i++){
			if(a[i]) q.push(a[i]);
		}
		for(int i = 1; i <= k; i++){
			int tmp = q.top() - 1;
			q.pop();
			if(tmp >= 0) q.push(tmp);
			else q.push(0);
		}
		while(!q.empty()){
			ans += (q.top())*(q.top());
			q.pop();
		}
		cout << ans << endl;
	}
	return 0;
}
