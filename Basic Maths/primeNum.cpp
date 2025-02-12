#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(1)
*/
void solveBrute() { 
    int n; cin >> n;

    if(n < 2) {
        cout << "false" << endl;
        return;
    }

    int count = 0;
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) count++;
    }

    cout << (count == 2 ? "true" : "false") << endl;
    return;
}

/*
    TC: O(sqrt(n))
    SC: O(1)
*/
void solveOptimal() {
    int n; cin >> n;

    if(n < 2) {
        cout << "false" << endl;
        return;
    }
    int count = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            count++;
            if(n/i != i) count++;
        }
    }

    cout << (count == 2 ? "true" : "false") << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}