#include<bits/stdc++.h> 
using namespace std;

// size() : tra ve kich thuoc cua set
// insert(x) : them mot phan tu vao trong set
// find() : tim phan tu ton tai trong set,no tra den end() khi ma khong tim thay
// count(x) : dem xem co bao nhieu phan tu x o trong set
// erase(x) : xoa phan tu x o trong set

// multiset : van la set nhung cho phep cac phan tu turng nhau
// unordered_set : khong xep thu tu

int main(int argc, char const *argv[])
{
	set<int> s;
	s.insert(1);
	s.insert(2);
	s.insert(3);
	for(set<int>::iterator it = s.begin(); it != s.end(); ++it){
		cout << *it << " ";
	}
	cout << endl;
	vector<int> v{1,2,3,4,5,6,7,5,3};
	set<int> r(v.begin(),v.end());
	for(int x  : r){
		cout << x << " ";
	}
	cout << endl;
	unordered_set<int> un(v.begin(),v.end());
	for(int x : un){
		cout << x << " ";
	}
	return 0;
}