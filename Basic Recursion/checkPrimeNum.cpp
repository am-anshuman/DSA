#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n, int x) {
    if(x > sqrt(n)) return true;
    if(n % x == 0) return false;
    return isPrime(n, x+1);
}

bool checkPrime(int n) {
    if(n <= 1) return false;

    return isPrime(n, 2);
}

void solve() {
    int n; cin >> n;
    cout << (checkPrime(n) ? "true" : "false") << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}