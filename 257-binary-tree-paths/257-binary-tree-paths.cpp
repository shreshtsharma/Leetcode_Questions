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
        string str;
        vector<string> st;
        solve(str,st,root);
        return st;
    }
    void solve(string str,vector<string> & st,TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        str+=to_string(root->val);
        str+="->";
        if(root->left==NULL && root->right==NULL)
        {
            str.erase(str.size()-2,str.size()-1);
            st.push_back(str);
        }
        solve(str,st,root->left);
        solve(str,st,root->right);
        
            
    }
};