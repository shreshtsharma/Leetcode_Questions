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
    bool isSymmetric(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)
            return true;
        else if(root->left==NULL || root->right==NULL)
        {
            return false;
        }
            
        vector<int> vec;
        queue<TreeNode*> q;
        TreeNode* cur;
        q.push(root);
        while(!q.empty())
        {
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                cur=q.front();
                q.pop();
                if(cur==NULL)
                {
                    vec.push_back(0);
                    continue;
                }
                vec.push_back(cur->val);
                if(cur->left)q.push(cur->left);
                else
                {
                    q.push(NULL);
                }
                if(cur->right)q.push(cur->right);
                else
                {
                    q.push(NULL);
                }
            }
            if(ispallindrome(vec)==false)
            {
                return false;
            }
            vec.clear();
        }
        return true;
    }
    bool ispallindrome(vector<int> vec)
    {
        int i=0;
        int j=vec.size()-1;
        for(i=0;i<vec.size()/2;i++,j--)
        {
            if(vec.at(i)!=vec.at(j))
            {
                return false;
            }
        }
        return true;
    }
};