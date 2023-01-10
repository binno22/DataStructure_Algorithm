#include<bits/stdc++.h>
using namespace std;

int X[100],n,k;

void in(){
	for(int i = 1; i <= k; i++) cout << X[i];
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		X[i] = j;
		if(i == k){
			in(); cout << endl;
		}else Try(i + 1);
	}
}

int main(int argc, char const *argv[])
{
	cin >> n >> k;
	Try(1);
	return 0;
}