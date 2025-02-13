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

    bool flag = true;
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {flag = false; break;}
    }
    cout << (flag ? "true" : "false") << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}