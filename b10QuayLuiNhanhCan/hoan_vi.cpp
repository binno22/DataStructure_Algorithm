#include<bits/stdc++.h>
using namespace std;

int X[100],n,visit[100];

void in(){
	for(int i = 1; i <= n; i++) cout << X[i];
}

void Try(int i){
	for(int j = 1; j <= n; j++){
		if(visit[j] == 0){
			X[i] = j;
			visit[j] = 1;
			if(i == n){
				in(); cout << endl;
			}else Try(i + 1);
			// bo ghi nhan
			visit[j] = 0;
		}
	}
}

int main(int argc, char const *argv[])
{
	cin >> n;
	memset(visit,0,sizeof(visit));
	Try(1);
	return 0;
}