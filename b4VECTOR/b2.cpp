#include<bits/stdc++.h>
using namespace std;


// Cho mot so rat lon tinh tong cac chu so trong so do

int main(int argc, char const *argv[])
{
	string s; getline(cin,s);
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		sum += s[i] - '0';
	}
	cout << sum << endl;
	return 0;
}