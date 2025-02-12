#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(n)
*/
int factorial(int n) {
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}
void solveRecursion() {
    int n; cin >> n;
    
    cout << factorial(n) << endl;
    return;
}

/*
    TC: O(n)
    SC: O(1)
*/
void solveIteration() {
    int n; cin >> n;

    int fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    
    cout << fact << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveIteration();
    }

    return 0;
}