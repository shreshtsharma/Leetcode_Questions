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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> vec;
        if(!root)
        {
            return vec;
        }
        queue<TreeNode*>q;
        TreeNode* cur;
        q.push(root);
        
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                cur=q.front();
                q.pop();
                if(i==len-1)
                {
                    vec.push_back(cur->val);
                }
                if(cur->left)
                {
                    q.push(cur->left);
                }
                if(cur->right)q.push(cur->right);
            }
        }
        return vec;
    }
};