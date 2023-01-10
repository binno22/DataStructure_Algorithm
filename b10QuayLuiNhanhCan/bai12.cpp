#include<bits/stdc++.h>
using namespace std;

int s,p,n,cnt,sum;
int a[100];
set<int> se;
vector<set<int>> v;

bool check(int x){
	for(int i = 2; i <= sqrt(x); i++){
		if(x % i == 0) return false;
	}
	return true;
}

void Try(int i){
	for(int j = i; j < cnt; j++){
		sum += a[j];
		se.insert(a[j]);
		if(se.size() == n){
			if(sum == s) v.push_back(se);
		}else Try(i + 1);
		se.erase(a[j]);
		sum -= a[j];
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cnt = 1; sum = 0;
    	cin >> n >> p >> s;
    	for(int i = p + 1; i < s; i++){
    		if(check(i)) a[cnt++]= i;
    	}
    	Try(1);
    	cout << v.size() << endl;
    	for(set<int> x : v){
    		for(int ele : x) cout << ele << ' ';
    		cout << endl;
    	}
    	v.clear();
    	se.clear();
    }
	return 0;
}