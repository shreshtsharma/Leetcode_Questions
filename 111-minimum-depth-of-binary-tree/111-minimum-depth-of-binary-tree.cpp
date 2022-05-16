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
    int minDepth(TreeNode* root) {
           if(!root)
            return 0;
        queue<TreeNode*>q;
        int count=0;
        TreeNode* cur;
        q.push(root);
        int temp=0;
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                cur=q.front();
                q.pop();
                if(cur->left==NULL && cur->right==NULL)
                    temp=1;
                else{
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
                }
            }
            count++;
            if(temp!=0)
            {
                break;
            }
            
        }
        return count;
    }
};