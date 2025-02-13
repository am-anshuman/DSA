#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(n)
*/
void solve() {
    int n; cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    int hFreq = INT_MIN, lFreq = INT_MAX;

    unordered_map<int, int> mp;

    for(auto x: arr) {
        mp[x]++;
    }

    for(auto it: mp) {
        hFreq = max(hFreq, it.second);
        lFreq = min(lFreq, it.second);
    }

    cout << hFreq + lFreq << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}