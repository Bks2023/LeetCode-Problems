class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.length();

        int j=0;
        for(int i=0; i<n; i++){
            if(s[j]==t[i]){
                j++;
            }
        }
        return j==s.length();
        
    }
};