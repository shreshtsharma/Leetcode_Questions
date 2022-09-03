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
    
    int goodNodes(TreeNode* root){
        int count=0;
        good(root,count,root->val);
        return count;
    }
    void good(TreeNode* root,int &count,int maxval)
    {
        if(!root)
        {
            return ;
        }
        if(root->val>=maxval)
        {
            count++;
            maxval=root->val;
        }
        good(root->left,count,maxval);
        good(root->right,count,maxval);
        
    }
};