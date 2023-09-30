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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int,int>mp;
        for(int i=0;i<inorder.size();i++)
        {
            mp[inorder[i]]=i;
        }
        int poststart=postorder.size()-1,postend=0;
        int instart=0,inend=inorder.size()-1;
        return constructTree(inorder,postorder,poststart,postend,instart,inend,mp);
    }
    TreeNode* constructTree(vector<int>&inorder,vector<int>&postorder,int poststart,int postend,int instart,int inend,unordered_map<int,int>&mp)
    {
        if(postend>poststart || instart>inend)
        {
            return NULL;
        }
        TreeNode* root=new TreeNode(postorder[poststart]);
        int temp=mp[postorder[poststart]];
        int nele=inend-temp;
        root->right=constructTree(inorder,postorder,poststart-1,poststart-nele,temp+1,inend,mp);
        root->left=constructTree(inorder,postorder,poststart-nele-1,postend,instart,temp-1,mp);
        return root;
    }
};











