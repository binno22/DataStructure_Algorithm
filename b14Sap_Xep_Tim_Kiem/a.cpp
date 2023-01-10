#include<bits/stdc++.h> 
using namespace std;

int main(){
	int a,b; cin >> a >> b;
	int k = a * b;
	int tmp1 = a; 
	int tmp2 = b;
	long long int res1 = 1;
	while(tmp2){
		if(tmp2 % 2 == 1){
		res1 *= a;
		}
		a *= a;
		tmp2 /= 2;
	}
	long long int res2 = 1;
	while(tmp1){
		if(tmp1 % 2 == 1){
		res2 *= b;
		}
		b *= b;
		tmp1 /= 2;
	}
	cout << res1 - res2;
	return 0;
}