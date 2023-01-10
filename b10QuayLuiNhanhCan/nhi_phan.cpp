#include<bits/stdc++.h>
using namespace std;

int X[100],n;

void in(){
	for(int i = 1; i <= n; i++) cout << X[i];
}

void Try(int i){
	for(int j = 0; j <= 1; j++){
		X[i] = j;
		if(i == n){
			in(); cout << endl;
		}else Try(i + 1);
	}
}

int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	Try(1);
	return 0;
}