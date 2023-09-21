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
        void solve(TreeNode* root, bool goleft, int steps, int& path){
            if(!root) return;
            
            path=max(path,steps);
            
            if(goleft){ 
                solve(root->left, false, steps+1,path);
                solve(root->right, true, 1,path);
            }
            else{
                solve(root->left, false, 1,path);
                solve(root->right, true, steps+1,path);
            }
        }
    int longestZigZag(TreeNode* root) {
        int path=0;
        solve(root, false,0,path);
        solve(root,true,0,path);
        return path;
         
    }
};