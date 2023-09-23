class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int Max= *max_element (candies.begin() , candies.end());
        vector<bool> ans;
        
        for( auto i : candies){
            
            int x=i+extraCandies;
            if(x >= Max){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
            
        }
        
        return ans;
        
    }
};