#include<bits/stdc++.h>
using namespace std;

int n, a[100],cnt;
bool ok;

void ktao(){
	// Bat dau tu so cuoi cung
	cnt = 1;
	a[1] = n;
}

void sinh(){
	int i = cnt;
	while(i >= 1 && a[i] == 1){
		--i;
	}
	if(i == 0) ok = false;
	else{
		a[i]--;
		int thieu = cnt - i + 1;
		int x = thieu/a[i];
		int y = thieu%a[i];
		cnt = i;
		for(int j = 1; j <= x; j++){
			a[cnt + 1] = a[i];
			++cnt;
		}
		if(y){
			a[cnt + 1] = y;
			++cnt;
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> n;
	ktao();
	ok = true;
	while(ok){
		for(int i = 1; i<= cnt; i++){
			cout << a[i] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}