#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(no. of digits)
    SC: O(1)
*/
void solve() {
    int n; cin >> n;

    int count = 0;
    while(n > 0) {
        int digit = n % 10;
        if(digit & 1) count++;
        n = n / 10;
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