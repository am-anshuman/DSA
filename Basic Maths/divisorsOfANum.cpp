#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(sqrt(n)) A number n can have at max 2*sqrt(n) divisors
*/
void solveBrute() {
    int n; cin >> n;
    vector<int> ans;

    for(int i = 1; i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
        }
    }

    for(auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
    return;
}

/*
    TC: O(sqrt(n)) + O(k*log(k))
    SC: O(sqrt(n)) A number n can have at max 2*sqrt(n) divisors
*/
void solveOptimal() {
    int n; cin >> n;
    vector<int> ans;

    for(int i = 1; i*i <= n; i++) {
        if(n % i == 0) {
            ans.push_back(i);
            if(n/i != i) ans.push_back(n/i);
        }
    }

    sort(ans.begin(), ans.end());

    for(auto x: ans) {
        cout << x << " ";
    }
    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}