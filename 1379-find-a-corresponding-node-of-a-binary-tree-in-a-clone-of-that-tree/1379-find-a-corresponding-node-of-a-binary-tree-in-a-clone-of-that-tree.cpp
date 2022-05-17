/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*>q;
        int tar=target->val;
        TreeNode* cur;
        int flag=0;
        TreeNode* temp;
        q.push(cloned);
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                cur=q.front();
                q.pop();
                if(cur->val==tar)
                {
                    temp=cur;
                    flag=1;
                }
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            if(flag)
            break;
        }
        return temp;
    }
};