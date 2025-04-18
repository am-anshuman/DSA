#include<bits/stdc++.h>
using namespace std;

bool isHeap(vector<int>& nums) {
    int n = nums.size();
    for(int i = n/2 - 1; i >= 0; i--) {
        int lChild = 2 * i + 1;
        int rChild = 2 * i + 2;
        if(lChild < n && nums[lChild] < nums[i]) return false;
        if(rChild < n && nums[rChild] < nums[i]) return false;
    }
    return true;
}

void solve() {
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        nums.push_back(x);
    }
    bool isMinHeap = isHeap(nums);
    cout << isMinHeap << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}