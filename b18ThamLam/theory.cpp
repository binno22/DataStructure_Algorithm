#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(int argc, char const *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<int> q; // Max_Heap
	priority_queue<int, vector<int>, greater<int>> Q; //MIn_Heap
	q.push(10);
	cout << q.top();
	return 0;
}
