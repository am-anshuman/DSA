#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(no. of digits)
    SC: O(1)
*/
int countDigits(int n) {
    if(n == 0) return 1;
    int count = log10(n) + 1;
    return count;
}
void solve() {
    int n; cin >> n;
    
    int num = n;
    int count = countDigits(n);
    int sum = 0;

    while(n > 0) {
        int digit = n % 10;
        sum += pow(digit, count);
        n = n / 10;
    }
    
    cout << (sum == num) << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}