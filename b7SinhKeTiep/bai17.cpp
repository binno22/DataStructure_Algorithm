#include<bits/stdc++.h>
using namespace std;

int n,a[1001];
string s;
bool ok;
// sinh xau nhi phan
void sinh(){
	int i = s.size()  - 1;
	while(i >= 0 && s[i] == '9'){
		s[i] = '0';
		--i;
	}
	if(i == -1) ok = false;
	else
		s[i] = '9';
}

int main(int argc, char const *argv[])
{
	int t; cin >> t;
	s = "0000000000";//Khoi tao
	ok = true;
	vector<string> v;
	while(ok){
		v.push_back(s);
		sinh();
	}
	for(int i = 1; i <= 500; i++){
		for(string x : v){
			long long tmp = stoll(x);
			if(tmp && tmp % i == 0){
				a[i] = tmp; break;
			}
		}
	}
	while(t--){
		cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}