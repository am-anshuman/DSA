#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums, int i) {
    if(i == nums.size()-1) return true;
    if(nums[i] > nums[i+1]) return false;
    return isSorted(nums, i+1);
}

void solve() {
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x; cin >>x;
        nums.push_back(x);
    }

    cout << (isSorted(nums, 0) ? "true" : "false") <<endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}