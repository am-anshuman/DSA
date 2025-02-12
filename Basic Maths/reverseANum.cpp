#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(no. of digits)
    SC: O(1)
*/
void solve() {
    int n; cin >> n;

    int rev = 0;
    while(n > 0) {
        int digit = n % 10;
        rev = (rev * 10) + digit;
        n = n / 10;
    }

    cout << rev << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}