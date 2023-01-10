#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> v;

bool check(int a[]){
	for(int i = 0; i < n - 1 ; i++){
		if(a[i] == a[i + 1] + 1 || a[i] == a[i + 1] - 1) return false;
	}
	return true;
}

int main(int argc, char const *argv[])
{
	cin >> n;
	int a[n];
	for(int i = 0; i < n ;i++) a[i] = i + 1;
	do{
		if(check(a)){
			string t = "";
			for(int i = 0; i < n; i++){
				t += to_string(a[i]);
			}
			v.push_back(t);
		}
	}while(next_permutation(a, a + n));
	for(string x : v){
		cout << x << endl;
	}
	return 0;
}