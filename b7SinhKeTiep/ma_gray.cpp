#include<bits/stdc++.h>
using namespace std;

// Thuat toan chuyen ma nhi phan sang ma gray :
// bit dau tien cua ma gray va ma nhi phan la giong nhau
// cac bit con lai o vi tri i cua ma gray co duoc bang
// cach XOR 2 bit thu i va thu i- 1 cua xau nhi phan

// Thuat toan chuyen tu ma gray sang ma nhi phan :
// bit dau tien cua ma gray va ma nhi phan la giong nhau
// cac bit thu i con lai cua xau nhi phan co duoc bang cach
// kiem tra ki tu thu i cua ma gray
// Neu bit thu i cua ma gray la 0 thi bit thu i cua ma nhi phan
// se copy bit thu i -1 cua ma gray
// ngc lai,bit thu i cua ma nphan se la lat bit thu i -1 cua ma gray

void solve1(string s){
	string t = ""; t += s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i] == s[i - 1]) t+= '0';
		else t += '1';
	}
	cout << t << endl;
}

void solve2(string s){
	string t = "";
	t += s[0];
	for(int i = 1; i < s.size(); i++){
		if(s[i] == '1'){
			if(t[i - 1] == '0') t += '1';
			else t += '0';
		}else t += t[i - 1];
	}
	cout << t << endl;
}

int main(int argc, char const *argv[])
{
	int te; cin >> te;
	while(te--){
		string s;
		cin >> s;
		solve2(s);
	}
	return 0;
}