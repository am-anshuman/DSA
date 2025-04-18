#include<bits/stdc++.h>
#include "buildHeap.h"
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        nums.push_back(x);
    }
    MaxHeap maxHeap;
    maxHeap.buildMaxHeap(nums);
    for(int x : nums) cout << x << " ";
    cout << endl;
    cin.get();
    cin.get();
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}