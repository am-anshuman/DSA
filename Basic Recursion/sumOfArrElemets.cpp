#include<bits/stdc++.h>
using namespace std;

#define pb push_back

int calcSum(vector<int>& nums, int i) {
    if(i >= nums.size()) return 0;
    return nums[i] + calcSum(nums, i + 1);
}

int arraySum(vector<int>& nums) {
    return calcSum(nums, 0);
}

void solve() {
    int n; cin >> n;
    vector<int> nums;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        nums.pb(x);
    }

    int sum = arraySum(nums);
    cout << sum << endl;
    return;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }
}