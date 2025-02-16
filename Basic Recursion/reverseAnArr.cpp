#include<bits/stdc++.h>
using namespace std;

void reverseArr(vector<int>& nums, int i, int j) {
    if(i > j) return;
    swap(nums[i], nums[j]);
    reverseArr(nums, i+1, j-1);
}

void solve() {
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x; cin >>x;
        nums.push_back(x);
    }

    reverseArr(nums, 0, nums.size()-1);

    for(auto it: nums) {
        cout << it << " ";
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