class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {

        unordered_map<int ,int> mp;

        for(int i:arr){
            mp[i]++;
        }

        unordered_set<int> occ;

       for(auto& i :mp){
           if(occ.count(i.second)>=1) return false;
           occ.insert(i.second);
           

       }
        
        return true;
    }
};