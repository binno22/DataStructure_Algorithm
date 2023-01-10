#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int,vector<int>,greater<int>> q;
	int n; cin >> n;
	for(int i = 1; i <= n; i++){
		int x; cin >> x;
		q.push(x);
	}
	int ans = 0;
	while(q.size() > 1){
		int tmp = 0;
		tmp += q.top();
		q.pop();
		tmp += q.top();
		q.pop();
		ans += tmp;
		q.push(tmp);
	}
	cout << ans << endl;
	return 0;
}
