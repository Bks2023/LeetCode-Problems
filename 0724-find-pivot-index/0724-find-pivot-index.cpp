class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();

        int LeftSum=0;
        int RightSum=0;

        for(auto i: nums) RightSum+=i;

        for(int i=0 ; i<n; i++){
            RightSum-=nums[i];
            if(LeftSum==RightSum) return i;
            LeftSum+= nums[i];
        }
        return -1;
        
    }
};