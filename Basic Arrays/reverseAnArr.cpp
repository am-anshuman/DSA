#include<bits/stdc++.h>
using namespace std;

/*
    TC: O(n)
    SC: O(1)
*/
void solve() {
    int n; cin >> n;
    vector<int> arr;

    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        arr.push_back(x);
    }

    int i = 0, j = n-1;
    while(i < j) {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(auto x: arr) {
        cout << x << " ";
    }
    cout << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}