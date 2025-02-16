#include<bits/stdc++.h>
using namespace std;

void helper(string& s, int i, int j) {
    if(i > j) return;
    swap(s[i], s[j]);
    helper(s, i+1, j-1);
}

string reverseString(string& s) {
    helper(s, 0, s.size() - 1);
    return s;
}

void solve() {
    string s; cin >> s;
    reverseString(s);
    cout << s << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}