#include<bits/stdc++.h>
using namespace std;

// phan tich theo thong thuong
void phantich(int n){
	for(int i = 2; i <= sqrt(n); i++){
		while(n % i == 0){
			cout << i << " ";
			n /= i;
		}
	} 
	if(n > 1) cout << n;
}


int main(){
	phantich(120);
	return 0;
}