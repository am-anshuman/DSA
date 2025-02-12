#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(min(n1, n2))
    SC: O(1)
*/
void solveBrute() {
    int n1; cin >> n1;
    int n2; cin >> n2;

    int lcm;
    int n = max(n1, n2);
    int i = 1;

    while(1) {
        int mul = n * i;

        if(mul % n1 == 0 && mul % n2 == 0) {
            lcm = mul;
            break;
        }
        i++;
    }

    cout << lcm << endl;
    return;
}

/*
    TC: O(log(min(n1, n2)))
    SC: O(1)
*/
int gcd(int n1, int n2) {
    while(n1 > 0 && n2 > 0) {
        if(n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }

    if(n1 == 0) return n2;
    return n1;
}
void solveOptimal() {
    int n1; cin >> n1;
    int n2; cin >> n2;

    cout << (n1*n2)/gcd(n1, n2) << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}