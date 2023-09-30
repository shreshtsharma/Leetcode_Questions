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
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        solve(root,maxi);
        return maxi;
    }
    int solve(TreeNode*root,int &maxi)
    {
        if(root==NULL)
        return 0;
        int lsum=max(0,solve(root->left,maxi));
        int rsum=max(0,solve(root->right,maxi));
        maxi=max(root->val+lsum+rsum,maxi);
        return root->val+max(lsum,rsum);
    }
   
};