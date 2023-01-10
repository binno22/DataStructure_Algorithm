#include<bits/stdc++.h>
using namespace std;

int N;
long long K;

void solve(){
	cin >> N >> K;
	string s = "",t = "";
	for(int i = 1; i <= N; i++){
		int x; cin >> x;
		s += x + '0';
	}
	for(int i = 1; i <= N; i++){
		int x; cin >> x;
		t += x + '0';
	}
	if(s == t && K == 0) cout << "YES\n";
	else if(s == t && K == 1) cout << "Np\n";
	else{
		while(s[0] != t[0]){
			char x = s[0];
			reverse(s.begin(),s.end());
			s.pop_back();
			reverse(s.begin(),s.end());
			s += x;
		}
		if((s != t) || (s == t && K % 2 == 0)) cout << "NO\n";
		else cout << "YES\n";
	}
	
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
   	int t; cin >> t;
   	while(t--){
   		solve();
   	}
	return 0;
}