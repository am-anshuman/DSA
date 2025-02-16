#include<bits/stdc++.h>
using namespace std;

int addDigits(int n) {
    if(n < 10) return n;

    int sum = 0;
    while(n > 0) {
        int digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return addDigits(sum);
}

void solve() {
    int n; cin >> n;
    int ans = addDigits(n);
    cout << ans << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}