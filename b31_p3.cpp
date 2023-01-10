// Cho số nguyên dương n, nhiệm vụ của bạn là in ra 𝜑(i) với 1≤i≤n. Trong đó 𝜑(i) là phi
// hàm Euler của i
#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int p[1000001];

void phi(){
	for(int i = 1; i <= 1000000; i++){
		p[i] = i;
	}
	for(int i = 2; i <= 1000000; i++){
		if(p[i] == i){
			p[i] = i - 1;
			for(int j = 2*i; j <= 1000000; j += i){
				p[j] = p[j] - p[j]/i;
			}
		}
	}
} 

int main(){
	phi();
	ll n; cin >> n;
	for(int i = 1; i <= n; i++){
		cout << p[i] << " ";
	}
	return 0;
}