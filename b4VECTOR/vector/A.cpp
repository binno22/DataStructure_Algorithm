#include<bits/stdc++.h>
using namespace std;

// vector<datatype> name_vector
// size() : tra ve kich thuoc mang
// push_back(x) : them phan tu x vao cuoi vector
// pop_back() : xoa mot phan tu o cuoi vector
// erase 
// to_string(n) : chuyen so n sang dang string
// stoi(s) : chuyen string sang dang int
// stoll(s) : chuyen string sang dang long long

// Khai bao vector a co n phan tu : vector<int> a(n);
// Khoi tao vector a co n phan tu giong nhau : vector<int> a(n,10); deu mang value = 10


int main(int argc, char const *argv[])
{
	int n; cin >> n;
	vector<int> v(n); // int v[n];
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	for(auto x : v) cout << x << " ";
	vector<int> a;
	a.push_back(10);
	a.push_back(20);
	a.push_back(30);
	a.push_back(40);
// Duyet phan tu trong mang
// 1. Duyet thong thuong
	for(int i = 0; i < a.size(); ++i){
		cout << a[i] << " ";
	}
	cout << endl;
// 2. Dung for each
	for(auto x : a){
		cout << x << " ";
	}
	cout << endl;
// 3. Dung iterator
	vector<int>::iterator it; //:: toan tu pham vi
	for(it = a.begin();it != a.end(); ++it){
		cout << *it << " "; // * : toan tu dai tham chieu
	}
	return 0;
}