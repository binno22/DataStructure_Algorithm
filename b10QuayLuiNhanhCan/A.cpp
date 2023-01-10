#include<bits/stdc++.h>
using namespace std;

int n,a[1001];

void inp(){
	cin >> n;
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a + 1,a + n + 1);
}

void sovle(){
	bool ok = false;
	for(int i = 1; i <= n; i++){
		int l = i + 1;
		int r = n;
		int x = a[i];
		while(l < r){
			if(x + a[l] + a[r] == 0){
				cout << x << " " << a[l] << " " << a[r] << endl;
				ok = true;
				++l; --r;
			}else if(x + a[l] + a[r] < 0){
				++l;
			}else --r;
		}
	}
	if(ok == false) cout << "No\n";
}

int main(int argc, char const *argv[])
{
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t; 
    while(t--){
    	inp();
    	sovle();
    }
	return 0;
}