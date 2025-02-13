#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(1)
*/
void solve() {
    int n; cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    int count = 0;
    for(auto x: arr) {
        if(x & 1) count++;
    }

    cout << count << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}