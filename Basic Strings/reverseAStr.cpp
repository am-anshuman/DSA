#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(n)
*/
void solveBrute() {
    string s; cin >> s;

    stack<char> st;

    for(auto ch: s) {
        st.push(ch);
    }

    for(int i = 0; i < s.size(); i++) {
        s[i] = st.top();
        st.pop();
    }

    cout << s << endl;
    return;
}

/*
    TC: O(n)
    SC: O(1)
*/
void solveOptimal() {
    string s; cin >> s;
    
    int i = 0, j = s.size()-1;
    while(i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    cout << s << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solveOptimal();
    }

    return 0;
}