#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(1)
*/
void solve() {
    string s; cin >> s;

    int i, j;

    // Since the string can have leading zeroes we need to avoid them and reach the first non-zero number.
    for(i = 0; i < s.size(); i++) {
        if((s[i]-'0') == 0) continue;
        else break; // here from when we break we have the index of first non-zero number
    }

    // We'll start from the end to find the first odd number
    for(j = s.size()-1; j >= 0; j--) {
        if((s[j]-'0') & 1) break;
    }

    cout << s.substr(i, j-i+1) << endl;

    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}