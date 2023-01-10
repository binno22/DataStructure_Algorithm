#include<bits/stdc++.h>
using namespace std;

// map,multimap,unordered_map
// multimap : cac gia tri key co the co value khac nhau

// Dem tan suat xuat hien cac phan tu trong mang
// map<datatype_1,datatype_2> m;
// Moi key thi ung voi mot value : m[key] = value
// insert({x,y}) :
// size()
// find : m.find(key) == m.end() ==>> khong tim thay
// auto pos = m.find(key) <=> map<int,int>::iterator pos = m.find(key)
// Tim thay : cout << (*pos).first << (*pos).second;
// count(key) : return so lan xuat hien cua key trong map
// erase(key) : xoa phan tu trong map
// m.begin() : tro toi phan tu dau tien trong map
// m.rbegin() : tro toi phan tu cuoi cung trong map 
// auto pos = m.end(); --pos;

int main(int argc, char const *argv[])
{
	map<int,int> m;
	m.insert({1,2});
	m.insert({2,5});
	m.insert({4,7});
	m.insert({2,3});
	// Duyet qua map
	for(auto x : m){
		cout << x.first << " " << m[x.first] << endl;
	}
	for(pair<int,int> x : m){
		cout << x.first << " " << x.second << endl;
	}
	for(auto x : m){
		cout << x.first << " " << x.second << endl;
	}
	for(map<int,int>::iterator it = m.begin(); it != m.end(); ++it){
		cout << (*it).first << " " << (*it).second << endl;
		}
	return 0;
}