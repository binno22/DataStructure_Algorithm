#include<bits/stdc++.h>
using namespace std;

int N,X[100];
bool ok;
// Sinh ra cau hinh dau tien
void ktao(){
	for(int i = 1; i <= N; i++){
		X[i] = i;
	}
}

void sinh(){
	int i = N - 1;
	// Tim phan tu dau tien tu phai sang sao cho X[i] < X[i + 1]
	while(i >= 1 && X[i] > X[i + 1]){
		--i;
	}
	if(i == 0) ok =  false;
	else{
		int j = N;
		while(X[j] < X[i]) --j;
		// X[j] : phan tu lon hon X[i] ma nho nhat
		swap(X[i],X[j]);
		// Sap xep cac phan tu tu i + 1 => N theo thu tu tang dan
		// sort(X + i + 1, X + N + 1) O(nlog(n))
		reverse(X + i + 1, X + N + 1); // O(n)
	}
}


// [x,y] : sort(a + x,a + y + 1);
// permutation
// next_permutation(a,a + N) : sinh ra hoan vi ke tiep
// prev_permutation() : sinh ra hoan vi truoc do

int main(int argc, char const *argv[])
{
	cin >> N;
	ktao();
	ok = true;
	while(ok){
		for(int i = 1; i <= N; i++){
			cout << X[i] << " ";
		}
		cout << endl;
		sinh();
	}
	return 0;
}