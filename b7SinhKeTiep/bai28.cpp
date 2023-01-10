#include<bits/stdc++.h>
using namespace std;

int n,a[100];
bool ok1,ok2;
string s1 = "",s2 = "";
vector<string> v;
// Sinh hoan vi
void sinh1(){
	int i = s1.size() - 2;
	while(i >= 0 && s1[i] > s1[i + 1]){
		--i;
	}
	if(i == -1) ok1 = false;
	else{
		int j = s1.size() - 1;
		while(s1[i] > s1[j]) --j;
		swap(s1[i],s1[j]);
		reverse(s1.begin() + i + 1,s1.end());
	}
}
// Sinh tat ca cac so tu n so
void sinh2(){
	int i = s2.size() - 1;
	while(i >= 0 && s2[i] == (char)(n + 48)){
		--i;
	}
	if(i == -1) ok2 = false;
	else{
		s[i]++;
		for(int j = i + 1; j < s2.size(); j++){
			s2[j] = '1';
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> n;
	ok1 = true;
	for(int i = 0; i < n; i++){
		s1 += (char)(i + 65);
	}

	while(ok1){
		s2 = string(n,'1');
		ok2 = true;
		while(ok2){
			string t = "";
			t = s1 + s2;
			v.push_back(t);
			sinh2();
		}
		sinh1();
	}
	for(string x : v) cout << x << endl;
	return 0;
}