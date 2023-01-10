// Nhap vao mot xau ki tu dem ki tu xuat hien nhieu nhat trong xau
// Neu co nhieu ki tu thi lay ki tu nho nhat xuat hien trong tu dien
#include<bits/stdc++.h>
using namespace std;

void solve1(){
	string s; cin >> s;
	int max= 0;
	char c;
	for(int i = 0; i < s.size() - 1; i++){
		int fre = 1;
		for(int j = i + 1; j < s.size(); j++){
			if(s[j] == s[i]) ++fre;
		}
		if(max < fre){
			max = fre;
			c = s[i];
		}else if(max == fre){
			if(c > s[i]) c = s[i];
		}

	} 
	cout << c << " " << max << endl;
}

void solve2(){
	string s; getline(cin,s);
	int a[256] = {0};
	for(int i = 0; i < s.size(); i++){
		a[s[i]]++;
	}
	int res = 0; char ans;
	for(int i = 0; i < 256; i++){
		if(a[i] > res){
			res = a[i];
			ans = (char)(i);
		}
	}
	cout << res << " " << ans << endl;
}

int main(int argc, char const *argv[])
{
	solve2();
	return 0;
}