#include<bits/stdc++.h>
using namespace std;

int NnumbersSum(int n) {
    if(n == 1) return 1;
    return n + NnumbersSum(n-1);
}

void solve() {
    int n; cin >> n;
    int sum = NnumbersSum(n);
    cout << sum << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}