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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(!root)
            return {};
        int count=0;
        vector<vector<int>>vec;
        int flag=true;
        queue<TreeNode*>q;
        TreeNode* cur;
        q.push(root);
        while(!q.empty())
        {
            int len=q.size();
            vector<int>temp(len);
            for(int i=0;i<len;i++)
            {
                cur=q.front();
                q.pop();
                int ind=(flag)?i:(len-1-i);
                temp[ind]=cur->val;
                if(cur->left)q.push(cur->left);
                if(cur->right)q.push(cur->right);
            }
            vec.push_back(temp);
            temp.clear();
            flag=!flag;
        }
        return vec;
    }
};