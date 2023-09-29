class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       int left = 0;
        int right = nums.size() - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            // Compare mid element with its neighbors
            if (nums[mid] < nums[mid + 1]) {
                // The peak must be on the right side
                left = mid + 1;
            } else {
                // The peak must be on the left side, or the current mid is a peak
                right = mid;
            }
        }

        return left; 
        
    }
};