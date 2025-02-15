#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(1)
*/
bool comparator(pair<int, char> p1, pair<int, char> p2) {
    if(p1.first > p2.first) return true;
    if(p1.first < p2.first) return false;
    return p1.second < p2.second;
}

void solve() {
    string s;
    cin >> s;

    vector<pair<int, char>> freq(26);

    for(int i = 0; i < 26; i++) {
        freq[i] = {0, i + 'a'};
    }

    for(char ch: s) {
        freq[ch - 'a'].first++;
    }

    sort(freq.begin(), freq.end(), comparator);

    vector<char> ans;
    for(int i = 0; i < 26; i++) {
        if(freq[i].first > 0) ans.push_back(freq[i].second);
    }

    for(auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}