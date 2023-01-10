#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s = "ngon ngu lap trinh";
	stringstream ss(s); // Tach tung tu ra o trong xau
	string word;
	while(ss >> word){
		cout << word << endl;
	}
	// Tach theo ki tu muon
	string t = "toi-hoc-lap-trinh";
	stringstream sss(t);
	string w;
	while(getline(sss,w,'-')){
		cout << w << endl;
	}
	return 0;
}