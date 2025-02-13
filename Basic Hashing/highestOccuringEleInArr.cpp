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

    int maxEle, maxFreq = 0;

    unordered_map<int, int> mp;

    for(auto x: arr) {
        mp[x]++;
    }

    for(auto it: mp) {
        int ele = it.first;
        int freq = it.second;

        if(freq > maxFreq) {
            maxFreq = freq;
            maxEle = ele;
        } else if(freq == maxFreq) {
            maxEle = min(maxEle, ele);
        }
    }

    cout << maxEle << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}