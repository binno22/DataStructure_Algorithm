#include<bits/stdc++.h>
using namespace std;

int x,y,g;
// Giai thuat euclid mo rong
// Ax + By = gcd(A,B) luon tim duoc cap so (x,y) thoa man
// Khi b = 0 thi x = 1 va y = 0
void glc(int a, int b){
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

int main(int argc, char const *argv[])
{
	glc(16,10);
	cout << x << " " << y << " " << g << endl;
	return 0;
}