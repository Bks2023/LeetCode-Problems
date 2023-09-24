class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        vector<int> s1(26,0), s2(26,0),s3(26,0),s4(26,0);
        
        for(auto ch: word1){
            s1[ch-'a']++;
            s2[ch-'a']=1;
            
        }
        
          for(auto ch: word2){
            s3[ch-'a']++;
            s4[ch-'a']=1;
            
        }
        
        sort(s1.begin(),s1.end());
        // sort(s2.begin(),s2.end());
        sort(s3.begin(),s3.end());
        // sort(s4.begin(),s4.end());
        
        
        
        return s1==s3 && s2==s4;
    }
};