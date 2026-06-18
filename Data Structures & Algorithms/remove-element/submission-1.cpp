class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> arr;
        for (int num : nums ){
            if(num!=val) arr.push_back(num);
        }
        for(int i=0;i<arr.size();i++){
            nums[i] = arr[i];
        }
        return arr.size();
    }
};