#include<bits/stdc++.h>
using namespace std;

#define max 1000000
bool nt[max + 1];

void sang(int n){
	for(int i = 0; i <= max; i++){
		nt[i] = true;
	}	
	nt[0] = nt[1] = false;
	for(int i = 2; i <= sqrt(n); i++){
		if(nt[i]){
			for(int j = i *i; j <= n; j += i){
				nt[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(nt[i]) cout << i << " ";
	}
}
int main(){
	int n; cin >> n;
	sang(n);
	return 0;
}
