#include<bits/stdc++.h>
using namespace std;

char c;
bool ok;

string s = "";

bool check(){
	if(s.size() <= 4) return s[0] == 'A' || s[s.size() - 1] == 'A';
	for(int i = 0 ; i < s.size() - 1; i++){
		if(s[i] == 'A' && s[i + 1] == 'E' || s[i] == 'E' && s[i + 1] == 'A') return true;
	}
	return false;
}
// Sinh ra hoan vi
void sinh(){
	int i =s.size() - 1;
	while(i >= 0 && s[i] > s[i + 1]){
		--i;
	}
	if(i == -1) ok = false;
	else{
		int j = s.size() - 1;
		while(s[i] > s[j]) --j;
		swap(s[i],s[j]);
		reverse(s.begin() + i + 1,s.end());

	}
}

int main(int argc, char const *argv[])
{
	cin >> c;
	ok = true;
	for(char i = 'A'; i <= c; i++) s += i;
	while(ok){
		if(check()){
			cout << s << endl;
		}
		sinh();
	}
	return 0;
}