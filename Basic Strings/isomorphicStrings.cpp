#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(n)
*/
void solve() {
    string s, t;
    cin >> s >> t;

    unordered_map<char, char> mapS, mapT;

    for(int i = 0; i < s.size(); i++) {
        char cs = s[i], ct = t[i];
        if(
            (mapS.count(cs) && mapS[cs] != ct) || 
            (mapT.count(ct) && mapT[ct] != cs)
        ) {
            cout << "false" << endl;
            return;
        }

        mapS[cs] = ct;
        mapT[ct] = cs;
    }

    cout << "true" << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}