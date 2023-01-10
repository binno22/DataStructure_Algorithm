#include<bits/stdc++.h>
using namespace std;

// to_string(n) : chuyen so n sang dang string
// stoi(s) : chuyen string sang dang int
// stoll(s) : chuyen string sang dang long long
// Lat nguoc xau res : reverse(res.begin(),res.end())

long long stolong(string s){
	long long ans = 0;
	for(auto x : s){
		ans = ans*10 + (x - '0');
	}
	return ans;
}

string tostring(long long n){
	string s = "";
	while(n){
		s = (char)(n%10 + '0') + s;
		n /= 10;
	}
	return s;
}

int main(int argc, char const *argv[])
{
	string s; getline(cin,s);
	cout << stolong(s) << endl;
	long long n; cin >> n;
	cout << tostring(n) << endl;
	return 0;
}