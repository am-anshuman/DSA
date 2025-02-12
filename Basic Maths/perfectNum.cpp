#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(1)
*/
void solveBrute() {
    int n; cin >> n;

    int sum = 0;
    for(int i = 1; i < n; i++) {
        if(n % i == 0) sum += i;
    }

    cout << (sum == n) << endl;
    return;
}

/*
    TC: O(sqrt(n))
    SC: O(1)
*/
void solveOptimal() {
    int n; cin >> n;

    if(n == 1) {
        cout << false << endl;
        return;
    }

    int sum = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            sum += i;
            if(n/i != n && n/i != i) sum += (n/i);
        }
    }

    cout << (sum == n) << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}