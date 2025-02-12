#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(min(n1, n2))
    SC: O(1)
*/
void solveBrute() {
    int n1; cin >> n1;
    int n2; cin >> n2;

    int gcd = 1;
    for(int i = 1; i <= min(n1, n2); i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
        }
    }

    cout << gcd << endl;
    return;
}

/*
    TC: O(min(n1, n2))
    SC: O(1)
*/
void solveBetter() {
    int n1; cin >> n1;
    int n2; cin >> n2;

    int gcd = 1;
    for(int i = min(n1, n2); i >= 1; i--) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;
            break;
        }
    }

    cout << gcd << endl;
    return;
}

/*
    TC: O(log(min(n1, n2)))
    SC: O(1)

    Euclidean Algorithm
*/
void solveOptimal() {
    int n1; cin >> n1;
    int n2; cin >> n2;

    while(n1 > 0 && n2 > 0) {
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }

    if(n1 == 0) cout << n2 << endl;
    else cout << n1 << endl;

    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}