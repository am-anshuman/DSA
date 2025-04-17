#include<bits/stdc++.h>
using namespace std;

class MinHeap {
private:
    void heapifyDown(vector<int>& nums, int ind) {
        int n = nums.size();
        int smallestIdx = ind;
        int lChild = 2 * ind + 1, rChild = 2 * ind + 2;
        if(lChild < n && nums[lChild] < nums[smallestIdx]) smallestIdx = lChild;
        if(rChild < n && nums[rChild] < nums[smallestIdx]) smallestIdx = rChild;
        
        if(smallestIdx != ind) {
            swap(nums[ind], nums[smallestIdx]);
            heapifyDown(nums, smallestIdx);
        }
    }

    void heapifyUp(vector<int>& nums, int ind) {
        int parentIdx = (ind - 1) / 2;
        if(ind > 0 && nums[ind] < nums[parentIdx]) {
            swap(nums[ind], nums[parentIdx]);
            heapifyUp(nums, parentIdx);
        }
    }
public:
    void heapify(vector<int>& nums, int ind, int val) {
        if(val > nums[ind]) {
            nums[ind] = val;
            heapifyDown(nums, ind);
        } else {
            nums[ind] = val;
            heapifyUp(nums, ind);
        }
    }
};

class MaxHeap {
private:
    void heapifyUp(vector<int>& nums, int ind) {
        int parentIdx = (ind - 1) / 2;
        if(ind > 0 && nums[ind] > nums[parentIdx]) {
            swap(nums[ind], nums[parentIdx]);
            heapifyUp(nums, parentIdx);
        }
    }

    void heapifyDown(vector<int>& nums, int ind) {
        int n = nums.size();
        int largestIdx = ind;
        int lChild = 2 * ind + 1, rChild = 2 * ind + 2;
        if(lChild < n && nums[lChild] > nums[largestIdx]) largestIdx = lChild;
        if(rChild < n && nums[rChild] > nums[largestIdx]) largestIdx = rChild;

        if(largestIdx != ind) {
            swap(nums[ind], nums[largestIdx]);
            heapifyDown(nums, largestIdx);
        }
    }
public:
    void heapify(vector<int>& nums, int ind, int val) {
        if(val > nums[ind]) {
            nums[ind] = val;
            heapifyUp(nums, ind);
        } else {
            nums[ind] = val;
            heapifyDown(nums, val);
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
    int ind; cin >> ind;
    int val; cin >> val;
    MinHeap minHeap;
    minHeap.heapify(nums, ind, val);
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