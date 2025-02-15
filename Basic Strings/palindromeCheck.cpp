#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(1)
*/
void solve() {
    string s; cin >> s;

    int i = 0, j = s.size() - 1;
    while(i < j) {
        if(s[i] == s[j]) {
            i++;
            j--;
        } else {
            cout << "False" << endl;
            return;
        }
    }
    cout << "True" << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}