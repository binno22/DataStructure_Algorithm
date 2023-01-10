#include<bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = l; i <= r; i++)
#define FORD(i,l,r) for(int i = l; i >= r; i--)

int n,c[100][100],X[100],cmin = 1e9,res = 0,toiuu = 1e9;
bool visited[100];

void inp(){
	memset(visited,false,sizeof(visited));
	cin >> n;
	FOR(i,1,n){
		FOR(j,1,n){
			cin >> c[i][j];
			if(c[i][j])
				cmin = min(cmin,c[i][j]); // chi phi nho nhat
		}
	}
}

void Try(int i){
	FOR(j,2,n){
		if(!visited[j]){
			visited[j] = true;
			X[i] = j; // thanh pho lua chon di thu i la thanh pho j
			res += c[X[i]][X[i - 1]];
			if(i == n){
				toiuu = min(toiuu,res + c[X[n]][1]);
			}else if(res + cmin*(n - i + 1) < toiuu){
				Try(i + 1);
			}
			visited[j] = false;
			res -= c[X[i]][X[i - 1]];
		}
	}
}

//1->3->4->2->1

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; t= 1;
    while(t--){
    	inp();
    	X[1] = 1;
    	Try(2);
    	cout << toiuu << endl;
    }
	return 0;
}