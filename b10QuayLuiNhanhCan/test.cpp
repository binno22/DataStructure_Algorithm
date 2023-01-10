#include<bits/stdc++.h>
using namespace std;

vector<string> garbage;
vector<int> travel;

bool check(string s,char c){
	for(int i = 0; i < s.size(); i++){
		if(s[i] == c) return true;
	}
	return false;
}

int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int ans = 0,p1 = -1,p2 = 0,g1 = -1,g2 = 0,m1 = -1,m2 = 0;
        for(int i = 0; i < garbage.size(); i++){
            ans += garbage[i].size();
            if(check(garbage[i],'P')) p1 = max(p1,p2);
            if(check(garbage[i],'G')) g1 = max(g1,g2);
            if(check(garbage[i],'M')) m1 = max(m1,m2);
            if(i != garbage.size() - 1){
                p2 += travel[i];
                g2 += travel[i];
                m2 += travel[i];
            }
        }
        return ans + p1 + g1 + m1;
    }


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    for(int i = 0; i < n; i++){
    	string x; cin >> x; garbage.push_back(x);
    }
    for(int i = 0; i < n - 1; i++){
    	int x; cin >> x; travel.push_back(x);
    }
    cout << garbageCollection(garbage,travel);
	return 0;
}