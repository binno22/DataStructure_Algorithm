#include<bits/stdc++.h>
using namespace std;

// Char
// A-Z : 65 - 90
// a-z : 97-122
// 0-9 : 48 - 57
// Mot so ham hay dung : 

// bool islower(char c) : kiem tra in thuong
// bool isupper(char c) : kiem tra in hoa
// bool isalpha(char c) : kiem tra chu cai
// bool isdigit(char c) : kiem tra chu so
// int tolower(char c) : tra ve gia tri ascii cua chu cai thuong
// int toupper(char c) : tra ve gia tri ascii cua chu cai in hoa

// String
// size(),length() : ham lay do dai cua xau
// toan tu so sanh : == != > < >= <=

int main(int argc, char const *argv[])
{
	// char c; cin >> c;
	// cout << isalpha(c) << endl;
	// string s; cin >> s; dung nhan khi gap phim space
	// cout << s << endl;
	// int x; cin >> x;
	// Khi nhap x va bam enter do cin ko xu li duoc enter cho nen nhay xuong luong getline
	// thi getline da duoc nhap xong khi gap phim enter
	// =>>> Do vay,chung ta can phai xoa bo nho dem bang lenh cin.ignore() hoac la getchar()
	// cin.ignore(); 
	// getchar();
	// string s;
	// getline(cin,s); // Nhan tu luong cin,dung nhap s cho den khi nhan duoc phim enter
	// cout << s ;
// Noi hai xau lai voi nhau
	string s = "hello";
	string t = "world";
	string st = s + t;
	cout << st << endl;
	return 0;
}