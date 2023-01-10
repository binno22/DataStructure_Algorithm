#include<bit/stdc++.h>
using namespace std;

// complete search

void Try(i){
	Thu gan cac gia tri co the cho phan tu X[i]
	for(j = <Gia tri 1>...<Gia tri m>){
		<Kiem tra xem co gan duoc j cho X[i] hay khong>
		X[i] = j;
		<Kiem tra xem i co phai phan tu cuoi cung cua cau hinh hay khong>
		if(i == n){
			<Tim duoc 1 cau hinh>
		}else{
			<Tiep tuc di xay dung phan tu thu i + 1>
			Try(i + 1);
		}
		<Back track>
		<Bo ghi nhan X[i] = j>
	}
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	return 0;
}