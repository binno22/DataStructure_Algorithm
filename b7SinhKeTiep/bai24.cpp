#include<bits/stdc++.h>
using namespace std;

int n;
string s = "";
bool ok;

// Ham sinh
void sinh(){
	int i = n - 1;
	while(i >= 0 && s[i] == (i + 1) + '0'){
		--i;
	}
	if(i == -1) ok = false;
	else{
		int tmp = (int)s[i];
		++tmp;
		s[i] = (char)tmp;
		for(int j = i + 1; j < n; j++){
			int t = (int)s[j - 1];
			++t;
			s[j] = (char)t;
			
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> n;
	s = string(n,'0');
	ok = true;
	while(ok){
		for(int i = 0; i< n; i++){
			if(s[i] != '0') cout << s[i] << ' ';
		}
		cout << endl;
		sinh();
	}
	return 0;
}