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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return makebst(preorder,0,preorder.size()-1);
    }
    TreeNode* makebst(vector<int> preorder,int st,int end)
    {
        if(st>end)
        return NULL;
        TreeNode* root=new TreeNode(preorder[st]);
        int i=st+1;
        while(i<=end && preorder[i]<root->val)
        {
            i++;
        }
        root->left=makebst(preorder,st+1,i-1);
        root->right=makebst(preorder,i,end);
        return root;
    }
};