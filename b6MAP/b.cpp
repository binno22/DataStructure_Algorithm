#include<bits/stdc++.h> 
using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		map<string,int> cnt;
		cin.ignore();
		int ans1 = 0,ans2 = 0, ans3 = 0;
		vector<string> s1(n),s2(n),s3(n);
		for(string &x : s1) cin >> x;
		for(string &x : s2) cin >> x;
		for(string &x: s3) cin >> x;
		for(int i = 0; i < n; i++){
			if(cnt.count(s1[i]) == 0) cnt[s1[i]] = 1;
			else cnt[s1[i]]++;
			if(cnt.count(s2[i]) == 0) cnt[s2[i]] = 1;
			else cnt[s2[i]]++;
			if(cnt.count(s3[i]) == 0) cnt[s3[i]] = 1;
			else cnt[s3[i]]++;
		}		
		for(int j = 0; j < n; j++){
			if(cnt[s1[j]] == 1) ans1 += 3;
			else if(cnt[s1[j]] == 2) ans1 += 1;
			else ans1 += 0;
			if(cnt[s2[j]] == 1) ans2 += 3;
			else if(cnt[s2[j]] == 2) ans2 += 1;
			else ans2 += 0;
			if(cnt[s3[j]] == 1) ans3 += 3;
			else if(cnt[s3[j]] == 2) ans3 += 1;
			else ans3 += 0;

			}
		cout << ans1 << ' ' << ans2 << ' ' << ans3 << endl;	
	}
	return 0;
}