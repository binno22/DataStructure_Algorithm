#include<bits/stdc++.h>
using namespace std;

// Xau AB

int n;
char a[100];
bool ok;

void ktao(){
	for(int i = 1; i <= n; i++){
		a[i] = 'A';
	}
}

void sinh(){
	int  i = n;
	while(i >= 1 && a[i] == 'B'){
		a[i] = 'A';
		--i;
	}
	if(i == 0) ok = false;
	else
		a[i] = 'B';
}
int main(int argc, char const *argv[])
{
	int t; cin >> t;
	while(t--){
		cin >> n;
		ktao();
		ok = true;
		while(ok){
			for(int i = 1; i<= n; i++) cout << a[i];
			cout << " ";
			sinh();
		}
		cout << endl;
	}
	return 0;
}