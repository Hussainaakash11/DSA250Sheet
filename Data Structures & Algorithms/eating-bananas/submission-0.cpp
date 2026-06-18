class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1; 
        int right = 1e9;
      
        // Perform a binary search between the range [left, right]
        while (left < right) {
            int mid = left + (right - left) / 2; // Prevents overflow
            int hoursSpent = 0;
            for (int pile : piles) {
                hoursSpent += (pile + mid - 1) / mid;
            }
            if (hoursSpent <= h) {
                right = mid;
            } else { 
                left = mid + 1;
            }
        }
        // 'left' is now the minimum speed at which Koko can eat all the bananas within 'h' hours.
        return left;
    }
};
