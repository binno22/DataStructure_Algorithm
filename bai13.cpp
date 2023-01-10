#include<bits/stdc++.h>
using namespace std;

int  nt[1000001];

void sang(){
	for(int i = 0; i <= 1000000; i++){
		nt[i] = i;
	}
	for(int i = 2; i <= sqrt(1000000); i++){
		if(nt[i]){
			for(int j = i*i; j <= 1000000; j += i){
				if(nt[j] == j){
					nt[j] = i;
				}
				
			}
		}
	}
}

int main(){
	int t; cin >> t;
	sang();
	while(t--){
		int n; cin >> n;
		for(int i = 1; i <= n; i++){
			cout << nt[i] << " ";
		}
	}
	return 0;
}