#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	multimap<int,int> m;
	m.insert({100,200});
	m.insert({100,400});
	m.insert({100,600});
	m.insert({300,500});

	auto pos = m.find(100);
	m.erase(++pos);
	for(auto x : m){
		cout << x.first << " " << x.second << endl;
	}
	return 0;
}