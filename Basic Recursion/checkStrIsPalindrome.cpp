#include<bits/stdc++.h>
using namespace std;

void helper(string& str, int i, int j) {
    if(i > j) return;
    swap(str[i], str[j]);
    helper(str, i+1, j-1);
}

bool palindromeCheck(string& s) {
    string str = s;
    helper(s, 0, s.size()-1);
    return str == s;
}

void solve() {
    string s; cin >> s;
    bool palindrome = palindromeCheck(s);
    cout << (palindrome ? "true" : "false") << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}