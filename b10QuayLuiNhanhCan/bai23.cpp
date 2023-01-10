#include<bits/stdc++.h>
using namespace std;


int init(int n){
	if(n == 1) return 0;
	int x = 1e9, y = 1e9, z = 1e9;
	if(n % 2 == 0) x = 1 + init(n/2);
	if(n % 3 == 0) y = 1 + init(n/3);
	if(n > 1) z = 1 + init(n - 1);
	return min({x,y,z});
}


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	int n; cin >> n;
    	cout << init(n) << endl;
    }
	return 0;
}