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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> vec;
        if(!root)
            return vec;
        queue<TreeNode*> q;
        q.push(root);
        double sum=0;
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                TreeNode* cur=q.front();
                sum+=(double)cur->val;
                q.pop();
                if(cur->left){q.push(cur->left); }
                if(cur->right){q.push(cur->right); }
            }
            vec.push_back((double)sum/len);
            sum=0;
        }
        return vec;
    }
};