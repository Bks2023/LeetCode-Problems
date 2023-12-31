class Solution {
public:
    int minOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> temp;
        temp.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[i-1]){
                temp.push_back(nums[i]);
            }
        }

        int add = nums.size()-1;
        int mn = INT_MAX;
        for(int i=0;i<temp.size();i++){
            int lo = i;
            int hi = temp.size()-1;
            while(hi - lo > 1){
                int mid = (lo+hi)/2;
                if(temp[mid] <= temp[i]+add){
                    lo = mid;
                }else{
                    hi = mid-1;
                }
            }
            if(temp[hi] <= temp[i]+add){
                int diff = hi-i;
                mn = min(mn, add-diff);
            }else{
                int diff = lo-i;
                mn = min(mn, add-diff);
            }
        }

        return mn;
    }
};