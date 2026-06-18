class Solution {
public:
    int maxArea(vector<int>& height) {
        int leftptr = 0;
        int rightptr = height.size() - 1;
        int result = 0;

        while (leftptr < rightptr) {
            int area = min(height[leftptr], height[rightptr]) * (rightptr - leftptr);

            result = max(result, area);

            if (height[leftptr] <= height[rightptr]) {
                leftptr++;
            } else {
                rightptr--;
            }
        }
        return result; 
    }
};
