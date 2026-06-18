class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1; 
        int right = INT_MAX;
      
        // Perform a binary search between the range [left, right]
        while (left < right) {
            int mid = left + (right - left) / 2;
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
        return left;
    }
};
