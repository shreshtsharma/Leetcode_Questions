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
    vector<vector<int>> levelOrder(TreeNode* root) {
       
        vector<vector<int>> res;
         if(root==NULL)
        {
        return res;
        }
        vector<int>temp;
        TreeNode* var;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty())
        {
            
            int len=q.size();
            for(int i=0;i<len;i++)
            {
                    var=q.front();
                if(var->left!=NULL)
                    {
                        q.push(var->left);
                    }

                if(var->right!=NULL)
                    {
                        q.push(var->right);
                    }
                    q.pop();
                     temp.push_back(var->val);
                
            }
            res.push_back(temp);
            temp.clear();
        }
        return res;
    }
};