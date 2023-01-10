#include<bits/stdc++.h>
using namespace std;

// Sinh nhi phan

// <Xay dung cau hinh dau tien>
// while(<Chua Phai Cau Hinh Cuoi Cung>){
// 		<In ra cau hinh hien tai>
// 		<Sinh ra cau hinh tiep theo>
// }

int n,x[100];
bool ok;
// khoi tao cau hinh dau tien
void ktao(){
	for(int i = 1; i <= n; i++){
		x[i] = 0;
	}
}
// Kiem tra xem la cau hinh cuoi cung hay chua
bool ktra(){
	for(int i = 1; i <= n; i++){
		if(x[i] == 0) return false;
	}
	return true;
}

void sinh(){
	int i = n;
	// Di tim bit dau tien bang 0 tinh tu ben phai
	while(i >= 1 && x[i] == 1){
		x[i] = 0;
		--i;// dich bit ve ben trai
	}
	// tim duoc bit dau tien = 0
	if(i == 0) ok = false;
	else x[i] = 1;
}

int main(int argc, char const *argv[])
{
	cin >> n;
	ok = true;
	while(ok){
		for(int i = 1; i <= n; i++){
			cout << x[i] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}