#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(no. of digits)
    SC: O(1)
*/
void solve() {
    int n; cin >> n;

    int maxm = INT_MIN;
    while(n > 0) {
        int digit = n % 10;
        maxm = max(maxm, digit);
        n = n / 10;
    }

    cout << maxm << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}