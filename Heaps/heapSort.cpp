#include<bits/stdc++.h>
#include "buildHeap.h"
using namespace std;

void heapify(vector<int>& nums, int last, int ind) {
    int largestIdx = ind;
    int lChild = 2 * ind + 1, rChild = 2 * ind + 2;
    if(lChild <= last && nums[lChild] > nums[largestIdx]) largestIdx = lChild;
    if(rChild <= last && nums[rChild] > nums[largestIdx]) largestIdx = rChild;
    if(largestIdx != ind) {
        swap(nums[ind], nums[largestIdx]);
        heapify(nums, last, largestIdx);
    }
}

void heapSort(vector<int>& nums) {
    int n = nums.size();
    MaxHeap heap;
    heap.buildMaxHeap(nums);
    int last = n - 1;
    while(last > 0) {
        swap(nums[0], nums[last]);
        last -= 1;
        if(last > 0) heapify(nums, last, 0);
    }
}

void solve() {
    int n; cin >> n;
    vector<int> nums(n);
    for(int& x: nums) cin >> x;

    heapSort(nums);

    for(int x: nums) cout << x << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}