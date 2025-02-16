#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;

lli factorial(int n) {
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

void solve() {
    int n; cin >> n;
    lli fact = factorial(n);
    cout << fact << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}