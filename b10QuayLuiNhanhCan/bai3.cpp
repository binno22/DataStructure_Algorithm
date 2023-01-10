#include<bits/stdc++.h>
using namespace std;

int n,a[100];

void Try(int i){
    if(i == 0) return;
    for(int j = 1; j < i; j++){
        a[j] += a[j + 1];
    }
    Try(i - 1);
    cout << "[";
    for(int j = 1; j <= i; j++){
        cout << a[j];
        if(j == i) cout << "]\n";
        else cout << " ";
    }
    for(int j = i; j >= 1; j--){
    	a[j] -= a[j + 1];
    }
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    Try(n);
	return 0;
}