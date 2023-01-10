// Cho hai so A va M neu gcd(A,M) = 1 ta luon tim duoc B sao cho
// (A*B)%M = 1.Khi do B dgl nghich dao modulo cua A voi modulo M
#include<bist/stdc++.h>
using namespace std;

using ll = long long;

int x,y,g;
// Giai thuat euclid mo rong
// Ax + By = gcd(A,B) luon tim duoc cap so (x,y) thoa man
// Khi b = 0 thi x = 1 va y = 0
// Dinh ly nho cua fermat : cho A,M(snt) (A^(M - 1) dong du 1 mod M)
// nghich dao modulo cua A la A^(M - 2) % M
void extended_gcd(int a, int b){
	if(b == 0){
		x = 1;
		y = 0;
		g = a;
	}else{
		glc(b,a % b);
		int tmp = x;
		x = y;
		y = tmp - a / b * y;		
	}
}

int modular_inverse(int a,int m){
	extended_gcd(a,m);
	return (x % m + m) % m;
}
// Tinh a ^ b mod c
ll powMode(ll a, ll b, ll c){
	ll res = 1;
	while(b){
		if(b % 2 == 1){
			res *= a;
			res %= c;
		}
		a *= a;
		a %= c;
		b /= 2;
	}
	return res;
}

int main(int argc, char const *argv[])
{
	int a, int m; cin >> a >> m;

	return 0;
}