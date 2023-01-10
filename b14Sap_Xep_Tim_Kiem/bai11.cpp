#include<bits/stdc++.h>
using namespace std;

using ll = long long;

string s = "";

string mergeSort(int b[],int c[],int m,int n){
	int i = 1,j = 1;
	while(i <= m && j <= n){
		while(b[i] < c[j] && i <= m){
			s += 'b' + to_string(i) + ' ';
			++i;
		}
		while(c[j] < b[i] && j <= n){
			s += 'c' + to_string(j) + ' ';
			++j;
		}
	}
	while(i <= m){
		s += 'b' + to_string(i) + ' ';
		++i;
	}
	while(j <= n){
		s += 'c' + to_string(j) + ' ';
		++j;
	}
	return s;
}

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m,n; cin >> m >> n; int b[m],c[n];
	for(int i = 1; i <= m; i++) cin >> b[i];
	for(int i = 1; i <= n; i++) cin >> c[i];
	cout << mergeSort(b,c,m,n);
	return 0;
}
