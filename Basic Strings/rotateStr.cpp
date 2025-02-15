#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n²)
    SC: O(n)
*/
void solveBrute() {
    string s; cin >> s;
    string goal; cin >> goal;

    string left = "", right;
    for(int i = 0; i< s.size(); i++) {
        right = s.substr(i);
        if((right + left) == goal) {
            cout << "true" << endl;
            return;
        }
        left += s[i];
    }

    cout << "false" << endl;
    return;
}

/*
    TC: O(n)
    SC: O(n)
*/
void solveOptimal() {
    string s; cin >> s;
    string goal; cin >> goal;
    
    string twiceS = s + s;
    cout << (twiceS.find(goal) != string::npos ? "true" : "false") << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}