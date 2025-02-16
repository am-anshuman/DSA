#include<bits/stdc++.h>
using namespace std;

int fib(int n) {
    if(n == 0 || n == 1) return n;
    return fib(n-2) + fib(n-1);
}

void solve() {
    int n; cin >> n;
    int ans = fib(n);
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