#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n log n)
    SC: O(1)
*/
void solveBrute() {
    string s; cin >> s;
    string t; cin >> t;

    if(s.size() != t.size()) {
        cout << "false" << endl;
        return;
    }

    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    cout << (s == t ? "true" : "false") << endl;
    return;
}

/*
    TC: O(n)
    SC: O(1)
*/
void solveOptimal() {
    string s; cin >> s;
    string t; cin >> t;

    if(s.size() != t.size()) {
        cout << "false" << endl;
        return;
    }

    vector<int> hash(26, 0);

    for(char cs: s) hash[cs - 'a']++;
    for(char ct: t) hash[ct - 'a']--;

    for(int i: hash) {
        if(i != 0) {
            cout << "false" << endl;
            return;
        }
    }
    cout << "true" << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}