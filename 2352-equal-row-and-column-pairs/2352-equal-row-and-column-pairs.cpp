class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        
        map<vector<int> ,int> mp;
        int m=grid.size();
        int n=grid[0].size();
        
        
        for(int i=0 ; i< m ; i++){
            mp[grid[i]]++;
        }
        
        int ans=0;
        
        for(int i=0 ; i<n ; i++){
            vector<int>temp;
            
            for(int j=0 ; j<m ;j++){
                temp.push_back(grid[j][i]);
            }
            
            ans+=mp[temp];
        }
        
        return ans;
    }
};