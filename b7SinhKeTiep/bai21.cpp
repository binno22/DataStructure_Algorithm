#include<bits/stdc++.h>
using namespace std;
// sinh hoan vi
int n,a[100];
string t[100];
bool ok;

void ktao(){
	for(int i = 1; i <= n; i++) a[i] = i;
}

void sinh(){
	int i = n - 1;
	while(i >= 1 && a[i] > a[i + 1]){
		--i;
	}
	if(i == 0) ok= false;
	else{
		int j = n;
		while(a[i] > a[j]) --j;
		swap(a[i],a[j]);
		reverse(a + i + 1,a + n + 1);
	}
}

int main(int argc, char const *argv[])
{
	cin >> n;
	for(int  i = 1; i <= n ; i++) cin >> t[i];
	sort(t + 1,t + n + 1);
	ktao();
	ok = true;
	while(ok){
		for(int i = 1; i <= n; i++) cout << t[a[i]] << " ";
		cout << endl;
		sinh();
	}
	return 0;
}