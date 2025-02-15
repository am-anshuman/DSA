#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(no. of digits)
    SC: O(1)
*/
void solve() {
    int n; cin >> n;
    vector<string> str;

    for(int i = 0; i < n; i++) {
        string s; cin >> s;
        str.push_back(s);
    }

    sort(str.begin(), str.end());

    string firstStr = str[0], secStr = str[str.size()-1];

    string ans = "";
    for(int i = 0; i < min(firstStr.size(), secStr.size()); i++) {
        if(firstStr[i] != secStr[i]) break;
        else {
            ans += firstStr[i];
        }
    }

    cout << ans << endl;

    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}