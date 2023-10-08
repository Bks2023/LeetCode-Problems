class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();

        vector<int> curr(n+1,0);

        for(int i=1; i<=n ; i++){
            curr[i]=i;
        }

        for(int i=1 ; i<=m ; i++){
            int prev=curr[0];
            curr[0]=i;
            for(int j=1  ; j<=n ; j++){
                int temp=curr[j];
                if(word1[i-1]==word2[j-1]) curr[j]=prev;
                else curr[j]=min(prev,min(curr[j-1] ,curr[j])) + 1;

                prev=temp;
            }
        }
        return curr[n];
        
    }
};