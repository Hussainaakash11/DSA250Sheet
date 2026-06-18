class KthLargest {
public:
    priority_queue<int, std::vector<int>, greater<>> minHeap;
    // Store the value of 'k' to know which largest element to keep track of.
    int kthSize;
    KthLargest(int k, vector<int>& nums) {
        kthSize = k;
        // Add initial numbers to the heap
        for (int num : nums) {
            add(num);
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        // If the heap size is greater than k, remove the smallest element.
        if (minHeap.size() > kthSize) {
            minHeap.pop();
        }
        // Return the kth largest element (top of the min heap).
        return minHeap.top(); 
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */