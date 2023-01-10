#include<bits/stdc++.h>
using namespace std;

int n,a[100];

void Try(int i){
    if(i == 0) return;
    cout << "[";
    for(int j = 1; j <= i; j++){
        cout << a[j] << ' ';
    }cout << "]\n";
    for(int j = 1; j < i; j++){
        a[j] += a[j + 1];
    }
    Try(i - 1);
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	cin >> n;
        for(int i = 1; i <= n; i++) cin >> a[i];
    	// vector<int> v(n);
    	// for(int i = 1; i <= n; i++) cin >> v[i];
    	// int k = v.size();
    	// while(k){
    	// 	for(int i = 1; i <= k; i++){
    	// 		cout << v[i] << ' ';
    	// 	}
    	// 	cout << endl;
    	// 	for(int i = 1; i < k; i++){
    	// 		v[i] = v[i] + v[i + 1];
    	// 	}
    	// 	--k;
    	// }
        Try(n);
    }
	return 0;
}