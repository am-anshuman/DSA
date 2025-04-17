#include<bits/stdc++.h>
using namespace std;

class MinHeap {
private:
    void heapifyDown(vector<int>& nums, int ind, int n) {
        int smallestIdx = ind;
        int lChild = 2 * ind + 1, rChild = 2 * ind + 2;
        if(lChild < n && nums[lChild] < nums[smallestIdx]) smallestIdx = lChild;
        if(rChild < n && nums[rChild] < nums[smallestIdx]) smallestIdx = rChild;

        if(smallestIdx != ind) {
            swap(nums[ind], nums[smallestIdx]);
            heapifyDown(nums, smallestIdx, n);
        }
    }
public:
    void buildMinHeap(vector<int>& nums) {
        int n = nums.size();
        for(int i = n/2 - 1; i >= 0; i--) {
            heapifyDown(nums, i, n);
        }
    }
};

class MaxHeap {
private:
    void heapifyDown(vector<int>& nums, int ind, int n) {
        int largestIdx = ind;
        int lChild = 2 * ind + 1, rChild = 2 * ind + 2;
        if(lChild < n && nums[lChild] > nums[largestIdx]) largestIdx = lChild;
        if(rChild < n && nums[rChild] > nums[largestIdx]) largestIdx = rChild;

        if(largestIdx != ind) {
            swap(nums[ind], nums[largestIdx]);
            heapifyDown(nums, largestIdx, n);
        }
    }
public:
    void buildMaxHeap(vector<int>& nums) {
        int n = nums.size();
        for(int i = n/2 - 1; i >= 0; i--) {
            heapifyDown(nums, i, n);
        }
    }
};

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
}

int main() {
    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}