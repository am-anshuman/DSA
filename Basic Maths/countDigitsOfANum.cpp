#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(no. of digits)
    SC: O(1)
*/
void solveBrute() { 
    int n; cin >> n;

    if(n == 0) {
        cout << 1 << endl;
        return;
    }
    
    int count = 0;
    while(n > 0) {
        count++;
        n = n / 10;
    }

    cout << count << endl;
    return;
}

/*
    TC: O(1)
    SC: O(1)
*/
void solveOptimal() {
    int n; cin >> n;

    if(n == 0) {
        cout << 1 << endl;
        return;
    }

    cout << floor(log10(n) + 1) << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}