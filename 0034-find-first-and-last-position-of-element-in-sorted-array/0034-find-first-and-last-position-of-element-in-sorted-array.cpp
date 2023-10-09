class Solution {
public:
    int solve(vector<int>& nums, int low , int high , int target){
        while(low<=high){
            int mid= low+(high-low)/2;
            if(nums[mid] <target) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0, high = nums.size()-1;
        int start= solve(nums,low,high,target);
        int end= solve(nums,low, high ,target+1);

        if(start < nums.size() && nums[start]==target){
            return {start ,end-1};
        }
        else{
            return {-1 ,-1};
        }
        
    }
};