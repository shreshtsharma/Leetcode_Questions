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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string res="";
        solve(root,ans,res);
        return ans;
    }
    void solve(TreeNode* root,vector<string>&ans,string res)
    {
        if(root==NULL)
        return;
        if(root->left==NULL && root->right==NULL)
        {
            res+=to_string(root->val);
            ans.push_back(res);
            return;
        }
        res+=to_string(root->val)+"->";
        solve(root->left,ans,res);
        solve(root->right,ans,res);
       
       
       
    }
};