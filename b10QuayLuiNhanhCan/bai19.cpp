#include<bits/stdc++.h>
using namespace std;

// Sinh ra tat ca hoan vi cua 5 so
// Sinh ra chinh hop lap cua : +(1), -(2) , *(3)
vector<vector<int>> hoanvi,chinhhop;
int a[100],b[100];

void Try(int i){
	for(int j = 1; j <= 3; j++){
		b[i] = j;
		if(i == 4){
			vector<int> tmp(b + 1,b + 5);
			chinhhop.push_back(tmp);
		}else Try(i + 1);
	}
}

void init(){
	int x[] = {1,2,3,4,5};
	do{
		vector<int> tmp(x,x + 5);
		hoanvi.push_back(tmp);
	}while(next_permutation(x,x + 5));
	Try(1);
	for(int i = 1; i <= 5; i++) cin >> a[i];
	for(auto it1 : hoanvi){
		for(auto it2 : chinhhop){
			int res = a[it1[0]];
			for(int k = 0; k < 4; k++){
				if(it2[k] == 1) res += a[it1[k + 1]];
				else if(it2[k] == 2) res -= a[it1[k + 1]];
				else res *= a[it1[k + 1]];
			}
			if(res == 23){
				cout << "YES\n"; return;
			}	
		}		
	}
	cout << "NO\n";
}

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
    	init();
    }
	return 0;
}