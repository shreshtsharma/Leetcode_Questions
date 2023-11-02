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
int res=0;
    int averageOfSubtree(TreeNode* root) {
        postorder(root,0,0);
        return res;
    }
    pair<int,int> postorder(TreeNode* root,int sum,int cnt)
    {
        if(!root)
        {
            return {0,0};
        }
       pair<int,int> left= postorder(root->left,sum,cnt);
        pair<int,int> right=postorder(root->right,sum,cnt);
        int currsum=left.first+right.first+root->val;
        int nodes=left.second+right.second+1;
        if(currsum/nodes==root->val)
        res++;
        return {currsum,nodes};
    }
};