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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return builtTree(preorder,inorder);
    }
    TreeNode*builtTree(vector<int> preorder,vector<int>inorder)
    {
        vector<int> inleft,preleft,inright,preright;
        TreeNode* root=NULL;
        int i=0;
        if(preorder.size()>0)
        {
            root=new TreeNode(preorder[0]);
            while(inorder[i]!=preorder[0])
            {
                inleft.push_back(inorder[i]);
                i++;
            }
            for(int j=i+1;j<inorder.size();j++)
            {
                inright.push_back(inorder[j]);
            }
            for(int x=1;x<=i;x++)
            {
                preleft.push_back(preorder[x]);
            }
            for(int x=i+1;x<preorder.size();x++)
            {
                preright.push_back(preorder[x]);
            }
            root->left=builtTree(preleft,inleft);
            root->right=builtTree(preright,inright);
        }
        return root;
    }
};