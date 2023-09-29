class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {

        vector<int> ans;

        sort(potions.begin(), potions.end());
        
        for(int i=0 ; i< spells.size(); i++){
            
            int left=0;
            int right= potions.size()-1;
            int SuccessIndex=potions.size();
            while(left<=right){
                int mid=left+(right-left)/2;
                long long temp= (long long)spells[i]*potions[mid];
                if( temp>= success){
                    SuccessIndex=mid;
                    right=mid-1;
                    
                }
                else left=mid+1;
            }
            ans.push_back(potions.size()-SuccessIndex);
            
        }

        return ans;
        
    }
};