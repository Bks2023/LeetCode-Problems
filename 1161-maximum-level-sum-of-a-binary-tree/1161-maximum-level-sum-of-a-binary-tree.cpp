/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        if(!root) return {};
        int ans=0;
        int maxsum=INT_MIN;
        int level = 0;
        
        
        queue<TreeNode*> Q;
        Q.push(root);
        
        while(!Q.empty()){
            level++;
            int size=Q.size();
            int sum=0;
            
            for(int i =0 ; i<size; i++){
                TreeNode* temp=Q.front();
                Q.pop();
                if(temp->left) Q.push(temp->left);
                if(temp->right) Q.push(temp->right);
                sum+=temp->val;
            }
            if(sum > maxsum){
                maxsum=sum;
                ans =level;
            
            }
        }
        
        return ans;
        
    }
};