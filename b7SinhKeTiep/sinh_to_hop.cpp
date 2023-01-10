#include<bits/stdc++.h>
using namespace std;

// Sinh ra tat ca tap con co k phan tu tu n phan tu

int N,K,X[100];
bool ok;
// Khoi tao cau hinh dau tien
void ktao(){
	for(int i = 1; i <= K; i++){
		X[i] = i;
	}
}
// Sinh ra cac tap con 
void sinh(){
	int i = K;
	// Tai vi tri thu i thi gia tri max ma X[i] co the dat duoc la N - K + i
	// X[i] == N - K + i ???
	// Neu dat max thi dich sang ben trai
	// Neu chua dat thi tat ca cac phan tu tu : i + 1 --> K tang them 1 don vi
	while(i >= 1 && X[i] == N - K + i){
		--i;
	}
	if(i == 0) ok =  false;
	else{
		X[i]++;
		for(int j = i + 1; j <= K; j++){
			X[j] = X[j - 1] + 1;
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> N >> K;
	ktao();
	ok = true;
	while(ok){
		for(int i = 1; i <= K; i++){
			cout << X[i] << " ";
		}
		cout << endl;
		sinh();
	}
	return 0;
}