#include<bits/stdc++.h>
using namespace std;

int n,k,a[100],X[100],ans,sum,pos;

void inp(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1, a + n + 1);
}

void Try(int sum,int i,int pos){
	if(sum == k){
		cout << '[';
		for(int j = 1; j < i; j++){
			cout << X[j];
			if(j == i - 1) cout << "]";
			else cout << " ";
		}
		ans = 1;
		return;
	}
	for(int j = pos; j <= n; j++){
		X[i] = a[j];
		Try(sum + a[j],i + 1,j + 1);
	}
	
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	inp();
    	ans = 0;
    	Try(0,1,1);
    	if(!ans) cout << "-1\n";
    	else cout << endl;
    }
	return 0;
}